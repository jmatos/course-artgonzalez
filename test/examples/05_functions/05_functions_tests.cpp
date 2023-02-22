#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "default.h"

TEST_CASE("Verify gross pay", "verification") {
	REQUIRE(get_gross_pay() == 800);
	//REQUIRE(get_gross_pay(40) == 800);
}


TEST_CASE("Verify gross pay overloaded method", "verification") {
	REQUIRE(get_gross_pay(40, 7.5) == 300);	
}