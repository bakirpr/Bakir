#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> op;

    switch(op) {
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
        case '^':
            cout << pow(num1, num2);
            break;
        default:
            cout << "Invalid operator";
            break;
    }
    return 0;
}

