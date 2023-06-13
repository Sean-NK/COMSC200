#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <ostream>

class Account {
public:
    Account(double initialBalance);
    void credit(double amount);
    bool debit(double amount);
    double getBalance() const;

protected:
    double balance;
    friend std::ostream& operator<<(std::ostream& os, const Account& account);
    Account& operator+=(double amount);
    Account& operator-=(double amount);
    Account& operator=(const Account& other);
    friend Account operator+(const Account& account, double amount);
    friend Account operator+(double amount, const Account& account);
    friend Account operator-(const Account& account, double amount);

};

#endif // ACCOUNT_H

