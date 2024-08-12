#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int sum = 0;
    bool isEven = true; // flag to track whether the number should be even or odd

    do
    {
        if (isEven)
        {
            cout << "Enter the Even no." << "\n";
            cin >> number;
            if (number % 2 != 0 && number != 0)
            {
                cout << "Invalid input. Please enter an even number.\n";
                continue;
            }
        }
        else
        {
            cout << "Enter the Odd no." << "\n";
            cin >> number;
            if (number % 2 == 0 && number != 0)
            {
                cout << "Invalid input. Please enter an odd number.\n";
                continue;
            }
        }

        sum = sum + number;
        cout << "sum = " << sum << "\n";

        isEven = !isEven; // toggle the flag for the next input
    }
    while (number != 0);
    return 0; 
}
