#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

using namespace std;

class MathOperations {
public:
    int add(int a, int b);        // Suma
    int subtract(int a, int b);   // Resta
    int multiply(int a, int b);   // Multiplicación
    int divide(int a, int b);     // División (maneja divisiones por cero)
};

#endif
