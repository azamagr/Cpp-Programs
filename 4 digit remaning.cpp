#include <iostream>
using namespace std;
int main()
{
 int number, digit;

 cout << "Please enter 4-digit number:";
 cin >> number;

 digit = number % 10;
 cout << "The digits are: ";
 cout << digit << ", ";

 number = number / 10;

 digit = number % 10;
 cout << digit << ", ";

 number = number / 10;

 digit = number % 10;
 cout << digit << ", ";

 number = number / 10;

 digit = number % 10;
 cout << digit;
} 