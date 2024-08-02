// W.A.P to check weather the given no. is a double digit no. 
// double digit no. are 11,22,33,.........
// Hint: to get a digit use modulo division  then divide a no. by 10 and store in number 
// again get the digit.

#include<iostream>
using namespace std;
int main(){
    int number = 0;
    cout << " Enter the no. " << "\n";
    cin >> number;
    int unit_digit = number % 10;
    int tens_digit = number / 10;
    if((number >= 10 && number <= 99 ) && unit_digit == tens_digit){
        cout << " The no. is a double digit no. " << "\n";
    }
    else{
        cout << " The no. is not a double digit no. " << "\n";
    } 
    return 0;
}
