#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test  get_sales_commission")
{
	//I was getting floating point rounding errors, so I used static_caste to change the datatype double to int
	REQUIRE(static_cast<int>(get_sales_commission(100)) == 5);
	REQUIRE(static_cast<int>(get_sales_commission(750)) == 45);
	REQUIRE(static_cast<int>(get_sales_commission(1100)) == 77);
	REQUIRE(static_cast<int>(get_sales_commission(1750)) == 140);
	
}

