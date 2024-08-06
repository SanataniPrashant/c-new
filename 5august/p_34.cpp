#include<iostream>
using namespace std;
int main(){
    // write aprogram to accept two no. from the user if both the no. are equal and even accept a third no.
    // and check weather the third no. is positive or negativ if the no. is negative make it positive otherwise print the no.
    // if both the no. are not even or not equal then print calculation not possible.
    int number1 = 0, number2 = 0;
    cout << "Enter first no." << "\n";
    cin >> number1;
    cout << "Enter second no." << "\n";
    cin >> number2;
    if((number1 == number2) && number1 % 2 == 0 ){
        int number3 = 0;
        cout << "Enter the third no." << "\n";
        cin >> number3;
        if(number3 < 0){
            number3 = number3 * (-1);
            cout << number3 << "\n";
        }
        else{
            cout << number3;
        }
    }
    else{
        cout << "calculation not possible";
    }
    return 0;
}
