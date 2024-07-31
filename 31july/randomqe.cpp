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
    bool isequal = number1 == number2;
    cout << "0 signifies numbers are different" << "\n";
    cout << "1 signifies numbers are equal" << "\n";
    cout << "result = "<< isequal;
}