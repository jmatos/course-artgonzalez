//write include statements
#include<string>
#include<iostream>
#include "decisions.h"

using std::cin;
using std::cout;

int main() 
{
	auto grade = 0;
	auto option = 0;

	cout<<"MAIN MENU\n\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
	cout<<"Enter option: ";

	cin>>option;

	if (option == 1) {
		cout<<"Enter your grade: ";
		cin>>grade;
		if (grade < 0 || grade > 100) {
			cout<<"grade is out of range (0-100)\n";
		} else {
			cout<<"Your grade is: "<<get_letter_grade_using_if(grade)<<"\n";
		}
	} else if (option == 2) {
		cout<<"Enter your grade: ";
		cin>>grade;
		if (grade < 0 || grade > 100) {
			cout<<"grade is out of range (0-100)\n";
		} else {
			cout<<"Your grade is: "<<get_letter_grade_using_switch(grade)<<"\n";
		}
	} else if (option == 3) {
		cout<<"Bye Bye!\n";
	}
	
	return 0;
}