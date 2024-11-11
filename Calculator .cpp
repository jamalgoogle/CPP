#include <iostream>

using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y)  {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        throw runtime_error("Error: Division by zero");
    }
    return x / y;
}

int main() {
    char operation;
    double num1, num2;

    while (true) {
        cout << "Enter an operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        try {
            switch (operation) {
                case '+':
                    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                    break;
                case '-':
                    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                    break;
                case '*':
                    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                    break;
                case '/':
                    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                    break;
                default:
                    cout << "Invalid operation." << endl; 
                    break;

            }
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y') {
            break;
        }
    }

    return 0;
}