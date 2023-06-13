#include "RationalNumber.h"
#include <iostream>
using namespace std;

// Constructor to initialize numerator and denominator with validation and simplification
RationalNumber::RationalNumber(int numerator, int denominator) {
    if (denominator == 0) {
        throw invalid_argument("Denominator cannot be zero.");
    }
    this->numerator = numerator;
    this->denominator = denominator;
    simplify();
}


// Function to print the rational number in the format "numerator/denominator"
void RationalNumber::printRational() const {
    cout << numerator << '/' << denominator;
}

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int RationalNumber::gcd(int a, int b) const {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}


// Function to simplify the rational number by dividing numerator and denominator by their GCD
void RationalNumber::simplify() {
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

// Overloading the addition (+) operator to add two rational numbers
RationalNumber RationalNumber::operator+(const RationalNumber& rhs) const {
    return RationalNumber(numerator * rhs.denominator + rhs.numerator * denominator, denominator * rhs.denominator);
}

// Overloading the subtraction (-) operator to subtract two rational numbers
RationalNumber RationalNumber::operator-(const RationalNumber& rhs) const {
    return RationalNumber(numerator * rhs.denominator - rhs.numerator * denominator, denominator * rhs.denominator);
}

// Overloading the multiplication (*) operator to multiply two rational numbers
RationalNumber RationalNumber::operator*(const RationalNumber& rhs) const {
    return RationalNumber(numerator * rhs.numerator, denominator * rhs.denominator);
}

// Overloading the division (/) operator to divide two rational numbers
RationalNumber RationalNumber::operator/(const RationalNumber& rhs) const {
    return RationalNumber(numerator * rhs.denominator, denominator * rhs.numerator);
}

// Overloading the assignment (=) operator to assign one rational number to another
RationalNumber& RationalNumber::operator=(const RationalNumber& rhs) {
    if (this != &rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
    }
    return *this;
}

// Overloading the less than (<) operator to compare two rational numbers
bool RationalNumber::operator<(const RationalNumber& rhs) const {
    return numerator * rhs.denominator < rhs.numerator * denominator;
}

// Overloading the greater than (>) operator to compare two rational numbers
bool RationalNumber::operator>(const RationalNumber& rhs) const {
    return numerator * rhs.denominator > rhs.numerator * denominator;
}

// Overloading the greater than (>) operator to compare two rational numbers
bool RationalNumber::operator<=(const RationalNumber& rhs) const {
    return numerator * rhs.denominator <= rhs.numerator * denominator;
}

// Overloading the less than or equal to (<=) operator to compare two rational numbers
bool RationalNumber::operator>=(const RationalNumber& rhs) const {
    return numerator * rhs.denominator >= rhs.numerator * denominator;
}

// Overloading the greater than or equal to (>=) operator to compare two rational numbers
bool RationalNumber::operator==(const RationalNumber& rhs) const {
    return numerator * rhs.denominator == rhs.numerator * denominator;
}

// Overloading the equality (==) operator to compare two rational numbers for equality
bool RationalNumber::operator!=(const RationalNumber& rhs) const {
    return numerator * rhs.denominator != rhs.numerator * denominator;
}
