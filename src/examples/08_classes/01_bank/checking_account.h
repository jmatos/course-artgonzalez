//checking_account.h
#include<stdlib.h> //for rand() function

class CheckingAccount {
    public:
        CheckingAccount() {get_balance_from_db();} //default constructor
        CheckingAccount(int b) : balance(b) { }
        int get_balance() { return balance; }
    private:
        int balance{0}; 
        void get_balance_from_db();
};
