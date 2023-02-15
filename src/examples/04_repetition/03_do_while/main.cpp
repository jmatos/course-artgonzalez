#include "do_while.h"

int main() 
{	
	auto option = 0;
	do {
		run_menu();	
		option = prompt_user();
		handle_option(option);
	} while(option != 3);
	
	return 0;
}