//atm.h
#include<iostream>
#include<vector>
#include<memory>
#include "bank_account.h"

using std::vector;
using std::unique_ptr;

void display_menu();
void run_menu(vector<unique_ptr<BankAccount>> &accounts);
void handle_menu_option(int option, unique_ptr<BankAccount> &account);