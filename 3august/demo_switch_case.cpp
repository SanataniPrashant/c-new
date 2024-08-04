#include<iostream>
using namespace std;
int main()
{
    // accepting month from the user, and displaying no. of days.
    cout << "Enter the month number from 1 to 12" << " and "<< "press 0 to exhit"  << "\n";
    int month_number = 0;
    cin >> month_number;
    switch (month_number){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
           cout << "Number of days in the month is 31" << "\n";
           break;
        case 2:
           cout << "Number of days in the month is 28 or 29" << "\n";
           break;
        case 4:
        case 6:
        case 9:
        case 11:
           cout << "Number of days in the month is 30" << "\n";
           break;
        default :
           cout << "Invalid month number" << "\n";
    }
    return 0;
}
// switch fall through.
// combining cases.