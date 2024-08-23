// W.A.P to print the below pattern; but accept the symbol from user
// aaaaaaaaa
//  aaaaaaa
//   aaaaa
//    aaa
//     a


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "enter any character" << "\n";
//     char symbol = 0;
//     cin >> symbol;
//     for (int i = 0; i <5; i++)
//     {
//         // space
//        for (int j = 0; j < i; j++)
//         {
//            cout << " "; 
//         }
//         for(int k = 9; k >(2*i); k--)
//         {
//             cout << symbol;
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//            cout << " "; 
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "enter any character" << "\n";
//     char symbol = 0;
//     cin >> symbol;
//     for (int i = 0; i <5; i++)
//     {
//         // space
//        for (int j = 5; j > i; j--)
//         {
//            cout << " "; 
//         }
//         for(int k = 0; k <= (2*i); k++)
//         {
//             cout << symbol;
//         }
//         // space
//         for (int j = 5; j > i; j--)
//         {
//            cout << " "; 
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1; i <= 4; i++)
//     {
//         for(int j = 4; j>i ; j--)
//         {
//             cout << " ";
//         }
//         for(int k = 1; k <= i; k++)
//         {
//             cout << "x ";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 4; j>i ; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout << "x ";
        }
        cout <<"\n";
    }
    return 0;
}