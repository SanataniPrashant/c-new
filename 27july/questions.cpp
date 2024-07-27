// W.A.P to accept the no. from user and print positive if it is positive no. if the value is negative then print the value is
// negative and if the no. is zero then print the no. is zero.
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number: " << "\n";
    int num = 0;
    cin >> num;
    if(num > 0)
    cout << "The number is positive" <<"\n";
    else if(num = 0) {
        cout << "The number is Zero" << "\n";
    }
    else{
        cout << "The number is negative" << "\n";
    }
    return 0;
}