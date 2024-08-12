// W.A.P to add all the entered numbers, till user not entering 0 to stop .
#include<iostream>
using namespace std;
int main(){
    int user_input = 0, sum = 0;
    do
    {
        cout << "Enter a number or 0 to stop: ";
        cin >> user_input;
        sum = sum + user_input;
    } while (user_input != 0);
    if (sum != 0)
    cout << "sum = " << sum << "\n";
    return 0;
}