#include<iostream>
#include "checking_account.h"
#include "savings_account.h"
#include "atm.h"

using std::cout;
using std::cin;

int main()
{
	auto choice = 'c';

	srand(time(NULL));

	SavingsAccount savings;
	CheckingAccount account;

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
	
	return 0;
}