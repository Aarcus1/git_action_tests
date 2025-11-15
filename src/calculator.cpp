#include "../include/calculator.h"
#include <stdexcept>

// Addition
int Calculator::add(int a, int b) {
    return a + b;
}

//  Division 
double Calculator::divide(double a, double b) {
    if (b == 0) {

        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}
