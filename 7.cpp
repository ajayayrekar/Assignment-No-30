/*7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.
*/


#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;
    bool valid = true;
    try {
        if (username.length() < 6)
            throw "Username should have at least 6 characters";
        for (int i = 0; i < username.length(); i++) {
            if (isdigit(username[i]) || ispunct(username[i])) {
                valid = false;
                throw "Username should not contain any digit or special symbol";
            }
        }
        if (valid)
            cout << "Valid username" << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
