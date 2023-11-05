#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Simple Calculator" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    return 0;
}
