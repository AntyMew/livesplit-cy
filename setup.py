#!/usr/bin/env python3

from setuptools import setup, find_packages
from setuptools.extension import Extension
from Cython.Build import cythonize
from Cython.Compiler.Options import extra_warnings

modules = [
    Extension(name + ".*",
              sources=["livesplit_cy/" + name + "/*.pyx"],
              include_dirs=["include", "."],
              libraries=["livesplit_core"],
              library_dirs=["lib"])
    for name in find_packages("livesplit_cy")
]

setup(ext_modules=cythonize(modules,
                            build_dir="build",
                            include_path=["include", "."],
                            compiler_directives=extra_warnings))
