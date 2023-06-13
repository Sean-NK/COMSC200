#include <iostream>
#include "Account.h"

Account::Account(double initialBalance) {
    if (initialBalance >= 0.0) {
        balance = initialBalance;
    } else {
        balance = 0.0;
        std::cerr << "Error: Initial balance cannot be negative." << std::endl;
    }
}

void Account::credit(double amount) {
    balance += amount;
}

bool Account::debit(double amount) {
    if (amount <= balance) {
        balance -= amount;
        return true;
    } else {
        std::cerr << "Debit amount exceeded account balance." << std::endl;
        return false;
    }
}

double Account::getBalance() const {
    return balance;
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
    os << account.balance;
    return os;
}

Account& Account::operator+=(double amount) {
    credit(amount);
    return *this;
}

Account& Account::operator-=(double amount) {
    debit(amount);
    return *this;
}

Account& Account::operator=(const Account& other) {
    if (this != &other) {
        balance = other.balance;
    }
    return *this;
}

Account operator+(const Account& account, double amount) {
    Account result(account);
    result += amount;
    return result;
}

Account operator+(double amount, const Account& account) {
    return account + amount;
}

Account operator-(const Account& account, double amount) {
    Account result(account);
    result -= amount;
    return result;
}

