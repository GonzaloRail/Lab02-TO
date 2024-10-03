#include "MathOperations.h"
#include <stdexcept>

using namespace std;

int MathOperations::add(int a, int b) {
    return a + b;
}

int MathOperations::subtract(int a, int b) {
    return a - b;
}

int MathOperations::multiply(int a, int b) {
    return a * b;
}

int MathOperations::divide(int a, int b) {
    if (b == 0) throw invalid_argument("Division by zero");
    return a / b;
}
