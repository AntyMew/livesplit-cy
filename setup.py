#!/usr/bin/env python3
import os
import subprocess
import sys
from distutils.cmd import Command
from setuptools import setup, find_packages
from setuptools.extension import Extension
from Cython.Build import cythonize


def where(file):
    """Check PATH environment variable for an executable file."""
    for path in os.environ["PATH"].split(os.pathsep):
        file_path = os.path.join(path, file)
        if os.path.isfile(file_path) and os.access(file_path, os.X_OK):
            return file_path
    return None


class BuildCoreCommand(Command):
    """Command to build all contained submodules."""

    description = "build all submodules"
    user_options = [
        ("cargo-path=", None, "path to cargo")
    ]

    FILE_NOT_FOUND = "file '{}' not found"
    NOT_EXECUTABLE = "file '{}' is not executable"
    PATH_NOT_FOUND = "cargo not found"
    CORE_NOT_FOUND = ("livesplit-core not found. Have you pulled all"
                      "submodules?\n\t(git submodule update --init"
                      "--recursive)")

    def initialize_options(self):
        """Initialize default path."""
        self.cargo_path = None

    def finalize_options(self):
        """Check for cargo executable, otherwise search for it on PATH."""
        manual_path = self.cargo_path
        self.cargo_path = manual_path or "cargo"
        if sys.platform == "win32" and not self.cargo_path.endswith(".exe"):
            self.cargo_path += ".exe"
        if manual_path:
            if not os.path.isfile(self.cargo_path):
                raise IOError(self.FILE_NOT_FOUND.format(self.cargo_path))
            elif not os.access(self.cargo_path):
                raise IOError(self.NOT_EXECUTABLE.format(self.cargo_path))
        else:
            self.cargo_path = where(self.cargo_path)
            if not self.cargo_path:
                raise Exception(self.PATH_NOT_FOUND.format(self.cargo_path))
        if not os.path.isdir("extern/livesplit-core"):
            raise Exception(self.CORE_NOT_FOUND)

    def run(self):
        """Run command."""
        manifest_arg = ["--manifest-path", "extern/livesplit-core/Cargo.toml"]

        command = ([self.cargo_path, "build"] + manifest_arg +
                   ["--release", "-p", "staticlib"])
        self.announce("building livesplit-core", level=2)
        subprocess.check_call(command)

        source = "extern/livesplit-core/target/release/liblivesplit_core.a"
        target = "lib/liblivesplit_core.a"
        if not os.path.isdir("lib"):
            os.mkdir("lib")
        if sys.platform != "win32":
            if not os.path.exists(target):
                os.symlink("../" + source, target)
        else:
            import shutil
            shutil.copy(source, target)

        command = ([self.cargo_path, "run"] + manifest_arg +
                   ["-p", "bindings", "--", "c", "-o", "include"])
        self.announce("generating c bindings", level=2)
        subprocess.check_call(command)


modules = [
    Extension(name + ".*",
              ["livesplit_cy/" + name + "/*.pyx"],
              include_dirs=["include", "."],
              libraries=["livesplit_core"],
              library_dirs=["lib"])
    for name in find_packages("livesplit_cy")
]

setup(cmdclass={"build_core": BuildCoreCommand},
      ext_modules=cythonize(modules,
                            build_dir="build",
                            include_path=["include", "."]))
