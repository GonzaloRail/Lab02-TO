#ifndef OPERATION_ANALYZER_H
#define OPERATION_ANALYZER_H

#include <string>
#include <vector>

using namespace std;

class OperationAnalyzer {
public:
    void analyze(const string& input);  // Método que separa los números y operadores
    vector<int> getNumbers() const;     // Métodos para obtener los números
    vector<char> getOperators() const;  // Métodos para obtener los operadores

private:
    vector<int> numbers;
    vector<char> operators;
};

#endif
