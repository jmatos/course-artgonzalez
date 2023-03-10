#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	
	/*
	auto num = 5, num1 = 10;
	int &num_ref = num; //num_ref referernce the address of num

	cout<<"Num address is: "<<&num<<"\n";
	cout<<"Address that num_ref references: "<<&num_ref<<"\n";
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value that num_ref references: "<<num_ref<<"\n";

	num_ref = num1; //num_ref value of 5 was changed to 10
	cout<<"Value that num_ref referneces: "<<num_ref<<"\n";
	cout<<"Address that num_ref references: "<<&num_ref<<"\n";
	*/

	//pointer
	auto num = 5;
	int *num_ptr = &num; //point to the memory of num

	cout<<"Num address is: "<<&num<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value that num_prt points to: "<<*num_ptr<<"\n";

	*num_ptr = 10;
	cout<<"Num value: "<<num<<"\n";
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n";

	auto num1 = 10;
	num_ptr = &num1; //point to the address of variable num1
	cout<<"Num1 address is: "<<&num1<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";

	return 0;
}