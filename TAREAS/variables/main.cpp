#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> op;
    switch(op)
    {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Ingrese un simbolo matematico correcto";
    return 0;
}
}
