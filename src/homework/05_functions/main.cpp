#include "func.h"
#include<iostream>

using std::cout;
using std::cin;

void displayMenu() {
	cout<<"Menu\n\n";
	cout<<"1-Get GC Content\n"; 
	cout<<"2-Get DNA Complement\n";
	cout<<"3-Exit\n"; 
}

void handle_option(int option) {
	string dna = "";

	switch(option) {
	 	case 1:
			cout<<"Enter dna string for gc content: ";
			cin>>dna;
			cout<<"gc content: "<<get_gc_content(dna)<<"\n\n";
			break;
		case 2:
			cout<<"Enter dna string for dna complement: ";
			cin>>dna;
			cout<<"dna complement: "<<get_dna_complement(dna)<<"\n\n";
			break;
		case 3:
			cout<<"Exiting...\n\n";
			break;
		default:
			cout<<"Invalid option!\n\n";
			break;
	}
}

void run_menu() {
	auto option = 0;
	do {
		displayMenu();
		cout<<"Enter option: ";
		cin>>option;
		handle_option(option);
	} while (option != 3);
	
}

int main() 
{
	run_menu();
	return 0;
}