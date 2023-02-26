/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
   int num1, num2, result;
   char op;

   cout << "Enter an expression: ";
   cin >> num1 >> op >> num2;

   try {
      if(op != '+' && op != '-' && op != '*' && op != '/')
         throw op;
      if(num2 == 0 && op == '/')
         throw num2;

      switch(op) {
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
            result = num1 / num2;
            break;
      }

      cout << "Result: " << result << endl;
   }
   catch(char ex) {
      cout << "Exception caught: " << ex << " is not a valid operator\n";
   }
   catch(int ex) {
      cout << "Exception caught: Cannot divide by " << ex << endl;
   }

   return 0;
}
