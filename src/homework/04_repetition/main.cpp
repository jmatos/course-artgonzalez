#include<iostream>
#include "dna.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	auto keep_going = true;
	auto option = 0;
	auto response = ' ';
	auto num1 = 0;
	auto num2 = 0;
	string inputString = "";

	do {		
		cout<<"1. Factorial\n";
		cout<<"2. Greatest Common Divisor\n";
		cout<<"3. Palindrome check\n";
		cout<<"4. Exit\n";	
		cout<<"Enter option: ";
		cin>>option;

		if (option == 4) {
			cout<<"Are you sure you want to exit? (y/n): ";
			cin>>response;
			keep_going = !(response == 'y' || response == 'Y');
		} else if (option == 1) { 
			cout<<"\nPlease enter a number for Factorial: ";
			cin>>num1;
			cout<<"Answer: "<<factorial(num1)<<"\n\n";
		} else if (option == 2) {
			cout<<"\nPlease enter number1 for GCD: ";
			cin>>num1;
			cout<<"\nPlease enter number2 for GCD: ";
			cin>>num2;
			cout<<"Answer: "<<gcd(num1, num2)<<"\n\n";
		} else if (option == 3) {
			cout<<"\nEnter a string: ";
			cin>>inputString;
			if (is_palindrome(inputString)) {
				cout<<"true"<<"\n";
			} else {
				cout<<"false"<<"\n";
			}
		}		

	} while(keep_going);

	return 0;
}