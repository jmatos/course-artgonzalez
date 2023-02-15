#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	
	auto hours = 0;
	cout<<"Enter hours: ";
	cin>>hours;

	auto overtime = is_overtime(hours);

	if (overtime == true) 
	{
		cout<<"Overtime\n";
	} 
	else 
	{
		cout<<"NOT Overtime\n";
	}

	auto even = false;
	auto value = 0;
	
	cout<<"Enter a number: ";
	cin>>value;

	even = is_even(value);

	if (even)
	{
		cout<<value<<" is even\n";
	} 
	else 
	{
		cout<<value<<" is odd\n";
	}

	return 0;
}
