//2. Write a C++ program to demonstrate try, throw and catch statements.

#include <iostream>

using namespace std;

int main() {
   int num1, num2, result;

   cout << "Enter two integers: ";
   cin >> num1 >> num2;

   try {
      if(num2 == 0)
         throw num2;
      result = num1 / num2;
      cout << "Result: " << result << endl;
   }
   catch(int ex) {
      cout << "Exception caught: Cannot divide by " << ex << endl;
   }

   return 0;
}
