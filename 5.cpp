/*4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
   string email;

   cout << "Enter an email address: ";
   cin >> email;

   try {
      if(email.find('@') == string::npos)
         throw email;

      cout << "Email address: " << email << endl;
   }
   catch(string ex) {
      cout << "Exception caught: " << ex << " is not a valid email address\n";
   }

   return 0;
}
