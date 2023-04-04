//atm.h
#include<iostream>
#include<vector>
#include<memory>
#include "customer.h"

using std::vector;
using std::unique_ptr;

void display_menu();
void run_menu(vector<Customer>& customers);
void handle_menu_option(int option, unique_ptr<BankAccount> &account);
int scan_card(int max_value);