// Fabicconi Series
// #include<iostream>
// using namespace std;
// int main()
// {
//     int input = 0, a = 0, b = 1;
//     cout << "Enter a number: " << "\n";
//     cin >> input;
//     for (int  i = 0; i < input; i++)
//     {
//         cout << a << "\n";
//         int temp = a;
//         a = b;
//         b = temp + b;
//     }
//     return 0;
// }

// pallendrom

#include<iostream>
using namespace std;
int main()
{
    int input = 0;
    cout << "Enter a number: " << "\n";
    cin >> input;
    int temp = input, rev = 0;
    while (input != 0)
    {
        int digit = input % 10;
        input = input / 10;
        rev = rev * 10 + digit;
    }
    if (temp == rev)
    {
        cout << "pallendrom" << "\n";
    }
    else
    {
        cout << "not a pallendrom" << "\n";
    }
    return 0;
}