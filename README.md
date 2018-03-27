# livesplit-cy

livesplit-cy is a speedrun timer library for Python, powered by [livesplit-core](https://github.com/LiveSplit/livesplit-core) and written in Cython.

This project's goal is to provide an optimized, compiled alternative to the auto-generated official Python bindings provided by livesplit-core. It also seeks to be suitably compatible with livesplit-core's Rust API.

## Usage:

Usage and API documentation is on hold pending a more final release. As of version 0.1.0, this project is still in its planning phase, and the current implementation is entirely a proof of concept. A complete rewrite is in the works.

## Building:

1. `python setup.py build_core`
   * Compiles livesplit-core and generates C headers. Depends on Rust
2. `python setup.py build_ext`

Note that `build_core` only needs to be run once to initialize the repo until the livesplit-core module is updated.

### Dependencies:

* setuptools
* Cython
* Rust: rustc, Cargo

## Contributing:

Pull requests welcome! Just fork the project, make your changes, and PR to `master`. c:

If you are making only small changes, feel free to commit to your fork's `master`. If you are developing a larger feature, it would be appreciated if you instead commit your changes to a descriptively named feature branch, ex. `feature/current-pace-component`.

Additionally, if and when you pull new changes from this repository after you've made local changes, please prefer rebasing over merging, i.e. with `git pull --rebase`. Of course, if you have already pushed the changes to a remote, then you should merge as usual.

### Linting:

Unfortunately, Cython has little support for linting. This project uses [flake8](https://gitlab.com/pycqa/flake8) with a few errors ignored to ensure compatibility with Cython. Please ensure your changes pass flake8 when making a pull request.

### Versioning:

This project uses uses [Semantic Versioning](https://semver.org/). You may use [ADVbumpversion](https://github.com/andrivet/ADVbumpversion) to easily bump the version number according to the bumpversion configuration settings in the [setup.cfg](./setup.cfg#L28).

## License:

Copyright (C) 2018  AntyMew

livesplit-cy is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

livesplit-cy is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with livesplit-cy.  If not, see \<http://www.gnu.org/licenses/>.
