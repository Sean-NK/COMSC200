#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(double initialBalance, double fee);
    void credit(double amount);
    bool debit(double amount);

    // Overloaded operator declarations
    friend std::ostream& operator<<(std::ostream& os, const CheckingAccount& account);
    CheckingAccount& operator+=(double amount);
    CheckingAccount& operator-=(double amount);
    CheckingAccount& operator=(const CheckingAccount& other);
    friend CheckingAccount operator+(const CheckingAccount& account, double amount);
    friend CheckingAccount operator+(double amount, const CheckingAccount& account);
    friend CheckingAccount operator-(const CheckingAccount& account, double amount);

private:
    double fee;
};

#endif // CHECKINGACCOUNT_H
