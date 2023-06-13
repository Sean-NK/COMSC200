#ifndef HYUN_NAMKOONG_ACCOUNT_H
#define HYUN_NAMKOONG_ACCOUNT_H

class Account {
public:
    Account(double initialBalance);
    void credit(double amount);
    bool debit(double amount);
    double getBalance() const;
    // 10. Add the following overloaded operator declarations in the Account class
    friend std::ostream& operator<<(std::ostream& os, const Account& account);
    Account& operator+=(double amount);
    Account& operator-=(double amount);
    Account& operator=(const Account& other);
    friend Account operator+(const Account& account, double amount);
    friend Account operator+(double amount, const Account& account);
    friend Account operator-(const Account& account, double amount);


protected:
    double balance;
};

#endif // ACCOUNT_H
