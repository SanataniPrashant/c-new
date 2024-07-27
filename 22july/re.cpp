#include <iostream>
using namespace std;
int main()
{
     // W.A.P to know the entered no. is three digit or not.
    int num=0;
    int num1=99;
    int num2=1000;
    cout << "enter the no." << "\n";
    cin >> num;
    // if(num > 99 && num < 1000) or
     if(num > num1 && num < num2 ){
        cout << "It is three digit no." << "\n";
    }
    else{
        cout << "It is not a three digit no." << "\n";
    }
    return 0;
}