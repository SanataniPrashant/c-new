// Pick the odd one out - Write a program to accept four numbers from user and print the odd one among them.

// Number can be odd among others in following scenario:
// if three numbers are equal, then the different one is odd one among them.
// if three number are even, then the different one is odd one among them.
// if three number are odd, then the different one is odd one among them.
// if all are different, even or odd, then print no number is odd one among them.
#include<iostream>
using namespace std;
int main () {
    cout << "Enter the first number " << "\n";
    int number1 = 0;
    cin >> number1;
    cout << "Enter the second number " << "\n";
    int number2 = 0;
    cin >> number2;
    cout << "Enter the third number " << "\n";
    int number3 = 0;
    cin >> number3;
    cout << "Enter the fourth number " << "\n";
    int number4 = 0;
    cin >> number4;
    if((number1 == number2 == number3) || (number1 % 2 == 0 && number2 % 2 == 0 && number3 % 2 == 0) || (number1 % 2 != 0 && number2 % 2 != 0 && number3 % 2 != 0)){
        cout << "number 4 is odd one" << '\n';
    }
    else if((number1 == number2 == number4 )  || (number1 % 2 == 0 && number2 % 2 == 0 && number4 % 2 == 0) || (number1 % 2 != 0 && number2 % 2 != 0 && number4 % 2 != 0)){
        cout << "number 3 is odd one" << '\n';
    }
    else if((number1 == number3 == number4 )  || (number1 % 2 == 0 && number3 % 2 == 0 && number4 % 2 == 0) || (number1 % 2 != 0 && number3 % 2 != 0 && number4 % 2 != 0)){
        cout << "number 2 is odd one" << '\n';
    }
    else if((number2 == number3 == number4 ) || (number2 % 2 == 0 && number3 % 2 == 0 && number4 % 2 == 0) || (number2 % 2 != 0 && number3 % 2 != 0 && number4 % 2 != 0)){
        cout << "number 1 is odd one" << '\n';
    }
    else{
        cout << "No number is odd one among them" << '\n';
    }
    return 0;
}