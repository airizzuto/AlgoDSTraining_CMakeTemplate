cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(exercise_name)

add_compile_options(
  "$<$<COMPILE_LANG_AND_ID:CXX,MSVC>:>"
  "$<$<COMPILE_LANG_AND_ID:CXX,GCC>:-Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused>"
  "$<$<COMPILE_LANG_AND_ID:CXX,Clang>:-Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused>"
)

add_subdirectory(tests)
add_subdirectory(src)
