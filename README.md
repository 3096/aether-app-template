# aether-app-template
A Switch Homebrew app using the [Aether UI library](https://github.com/tallbl0nde/Aether), including a simple hello world example created by @tallbl0nde.

Documentation of Aether can be found [here](https://tallbl0nde.github.io/Aether/).

## Branches
This template repository contains 3 branches:
- `master`: contains example code
- `clean`: simplified starter code without the example and comments
- `portlibs`: same as `clean`, but does not use Aether as a submodule but from dkp's portlibs dir instead

## Building
You'll need the following packages installed through (dkp-)pacman in order to compile this template app:
```
devkitA64
libnx
switch-sdl2
switch-sdl2_gfx
switch-sdl2_image
switch-sdl2_ttf
```
Once these are installed, simply run `make` in the project directory.
