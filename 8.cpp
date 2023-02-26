/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/

#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    bool valid = true;
    try {
        if (password.length() < 6)
            throw "Password should have at least 6 characters";
        bool hasDigit = false, hasSpecialChar = false, hasCapitalLetter = false;
        for (int i = 0; i < password.length(); i++) {
            if (isdigit(password[i]))
                hasDigit = true;
            else if (ispunct(password[i]))
                hasSpecialChar = true;
            else if (isupper(password[i]))
                hasCapitalLetter = true;
        }
        if (!hasDigit)
            throw "Password should contain at least one digit";
        if (!hasSpecialChar)
            throw "Password should contain at least one special character";
        if (!hasCapitalLetter)
            throw "Password should contain at least one capital letter";
        cout << "Valid password" << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
