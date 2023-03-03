#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"

TEST_CASE("Test checking get balance") {
	CheckingAccount account;
	REQUIRE(account.get_balance() > 0);
	REQUIRE(account.get_balance() <= 10000);
}

TEST_CASE("Test checking get balance with constructor") {
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);
}


TEST_CASE("Test checking deposit w good data") {
	CheckingAccount account(500);
	account.deposit(50);
	REQUIRE(account.get_balance() == 550);
}


TEST_CASE("Test checking deposit w invalid data") {
	CheckingAccount account(500);
	account.deposit(-50);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test checking withdraw w good data") {
	CheckingAccount account(500);
	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Test checking withdraw w invalid data") {
	CheckingAccount account(500);
	account.withdraw(-50);
	REQUIRE(account.get_balance() == 500);
	account.withdraw(501);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test checking deposit and withdraw") {
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
	account.deposit(50);
	REQUIRE(account.get_balance() == 550);
	account.withdraw(50);
	REQUIRE(account.get_balance() == 500);
}