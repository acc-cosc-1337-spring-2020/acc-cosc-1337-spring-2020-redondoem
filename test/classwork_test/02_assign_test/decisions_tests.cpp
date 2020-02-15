#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Tests for Gross Pay")
{
	REQUIRE(gross_pay(10,15)  == 150);
	REQUIRE(gross_pay(5, 20) == 100);
	REQUIRE(gross_pay(20, 10) == 200);
	REQUIRE(gross_pay(50, 10) == 550);

}
TEST_CASE("Test get grade points")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
	REQUIRE(get_grade_points("G") == -1);



}

