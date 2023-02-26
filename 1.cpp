/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
   int num;
   string str;

   cout << "Enter an integer: ";
   cin >> num;

   try {
      if(num == 0)
         throw num;
   }
   catch(int ex) {
      cout << "Exception caught: " << ex << " is not allowed\n";
   }

   cout << "Enter a string: ";
   cin >> str;

   try {
      if(str == "error")
         throw str;
   }
   catch(string ex) {
      cout << "Exception caught: " << ex << " is not allowed\n";
   }

   return 0;
}
