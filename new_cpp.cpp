#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   // Hello World prints to terminal
   cout << "Hello World! \nThis" << endl;
   cout << "Programming stuff is easy!\n";
   /*
      Hello World!
      This
      Programming stuff is easy
   */

   int myVariable = 10;
   cout << myVariable << endl;
      // stores integer in a variable

   int a = 30;
   int b = 15;
   int sum = a + b;
   cout << sum << endl;
      // sum calculation

   int c, d;
   cout << "Enter a number: \n";
   cin >> c;
   cout << "Enter another number: \n";
   cin >> d;
   int difference = c - d;
   cout << "Difference is: " << difference << endl;
      // difference calculation

   int e, f;
   e = 6;
   f = 9;
   e = 420;
      // overwrites variable

   auto floatVar = 4.2069;
      // chooses data type automatically, in this case a float
   auto stringVar = "Hello Again";
   auto intVar = 69;
   //auto num; num = 5 is invalid because auto variables must be initialized at the time of its declaration

int g = 10;
g *= 11;
   // outputs 121

int h = 6;
int j = ++h;
cout << j << " is ++6" << endl; 
// j = 7, h = 6
h = 6;
int k = h++;
cout << k << " is " << "6++\n";
// k = 6, h = 7

if (7 > 4) {
   cout << "Yes, because True\n";
}


   return 0;
}