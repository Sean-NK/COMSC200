#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(double initialBalance, double interestRate);
    double calculateInterest() const;

private:
    double interestRate;
    friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
    SavingsAccount& operator+=(double amount);
    SavingsAccount& operator-=(double amount);
    SavingsAccount& operator=(const SavingsAccount& other);
    friend SavingsAccount operator+(const SavingsAccount& account, double amount);
    friend SavingsAccount operator+(double amount, const SavingsAccount& account);
    friend SavingsAccount operator-(const SavingsAccount& account, double amount);

};

#endif // SAVINGSACCOUNT_H

