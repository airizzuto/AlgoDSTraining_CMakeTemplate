#include "tests.hpp"

TEST_CASE("Catch2 unit test library integration should successfully pass basic test", "[Catch2 Integration]")
{
  REQUIRE((2 + 3) == 5);
}

TEST_CASE("Factorials are computed", "[factorial]")
{
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}
