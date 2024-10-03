#include "OperationAnalyzer.h"
#include <cctype>  // Para isdigit
#include <sstream>
#include <stdexcept>

using namespace std;

void OperationAnalyzer::analyze(const string& input) {
    stringstream ss;
    for (char c : input) {
        if (isdigit(c)) {
            ss << c;  // Acumulamos el número
        } else {
            if (!ss.str().empty()) {
                numbers.push_back(stoi(ss.str()));
                ss.str("");  // Limpiamos el acumulador
            }
            operators.push_back(c);  // Guardamos el operador
        }
    }
    // Añadir el último número
    if (!ss.str().empty()) {
        numbers.push_back(stoi(ss.str()));
    }
}

vector<int> OperationAnalyzer::getNumbers() const {
    return numbers;
}

vector<char> OperationAnalyzer::getOperators() const {
    return operators;
}
