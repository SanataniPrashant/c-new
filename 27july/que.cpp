//W.A.P to accept the no. from user and check the no. is divisible by 7
// if yes print completely divisible by 7 if no then not divisible by 7.
#include <iostream>
using namespace std;
int main() {
    int number = 0;
    cout << "Enter the number: " << "\n";
    cin >> number;
    if (number % 7 == 0){
    cout << "The no. is completely divisible by 7" << "\n";
    }
    else{ 
        cout << " The no. is not completely divisible by 7" << "\n";
    }
    return 0;
}
