/*6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/

#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main() {
    string pincode;
    cout << "Enter area pin code: ";
    cin >> pincode;
    try {
        if (pincode.length() != 6)
            throw "Invalid pin code";
        cout << "Valid pin code" << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
