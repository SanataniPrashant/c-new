// W.A.P to accept the no. from user and if the no. is completely divisible
// by 7 and 2 print the no. is completely divisible by both the no.
// else print the no. is not completely divisible by both the no.
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 7 == 0 && number % 2 == 0){
        cout << number << " is completely divisible by both 7 and 2.";
    }
    else {
        cout << number << " is not completely divisible by both 7 and 2.";
    }
}