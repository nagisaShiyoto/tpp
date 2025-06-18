#pragma once

enum Options {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '\\'
};

class Calculator {
  private:
    /*
    return the sum of two numbers

    @param number1: the first number
    @param number2: the second number
    @return: the sum of the two
    */
    static double add(double number1, double number2);

    /*
    return the difference from two numbers

    @param number1: the number to subtract from
    @param number2: amount of substruction
    @return: the result
    */
    static double subtract(double subtractFrom, double subtractAmount);
    /*
    return the multiplication of two numbers

    @param number1: the first number
    @param number2: the second number
    @return: the result
    */
    static double multiply(double number1, double number2);
    /*
    return the result of dividing two numbers

    @param number1: the divider
    @param number2: the devisor
    @return: the result
    */
    static double divide(double divider, double devisor);

  public:
    /*
    return the result of a choosen operation

    @param number1: first number
    @param operation: the wanted operation
    @param number2: second number
    @return: the result
    */
    static double calculate(double number1, char operation, double number2);
};

class DivideByZeroError {
  public:
    // print divide by zero error
    void print_error();
};

class OutOfOptionError {
  public:
    OutOfOptionError(char option);
    // print wrong portion
    void print_error();

  private:
    char wrongOperation;
};