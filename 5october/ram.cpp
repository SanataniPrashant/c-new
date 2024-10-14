// Q.1 Write a C++ program to find first and last digit of a number.
// Q.2 Write a C++  program to find sum of first and last digit of a number.
// Q.3 Write a C++ program to swap first and last digits of a number.
// Q.4 Write a C++ program to check whether a number is palindrome or not.
// Q.5 Write a C++ program to find HCF of two numbers.
// Q.6 Write a C++ program to find LCM of two numbers.
// Q.7 Write a C++ program to find factorial of a number.

#include<iostream>
using namespace std;
int main()
{
   int number = 0, last_digit = 0, sum = 0;
   cout << "Enter a number: ";
   cin >> number;
   if(number>0){
    int first_digit = number % 10;
    cout << "first digit of the number is: " << first_digit << "\n";
   while(number !=0){
    last_digit = number %10;
    number = number/10;
   }
   cout << "last_digit of a no is " << last_digit << "\n";
    sum = first_digit + last_digit;
    cout << "sum of first and last digit of a number is " << sum << "\n";
   }
   else{
    cout << "Please enter a positive number.\n";
   }
}