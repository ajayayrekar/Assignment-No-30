/*10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/

#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main() {
    string nickname;
    cout << "Enter nickname: ";
    cin >> nickname;
    bool valid = true;
    try {
        if (nickname.length() > 8)
            throw "Nickname should have at most 8 characters";
        for (int i = 0; i < nickname.length(); i++) {
            if (isdigit(nickname[i]) || ispunct(nickname[i]) || isspace(nickname[i])) {
                valid = false;
                throw "Nickname should not contain any digit, special symbol, or space";
            }
        }
        if (valid)
            cout << "Valid nickname" << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
