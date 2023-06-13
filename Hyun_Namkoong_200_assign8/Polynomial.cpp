#include "Polynomial.h"

Polynomial::Polynomial() {
    coeffs_.push_back(0);
    exponents_.push_back(0);
}

Polynomial::Polynomial(const Polynomial &p) {
    coeffs_ = p.coeffs_;
    exponents_ = p.exponents_;
}

Polynomial::Polynomial(const std::vector<int> &coeffs, const std::vector<int> &exponents) {
    coeffs_ = coeffs;
    exponents_ = exponents;
}

Polynomial::~Polynomial() {}

void Polynomial::enterTerms() {
    int num;
        std::cout << "Enter number of polynomial terms : ";
        std::cin >> num;
    int coeff, exp;
    while (true) {
        std::cout << " Enter coefficient: ";
        std::cin >> coeff;
        std::cout << " Enter exponent: ";
        std::cin >> exp;
        if (coeff == -1 && exp == -1) {
            break;
        }
        setTerm(coeff, exp);
    }
}

void Polynomial::printPolynomial() const {
    for (int i = 0; i < coeffs_.size(); i++) {
        std::cout << coeffs_[i] << "x^" << exponents_[i] << " ";
        if (i != coeffs_.size()-1) {
            std::cout << "+ ";
        }
    }
    std::cout << std::endl;
}

void Polynomial::setTerm(int coeff, int exp) {
    // find the index of the term with the same exponent if it exists
    int index = -1;
    for (int i = 0; i < coeffs_.size(); i++) {
        if (exponents_[i] == exp) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        coeffs_.push_back(coeff);
        exponents_.push_back(exp);
    } else {
        coeffs_[index] += coeff;
    }
}

int Polynomial::getTerm(int exp) const {
    for (int i = 0; i < coeffs_.size(); i++) {
        if (exponents_[i] == exp) {
            return coeffs_[i];
        }
    }
    return 0;
}

Polynomial& Polynomial::operator=(const Polynomial &p) {
    coeffs_ = p.coeffs_;
    exponents_ = p.exponents_;
    return *this;
}

Polynomial Polynomial::operator+(const Polynomial &p) const {
    Polynomial result;
    int i = 0, j = 0;
    while (i < coeffs_.size() && j < p.coeffs_.size()) {
    if (exponents_[i] > p.exponents_[j]) {
    result.setTerm(coeffs_[i], exponents_[i]);
    i++;
    } else if (exponents_[i] < p.exponents_[j]) {
    result.setTerm(p.coeffs_[j], p.exponents_[j]);
    j++;
    } else { // exponents are equal
    result.setTerm(coeffs_[i] + p.coeffs_[j], exponents_[i]);
    i++;
    j++;
    }
    }
    // add any remaining terms
    while (i < coeffs_.size()) {
    result.setTerm(coeffs_[i], exponents_[i]);
    i++;
    }
    while (j < p.coeffs_.size()) {
    result.setTerm(p.coeffs_[j], p.exponents_[j]);
    j++;
    }
    return result;
    }

    Polynomial Polynomial::operator-(const Polynomial &p) const {
    Polynomial result;
    int i = 0, j = 0;
    while (i < coeffs_.size() && j < p.coeffs_.size()) {
    if (exponents_[i] > p.exponents_[j]) {
    result.setTerm(coeffs_[i], exponents_[i]);
    i++;
    } else if (exponents_[i] < p.exponents_[j]) {
    result.setTerm(-p.coeffs_[j], p.exponents_[j]);
    j++;
    } else { // exponents are equal
    result.setTerm(coeffs_[i] - p.coeffs_[j], exponents_[i]);
    i++;
    j++;
    }
    }
    // add any remaining terms
    while (i < coeffs_.size()) {
    result.setTerm(coeffs_[i], exponents_[i]);
    i++;
    }
    while (j < p.coeffs_.size()) {
    result.setTerm(-p.coeffs_[j], p.exponents_[j]);
    j++;
    }
    return result;
    }

    Polynomial& Polynomial::operator+=(const Polynomial &p) {
    *this = *this + p;
    return *this;
    }

    Polynomial& Polynomial::operator-=(const Polynomial &p) {
    *this = *this - p;
    return *this;
    }
