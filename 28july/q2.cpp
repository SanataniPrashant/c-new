// Write a program to accept two numbers from user, if the both the numbers are positive, get the remainder of the division by 5 for 
//both the numbers. If remainder of both the division are equal print numbers are equal, 
//otherwise number are not equal. If one or both the numbers are negative, print calculation not possible.
#include<iostream>
using namespace std;
int main()
{
    int number1 = 0, number2 = 0;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    if (number1 > 0 && number2 > 0){
        if (number1 % 5 == number2 % 5){
            cout << "Numbers are equal";
        }
        else{
        cout << "Calculation not possible";
        }
    }
    return 0;
}