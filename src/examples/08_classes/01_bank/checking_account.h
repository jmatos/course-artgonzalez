//checking_account.h
#include<stdlib.h> //for rand() function
#include<iostream>

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount {
    friend void show_balance(const CheckingAccount &account);
    friend std::ostream& operator<<(std::ostream& out, const CheckingAccount &account);

    public:
        CheckingAccount() {get_balance_from_db();} //default constructor
        CheckingAccount(int b) : balance(b) { }
        int get_balance() const { return balance; }
        void deposit(int amount);
        void withdraw(int amount);
    private:
        int balance{0}; 
        void get_balance_from_db();
};

#endif