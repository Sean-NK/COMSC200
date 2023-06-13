#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

class RationalNumber {
public:
    RationalNumber(int numerator = 0, int denominator = 1);
    void printRational() const;
    RationalNumber operator+(const RationalNumber& rhs) const;
    RationalNumber operator-(const RationalNumber& rhs) const;
    RationalNumber operator*(const RationalNumber& rhs) const;
    RationalNumber operator/(const RationalNumber& rhs) const;
    RationalNumber& operator=(const RationalNumber& rhs);
    bool operator<(const RationalNumber& rhs) const;
    bool operator>(const RationalNumber& rhs) const;
    bool operator<=(const RationalNumber& rhs) const;
    bool operator>=(const RationalNumber& rhs) const;
    bool operator==(const RationalNumber& rhs) const;
    bool operator!=(const RationalNumber& rhs) const;
private:
    int numerator;
    int denominator;
    void simplify();
    int gcd(int a, int b) const;
};

#endif
