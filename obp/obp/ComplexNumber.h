#pragma once
class ComplexNumber {
  public:
    ComplexNumber();
    ComplexNumber(double realComponent, double imaginaryComponent);

    double getReal() const;
    double getImaginary() const;

    void setReal(const double real);
    void setImaginary(const double imaginary);

    // print the complex number using a+bi 
    void printNumber() const;
    
    /* 
    compare between two complex numbers 
    return true only if imaginary and real parts are the same
    */
    bool operator==(const ComplexNumber& rightNumber) const;
    /*
    adds two complex numbers 
    using this formula: z1+z2 = a1+b1i+a2+b2i = (a1+b1) + (b1+b2)i
    */
    ComplexNumber operator+(const ComplexNumber& rightNumber) const;
    /*
    subtract two complex numbers
    using this formula: z1-z2 = (a1+b1i) - (a2+b2i) = (a1-b1) + (b1-b2)i
    */
    ComplexNumber operator-(const ComplexNumber& rightNumber) const;
    /*
    multiply two complex numbers
    using this formula: z1*z2 = (a+bi) * (c+di) = (a*c - b*d) + (a*d + b*c)i
    */
    ComplexNumber operator*(const ComplexNumber& rightNumber) const;

  private:
    double m_realComponent;
    double m_imaginaryComponent;
};
