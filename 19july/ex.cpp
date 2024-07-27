#include <iostream>
using namespace std;
int main()
{
    int num1 =0 ;
    int num2 = 0;
    cout<<"Enter an integer number"<<"\n";
    cin>>num1;
    cout<<"Enter an integer number"<<"\n";
    cin>>num2;
    bool result = num1 > num2;
    cout<<"Result ="<<result<<"\n";
    int remainder = num1 % num2;
    cout<<"Remainder ="<<remainder;
}
