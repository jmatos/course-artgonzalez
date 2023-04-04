#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"

using std::make_unique;

Customer::Customer() {
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}