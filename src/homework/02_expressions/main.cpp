//write include statements
#include "hwexpressions.h"
#include<iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	auto meal_amount = 0.0;
	auto tip_rate = 0.0;
	auto tip_amount = 0.0;
	auto tax_amount = 0.0;
	auto total = 0.0;

	cout<<"Enter meal amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter tip rate: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<<"Meal Amount:\t\t"<<meal_amount<<"\n";
	cout<<"Sales Tax:\t\t"<<tax_amount<<"\n";
	cout<<"Tip Amount:\t\t"<<tip_amount<<"\n";
	cout<<"Total:\t\t\t"<<total<<"\n";

	return 0;
}
