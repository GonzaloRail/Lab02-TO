#include <iostream>
#include "OperationProcessor.h"

using namespace std;

int main() {
    OperationProcessor processor;

    string operation;
    cout << "Ingresa la operacion: ";
    cin >> operation;

        int result = processor.process(operation);
        cout << "El resultado es: " << result << endl;
   
    

    return 0;
}
