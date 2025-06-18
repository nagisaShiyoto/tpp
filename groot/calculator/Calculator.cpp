#include "Calculator.h"
#include <iostream>

double Calculator::add(double number1, double number2) {
    return number1 + number2;
}

double Calculator::subtract(double subtractFrom, double subtractAmount) {
    return subtractFrom - subtractAmount;
}

double Calculator::multiply(double number1, double number2) {
    return number1 * number2;
}

double Calculator::divide(double divider, double devisor) {
    if (devisor == 0) {
        throw DivideByZeroError();
    }
    return divider / devisor;
}

double Calculator::calculate(double number1, char operation, double number2) {
    switch (operation) {
    case Options::ADD:
        return Calculator::add(number1, number2);
        break;
    case Options::SUBTRACT:
        return Calculator::subtract(number1, number2);
        break;
    case Options::MULTIPLY:
        return Calculator::multiply(number1, number2);
        break;
    case Options::DIVIDE:
        return Calculator::divide(number1, number2);
        break;
    default:
        throw OutOfOptionError(operation);
        break;
    }
}

void DivideByZeroError::print_error() {
    std::cout << "can't divide by zero!" << std::endl;
}

OutOfOptionError::OutOfOptionError(char option) {
    this->wrongOperation = option;
}

void OutOfOptionError::print_error() {
    std::cout << "operation '" << this->wrongOperation << "' does not exists" << std::endl;
}
