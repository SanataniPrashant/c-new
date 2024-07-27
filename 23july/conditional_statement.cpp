#include <iostream>
using namespace std;
int main (){
    // W.A.P to find the greatest no. from given two no.
    cout << "Enter an integer value, num1 = " << "\n";
    int num1 = 0;
    cin >> num1;
    cout << "Enter an integer value, num2 = " << "\n";
    int num2 = 0;
    cin >> num2;
    if (num1 > num2)
    cout << "num1 =" << num1 <<" is greater than " << "num2 = " << num2 << "\n";
    else if (num2 > num1)
    cout << "num2 = " << num2 << " is greater than " << "num1 = " << num1 << "\n";
    else { 
    cout << "num1 = " << num1 << " is equal to " << "num2 = " << num2 << "\n";
    }
    return 0;
}