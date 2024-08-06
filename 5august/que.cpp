// W.A.P to accept a no. from user if the no. is positive check weather the no. is divisible by 3 and 5
// if it is divisible  print the quotient of division of the no. by 3 and 5 . othewise print the remainder of the division by 3 and 45
#include<iostream>
using namespace std;
int main(){
    int number1 = 0;
    cout << "Enter first no." << "\n";
    cin >> number1;
    if(number1 > 0){
        if(number1 % 3 == 0 && number1 % 5 == 0){
            int quotient3 = number1 / 3;
            int quotient5 = number1 / 5;
            cout << " quotient of the no. divided by 3 and 5 are " << quotient3 << "and" << quotient5 << "\n";
        }
        else{
            int remainder3 = number1 % 3;
            int remainder5 = number1 % 5;
            cout << " remainders are "<< remainder3 << "\n" << remainder5 ;
        }
    }
    else{
        cout << "calculation not possible";
    }
    return 0;
}