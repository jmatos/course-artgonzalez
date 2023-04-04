//customer.h
#include<vector>
#include<memory>
#include "bank_account.h"

using std::vector;
using std::unique_ptr;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    public:        
        Customer();
        unique_ptr<BankAccount>& get_account(int index) {return accounts[index];}

    private:        
        vector<unique_ptr<BankAccount>> accounts;
};

#endif