#include <iostream>
using namespace std;

// Funciones para las operaciones matemáticas
int suma(int num1, int num2) {
    return num1 + num2;
}

int resta(int num1, int num2) {
    return num1 - num2;
}

int multiplicacion(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

int main() {
    int num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = suma(num1, num2);
            break;
        case '-':
            resultado = resta(num1, num2);
            break;
        case '*':
            resultado = multiplicacion(num1, num2);
            break;
        case '/':
            resultado = division(num1, num2);
            break;
        default:
            cout << "No es una opcion valida." << endl;
            return 0;
    }

    cout << "El resultado es: " << resultado << endl;
    return 0;
}

