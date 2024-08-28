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

// #include<iostream>
// using namespace std;
// int main()
// {
//     int input = 0;
//     cout << "Enter a number: " << "\n";
//     cin >> input;
//     int temp = input, rev = 0;
//     while (input != 0)
//     {
//         int digit = input % 10;
//         input = input / 10;
//         rev = rev * 10 + digit;
//     }
//     if (temp == rev)
//     {
//         cout << "pallendrom" << "\n";
//     }
//     else
//     {
//         cout << "not a pallendrom" << "\n";
//     }
//     return 0;
// }

// prime no.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int input = 0, count = 0;
//     cout << "Enter a number: " << "\n";
//     cin >> input;
//     for (int i = 1; i <= input; i++)
//     {
//         if (input  % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         cout << "prime no." << "\n";
//     }
//     else
//     {
//         cout << "not a prime no." << "\n";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter a number: " << "\n";
    cin >> input;

    for (int j = 2; j <= input; j++)
    {
        int count = 0; // Reset count for each number
        for (int i = 1; i <= j; i++) // Only iterate up to the square root of j
        {
            if (j % i == 0)
            {
                count++;
            }
            
        }
        if (count == 2){
            cout << j << "\n";
        }
    }
    return 0;
}