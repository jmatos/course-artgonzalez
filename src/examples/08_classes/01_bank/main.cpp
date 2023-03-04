#include<iostream>
#include "checking_account.h"
#include "atm.h"

using std::cout;

int main()
{
	srand(time(NULL));

	CheckingAccount account;

	run_menu(account);

	//cout<<account;
	//cout<<account.get_balance()<<"\n";

	// show_balance(account);
	// cout<<account.get_balance()<<"\n";
	return 0;
}