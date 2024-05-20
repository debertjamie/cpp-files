
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;

    cout << "Input the available operations: + (addition), - (subtraction), * (multiplication), / (division): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout << "You gave an invalid operator" << endl;
        break;
    }

    return 0;
}
