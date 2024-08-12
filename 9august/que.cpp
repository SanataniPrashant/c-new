// W.A.P to accept only even no. from user, till user enter 0 to stop. and print the even entered no.
#include <iostream>
using namespace std;
int main(){
    int number =0;
    do
    {
        cout << "Enter the even no. or 0 to stop" << "\n";
        cin >> number;
        if ((number != 0) &&( number % 2 == 0 )){
            cout << number << "\n";
        }
    }
    while (number != 0);
    return 0; 
}