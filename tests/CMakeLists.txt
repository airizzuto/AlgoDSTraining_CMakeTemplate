enable_testing()

find_package(Catch2 3 REQUIRED)

add_executable(tests tests.cpp tests.hpp)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain solution)

include(CTest)
include(Catch)
catch_discover_tests(tests)
