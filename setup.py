#!/usr/bin/env python3
import os
import subprocess
import sys

from distutils.cmd import Command
from distutils.log import INFO, ERROR
from distutils.spawn import find_executable

from setuptools import setup
from setuptools.extension import Extension


class BuildCoreCommand(Command):
    """Command to build the livesplit-core submodule."""

    description = "build livesplit-core submodule"
    user_options = [
        ("cargo-path=", None, "path to cargo")
    ]

    PATH_NOT_FOUND = "cargo not found"
    NOT_EXECUTABLE = "cargo found on path is not executable"
    CORE_NOT_FOUND = ("livesplit-core not found. Have you initialized its "
                      "submodule?\n\t(git submodule update --init "
                      "--recursive)")

    SUBMODULE_PATH = os.path.join("extern", "livesplit-core")
    MANIFEST_PATH = os.path.join(SUBMODULE_PATH, "Cargo.toml")
    RELEASE_PATH = os.path.join(SUBMODULE_PATH, "target", "release")
    BINDINGS_PATH = os.path.join(SUBMODULE_PATH, "capi", "bindings")

    BUILD_ARGS = [
        "build", "--manifest-path", MANIFEST_PATH, "--release", "-p",
        "staticlib"
    ]
    RUN_ARGS = [
        "run", "--manifest-path", MANIFEST_PATH, "-p", "bindings", "--", "c",
        "-o", BINDINGS_PATH
    ]

    def initialize_options(self):
        """Initialize default path."""
        self.cargo_path = "cargo"

    def finalize_options(self):
        """Confirm cargo executable is available and submodule is loaded."""
        path = find_executable(self.cargo_path)
        if not path:
            raise IOError(self.PATH_NOT_FOUND)
        elif not os.access(path, os.X_OK):
            raise IOError(self.NOT_EXECUTABLE)
        if not os.path.isdir("extern/livesplit-core"):
            raise Exception(self.CORE_NOT_FOUND)

    def run(self):
        """Run command."""
        def cargo_command(args):
            command = [self.cargo_path] + args
            subprocess.check_call(command)
        try:
            self.announce("building livesplit-core", level=INFO)
            cargo_command(self.BUILD_ARGS)
            self.announce("generating c bindings", level=INFO)
            cargo_command(self.RUN_ARGS)
        except subprocess.CalledProcessError:
            self.announce("failed to build livesplit-core!", level=ERROR)


# A representation of livesplit-cy's packages and modules in the following
# format: List[(name: str, sources: List[str])]
PACKAGES = [
    ("component", []),
    ("layout", [
        "component",
        "layout"
    ]),
    ("run", [
        "run",
        "segment"
    ]),
    ("time", [
        "atomic_date_time",
        "time_span",
        "time"
    ]),
    ("timer", [
        "shared_timer",
        "timer"
    ])
]

# A representation of this package's statically linked dependencies in the
# following format: List[(name: str, path: str, include path: str)]
STATIC_LIBS = [
    (
        "livesplit_core",
        BuildCoreCommand.RELEASE_PATH,
        BuildCoreCommand.BINDINGS_PATH
    )
]


def parse_libs():
    """Parse STATIC_LIBS into kwargs for setuptools Extensions."""
    if sys.platform == "win32":
        libraries, library_dirs = [], []
        include_dirs = ["include"]
        for name, ldir, idir in STATIC_LIBS:
            libraries.append(name)
            library_dirs.append(ldir)
            include_dirs.append(idir)
        return {
            "libraries": libraries,
            "library_dirs": library_dirs,
            "include_dirs": include_dirs
        }
    else:
        extra_objects = []
        include_dirs = ["include"]
        for name, ldir, idir in STATIC_LIBS:
            extra_objects.append(os.path.join(ldir, "lib{}.a".format(name)))
            include_dirs.append(idir)
        return {
            "extra_objects": extra_objects,
            "include_dirs": include_dirs
        }


def parse_packages(library_args, cython=False):
    """Parse PACKAGES into setuptools Extensions."""
    def parse_one(module):
        name, sources = module
        fullname = "livesplit_cy." + name
        source_dir = "" if cython else "src."
        package_path = os.path.join(*(source_dir + fullname).split("."))
        ext = ".pyx" if cython else ".c"

        return [
            Extension(fullname + "." + source,
                      [os.path.join(package_path, source + ext)],
                      **library_args)
            for source in sources
        ]

    return sum(map(parse_one, filter(None, PACKAGES)), [])


def main():
    """Run cythonized setup if available, else build setup from C sources."""
    try:
        from Cython.Build import cythonize
        libs = parse_libs()
        setup(cmdclass={"build_core": BuildCoreCommand},
              ext_modules=cythonize(parse_packages(libs, cython=True),
                                    build_dir="src",
                                    include_path=libs["include_dirs"]))
    except ImportError:
        setup(cmdclass={"build_core": BuildCoreCommand},
              ext_modules=parse_packages(parse_libs()))


if __name__ == "__main__":
    main()
