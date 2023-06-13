#ifndef HYUN_NAMKOONG_SAVINGSACCOUNT_H
#define HYUN_NAMKOONG_SAVINGSACCOUNT_H

#include "Hyun_Namkoong_Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(double initialBalance, double interestRate);
    double calculateInterest() const;
    // 1. Add the following overloaded operator declarations in the SavingsAccount class
    friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
    SavingsAccount& operator+=(double amount);
    SavingsAccount& operator-=(double amount);
    SavingsAccount& operator=(const SavingsAccount& other);
    friend SavingsAccount operator+(const SavingsAccount& account, double amount);
    friend SavingsAccount operator+(double amount, const SavingsAccount& account);
    friend SavingsAccount operator-(const SavingsAccount& account, double amount);


private:
    double interestRate;
};

#endif // SAVINGSACCOUNT_H
