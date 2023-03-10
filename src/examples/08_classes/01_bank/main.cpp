#include<iostream>
#include "checking_account.h"
#include "savings_account.h"
#include "atm.h"

using std::cout;
using std::cin;

int main()
{
	BankAccount *account; //Assign the variable to point to later
	srand(time(NULL));

	SavingsAccount savings;
	show_balance(savings);
	cout<<savings.get_balance()<<"\n";

	account = &savings; //point to the memory of savings;
	cout<<account->get_balance()<<"\n";

	CheckingAccount checking;

/*
	auto choice = 'c';
	cout<<"Checking or Savings: ";
	cin>>choice;

	if (choice == 'c' || choice == 'C') {
		cout<<account;
		cout<<account.get_balance()<<"\n";
		run_menu(account);
	} else {
		cout<<savings;
		cout<<savings.get_balance()<<"\n";
		run_menu(savings);
	}
*/	
	return 0;
}