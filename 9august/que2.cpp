//  W.A.P to accept alternate even and odd no. from user first no. will always be even and perform sum and print the sum stop when user entered 0.
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    int sum = 0;
    bool is_last_even_number = false; // sugesting last no. is odd and acceptig a even no.
    do
    {
        cout << "Enter an integer no." << "\n";
        cin >> number;
        // if(number % 2 == 0 && !is_last_even_number)
        if(number % 2 == 0 && is_last_even_number == false)
        {
            sum = sum + number ;
            cout << "Even no. accepted" << "\n"; // debugging
            is_last_even_number = true;
        }
        // else if( number % 2 != 0 && is_last_even_number)
        else if( number % 2 != 0 && is_last_even_number == true)
        {
            sum = sum + number;
            cout << "odd no. accepted" << "\n"; // debugging
            is_last_even_number = false;
        }
        else
        {
            cout << "try again" << "\n"; // debugging
        }
    }
    while (number != 0);
    return 0; 
}