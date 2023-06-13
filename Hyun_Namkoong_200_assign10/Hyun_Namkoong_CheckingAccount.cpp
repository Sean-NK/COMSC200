#include "Hyun_Namkoong_CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee)
    : Account(initialBalance), fee(fee) {}

void CheckingAccount::credit(double amount) {
    Account::credit(amount);
    balance -= fee;
}

bool CheckingAccount::debit(double amount) {
    bool isSuccess = Account::debit(amount);
    if (isSuccess) {
        balance -= fee;
    }
    return isSuccess;
}

// 7. Implement the overloaded operators
std::ostream& operator<<(std::ostream& os, const CheckingAccount& account) {
    os << account.getBalance();
    return os;
}

CheckingAccount& CheckingAccount::operator+=(double amount) {
    credit(amount);
    return *this;
}

CheckingAccount& CheckingAccount::operator-=(double amount) {
    debit(amount);
    return *this;
}

CheckingAccount& CheckingAccount::operator=(const CheckingAccount& other) {
    if (this != &other) {
        Account::operator=(other);
        fee = other.fee;
    }
    return *this;
}

CheckingAccount operator+(const CheckingAccount& account, double amount) {
    CheckingAccount result(account);
    result += amount;
    return result;
}

CheckingAccount operator+(double amount, const CheckingAccount& account) {
    return account + amount;
}

CheckingAccount operator-(const CheckingAccount& account, double amount) {
    CheckingAccount result(account);
    result -= amount;
    return result;
}
