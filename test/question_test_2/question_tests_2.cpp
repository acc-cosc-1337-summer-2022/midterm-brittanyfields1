#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
const double threshold = 0.0001;
TEST_CASE("test get_fahrenheit")
{
	//because of rounding errors we want to check numbers are close to each other
	//fuzzy comparison
	REQUIRE(abs(get_fahrenheit(37)- 98.6) <= threshold);
	REQUIRE(abs(get_fahrenheit(25)- 77) <= threshold);
	REQUIRE(abs(get_fahrenheit(0) - 32) <= threshold);

}
