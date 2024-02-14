# Template for Algorithm and Data Structures Exercise Training

## Requirements

### CMake

https://cmake.org/

### Git

### Catch2

https://github.com/catchorg/Catch2

#### Installation

Installing Catch2 from git repository

- bash

  ```bash
  $ git clone https://github.com/catchorg/Catch2.git
  $ cd Catch2
  $ cmake -Bbuild -H. -DBUILD_TESTING=OFF
  $ sudo cmake --build build/ --target install
  ```

- powershell

  ```powershell
  $ git clone https://github.com/catchorg/Catch2.git
  $ cd Catch2
  $ cmake -B ./build -H . -DBUILD_TESTING=OFF
  $ cmake --build build/ --target install
  ```

## Use

### CMake build project

```powershell
$ cmake -B ./build
$ cmake --build ./build
```

### Run tester

```powershell
$./build/tests/Debug/tests.exe
```
