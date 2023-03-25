#include<iostream>
#include<vector>
#include<memory>

#include "checking_account.h"
#include "savings_account.h"
#include "atm.h"

using std::cout;
using std::cin;
using std::vector;
using std::unique_ptr;
using std::make_unique;
using std::move;
using std::string;

int main()
{
	vector<unique_ptr<BankAccount>> accounts; //create empty list of BankAccount pointers
	srand(time(NULL));

	accounts.push_back(make_unique<CheckingAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	run_menu(accounts);

	return 0;
}