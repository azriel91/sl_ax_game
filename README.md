[![Build Status](https://travis-ci.org/azriel91/sl_ax_game.svg?branch=master)](https://travis-ci.org/azriel91/sl_ax_game) [![Build status](https://ci.appveyor.com/api/projects/status/yf5vxm9053e9irol/branch/master?svg=true)](https://ci.appveyor.com/project/azriel91/sl-ax-game/branch/master) [![Build Status](https://webapi.biicode.com/v1/badges/azriel/azriel/sl_ax_game/master)](https://www.biicode.com/azriel/sl_ax_game)

## sl\_ax\_game

Provides the game activity.

## Development

This is implemented as a [CppMicroServices](https://github.com/saschazelzer/CppMicroServices) module, and is built using
[biicode](https://www.biicode.com/).

### Requirements

* [biicode](https://www.biicode.com/downloads)
* [CMake](http://www.cmake.org/install/)
* [g++ 4.8](https://gcc.gnu.org/)

### Building

#### Linux

After cloning, in the repository directory run the following to build the block:

```bash
git submodule update --init        # initialize git submodules
bii-support/linux/build/shared.sh  # builds shared libraries
```

The test executable will be output as `bin/azriel_sl_ax_game_test_main`.

#### Windows

After cloning, in the repository directory run the following to build the block:

```bat
git submodule update --init           # initialize git submodules
bii-support\windows\build\shared.bat  # builds shared libraries
```

The test executable will be output as `bin\azriel_sl_ax_game_test_main.exe`.

## License

Copyright (c) Azriel Hoh. Licensed under the [Apache License v2.0](http://www.apache.org/licenses/LICENSE-2.0).
