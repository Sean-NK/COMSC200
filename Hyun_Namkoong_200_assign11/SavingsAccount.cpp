#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialBalance, double interestRate)
    : Account(initialBalance), interestRate(interestRate) {}

double SavingsAccount::calculateInterest() const {
    return balance * interestRate;
    
    std::ostream& operator<<(std::ostream& os, const SavingsAccount& account) {
        os << account.getBalance();
        return os;
    }

    SavingsAccount& SavingsAccount::operator+=(double amount) {
        credit(amount);
        return *this;
    }

    SavingsAccount& SavingsAccount::operator-=(double amount) {
        debit(amount);
        return *this;
    }

    SavingsAccount& SavingsAccount::operator=(const SavingsAccount& other) {
        if (this != &other) {
            Account::operator=(other);
            interestRate = other.interestRate;
        }
        return *this;
    }

    SavingsAccount operator+(const SavingsAccount& account, double amount) {
        SavingsAccount result(account);
        result += amount;
        return result;
    }

    SavingsAccount operator+(double amount, const SavingsAccount& account) {
        return account + amount;
    }

    SavingsAccount operator-(const SavingsAccount& account, double amount) {
        SavingsAccount result(account);
        result -= amount;
        return result;
    }

}
