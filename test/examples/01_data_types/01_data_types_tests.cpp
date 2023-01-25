#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */

TEST_CASE("Test Echo Variable", "verification") {
	REQUIRE(echo_variable(5) == 5);
	REQUIRE(echo_variable(10) == 10);
	REQUIRE(echo_variable(100) == 100);
}

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Test add to double 1", "verification") {
	//REQUIRE(add_to_double_1(0) == 0.9);
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("test case char test ASCII values", "verification") {
	REQUIRE(get_char_ascii('A') == 65);
	REQUIRE(get_char_ascii('a') == 97);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

