#ifndef HYUN_NAMKOONG_CHECKINGACCOUNT_H
#define HYUN_NAMKOONG_CHECKINGACCOUNT_H

#include "Hyun_Namkoong_Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(double initialBalance, double fee);
    void credit(double amount);
    bool debit(double amount);

    // 6. Overloaded operator declarations
    friend ostream& operator<<(ostream& os, const CheckingAccount& account);
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
