// W.A.P to accept three numbers from the user and find the greatest number and print the greatest no.
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the first number" << "\n";
    int number1 = 0;
    cin >> number1;
    cout << "Enter the second number" << "\n";
    int number2 = 0;
    cin >> number2;
    cout << "Enter the third number" << "\n";
    int number3 = 0;
    cin >> number3;
    if(number1 == number2 && number2 == number3)
    {
        cout << "The three numbers are equal" << "\n";
    }
    else if(number1 == number2)
    {
        if(number1 > number3){
            cout << "The greatest number is number1" << "\n";
        }
        else{
            cout << "The greatest number is number3" << "\n";
        }
    }
    else if(number2 == number3)
    {
        if(number2 > number1){
            cout << "The greatest number is number2" << "\n";
        }
        else{
            cout << "The greatest number is number1" << "\n";
        }
    }
    else if(number1 = number3)
    {
        if(number1 > number2){
            cout << "The greatest number is number1" << "\n";
        }
        else{
            cout << "The greatest number is number2" << "\n";
        }
    }    
    else if(number1 > number2 && number1 > number3)
    {
        cout << "The greatest number is number1" << "\n";
    }
    else if(number2 > number1 && number2 > number3)
    {
        cout << "The greatest number is number2" << "\n";
    }
    else
    {
        cout << "The greatest number is number3" << "\n";
    }
return 0;
}