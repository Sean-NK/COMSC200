#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <iostream>

class Polynomial {
public:
    Polynomial();
    Polynomial(const Polynomial &p);
    Polynomial(const std::vector<int> &coeffs, const std::vector<int> &exponents);
    ~Polynomial();
    void enterTerms();
    void printPolynomial() const;
    void setTerm(int coeff, int exp);
    int getTerm(int exp) const;
    Polynomial& operator=(const Polynomial &p);
    Polynomial operator+(const Polynomial &p) const;
    Polynomial operator-(const Polynomial &p) const;
    Polynomial& operator+=(const Polynomial &p);
    Polynomial& operator-=(const Polynomial &p);
    
private:
    std::vector<int> coeffs_;
    std::vector<int> exponents_;
};

#endif
