#include <iostream>
using namespace std; // Para evitar el uso de std:: en todo el código

class Node {
public:
    int data;           // Dato del nodo
    Node* next;        // Puntero al siguiente nodo
    Node* prev;        // Puntero al nodo anterior

    Node(int value) : data(value), next(nullptr), prev(nullptr) {} // Constructor
};

class DoublyLinkedList {
private:
    Node* head;        // Puntero al primer nodo
    Node* tail;        // Puntero al último nodo

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {} // Constructor

    // Método para insertar un nodo al final
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) { // Si la lista está vacía
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode; // Actualizar el puntero del último nodo
            newNode->prev = tail;  // Enlazar el nuevo nodo al último nodo
            tail = newNode;        // Actualizar el puntero tail
        }
    }

    // Método para imprimir la lista desde el inicio
    void printForward() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Método para imprimir la lista desde el final
    void printBackward() {
        Node* current = tail;
        while (current) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    // Destructor para liberar la memoria
    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next; // Guardar el siguiente nodo
            delete current;              // Liberar el nodo actual
            current = next;              // Mover al siguiente
        }
    }
};

int main() {
    DoublyLinkedList list;

    // Agregar elementos a la lista
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    // Imprimir la lista
    cout << "Lista hacia adelante: ";
    list.printForward();

    cout << "Lista hacia atras: ";
    list.printBackward();

    return 0;
}
