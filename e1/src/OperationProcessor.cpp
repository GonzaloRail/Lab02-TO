#include "OperationProcessor.h"
#include <stdexcept>

using namespace std;

int OperationProcessor::process(const string& input) {
    analyzer.analyze(input);

    vector<int> numbers = analyzer.getNumbers();
    vector<char> operators = analyzer.getOperators();
    
    int result = numbers[0];

    for (size_t i = 0; i < operators.size(); ++i) {
        char op = operators[i];
        int nextNum = numbers[i + 1];

        switch (op) {
            case '+':
                result = mathOps.add(result, nextNum);
                break;
            case '-':
                result = mathOps.subtract(result, nextNum);
                break;
            case '*':
                result = mathOps.multiply(result, nextNum);
                break;
            case '/':
                result = mathOps.divide(result, nextNum);
                break;
            default:
                throw invalid_argument("Invalid operator");
        }
    }

    return result;
}
