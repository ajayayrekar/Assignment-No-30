/*9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/

#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main() {
    string email;
    cout << "Enter Gmail id: ";
    cin >> email;
    try {
        if (email.find("@") == string::npos || email.find("gmail.com") == string::npos)
            throw "Invalid Gmail id";
        cout << "Valid Gmail id" << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
