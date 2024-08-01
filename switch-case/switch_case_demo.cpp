#include<iostream>
using namespace std;
int main()
{
    // accepting month from the user, and displaying no. of days.
    cout << "Enter the month number from 1 to 12" << " and "<< "press 0 to exhit"  << "\n";
    int month_number = 0;
    cin >> month_number;
    switch (month_number)
    {
    case 1:
        cout << "January has 31 days" << "\n";
        break;
    case 2:
        cout << "February has 28 or 29 days" << "\n";
        break;
    case 3:
        cout << "March has 31 days" << "\n";
        break;
    case 4:
        cout << "April has 30 days" << "\n";
        break;
    case 5:
        cout << "May has 31 days" << "\n";
        break;
    case 6:
        cout << "June has 30 days" << "\n";
        break;
    case 7 :
        cout << "July has 31 days" << "\n";
        break;\
    case 8:
        cout << "August has 31 days" << "\n";
        break;
    case 9:
        cout << "September has 30 days" << "\n";
        break;
    case 10:
        cout << "October has 31 days" << "\n";
        break;
    case 11:
        cout << "November has 30 days" << "\n";
        break;
    case 12:
        cout << "December has 31 days" << "\n";
        break;
    case 0:
        cout << "Exiting the program" << "\n";
        break;
    default:
        cout << "Invalid Choice";
    }
    return 0;
}

