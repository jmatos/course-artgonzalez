#include<iostream>
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL));

	CheckingAccount account;
	cout<<account.get_balance()<<"\n";

	CheckingAccount account1;
	cout<<account1.get_balance()<<"\n";

	return 0;
}