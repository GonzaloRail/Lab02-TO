#ifndef OPERATION_PROCESSOR_H
#define OPERATION_PROCESSOR_H

#include "OperationAnalyzer.h"
#include "MathOperations.h"

using namespace std;

class OperationProcessor {
public:
    int process(const string& input);  // Método para procesar la operación ingresada

private:
    OperationAnalyzer analyzer;
    MathOperations mathOps;
};

#endif
