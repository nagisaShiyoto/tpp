#include "ComplexNumber.h"
#include <iostream>
ComplexNumber::ComplexNumber() : ComplexNumber(0,0) {
    // clear code function
}

ComplexNumber::ComplexNumber(double realComponent, double imaginaryComponent) {
    this->m_imaginaryComponent = imaginaryComponent;
    this->m_realComponent = realComponent;
}

double ComplexNumber::getReal() const {
    return this->m_realComponent;
}

double ComplexNumber::getImaginary() const {
    return this->m_imaginaryComponent;
}

void ComplexNumber::setReal(const double real) {
    this->m_realComponent = real;
}

void ComplexNumber::setImaginary(const double imaginary) {
    this->m_imaginaryComponent = imaginary;
}

void ComplexNumber::printNumber() const {
    bool printedReal = false;
    if (this->m_realComponent != 0) {
        std::cout << this->m_realComponent;
        printedReal = true;
    }
    if (this->m_imaginaryComponent != 0 && this->m_realComponent != 0) {
        std::cout << " + " << this->m_imaginaryComponent << "i";
    } else if (this->m_imaginaryComponent != 0) {
        std::cout << this->m_imaginaryComponent << "i";
    } else if(!printedReal) {
        std::cout << "0";
    }
    std::cout << std::endl;
}

bool ComplexNumber::operator==(const ComplexNumber& rightNumber) const {

    return (this->getImaginary() == rightNumber.getImaginary() && this->getReal() == rightNumber.getReal());
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& rightNumber) const {
    double newReal = rightNumber.getReal() + this->getReal();
    double newImaginary = rightNumber.getImaginary() + this->getImaginary();
    return ComplexNumber(newReal, newImaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& rightNumber) const {
    double newReal = this->getReal() - rightNumber.getReal();
    double newImaginary = this->getImaginary() - rightNumber.getImaginary();
    return ComplexNumber(newReal, newImaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& rightNumber) const {
    double newReal = this->getReal() * rightNumber.getReal() - 
                        this->getImaginary() * rightNumber.getImaginary();

    double newImaginary = this->getReal() * rightNumber.getImaginary() +
                            this->getImaginary() * rightNumber.getReal();

    return ComplexNumber(newReal, newImaginary);
}
