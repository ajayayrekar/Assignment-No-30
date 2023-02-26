/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/

#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main() {
    double num1, num2, result;
    char op;
    cout << "Enter two numbers and an operator (+, -, *, /): ";
    cin >> num1 >> num2 >> op;
    try {
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0)
                    throw "Dividend cannot be zero";
                result = num1 / num2;
                break;
            default:
                throw "Invalid operator";
        }
        cout << "Result = " << result << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
