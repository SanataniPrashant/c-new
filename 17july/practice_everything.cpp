// 1.
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "Good Morning, Welcome to programming" << "\n";
//     return 0;
// }

// //2.
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the side of square" << "\n";
//     int side = 0;
//     cin >> side;
//     int area = 0, perimeter = 0;
//     area = side * side;
//     perimeter = 4 * side;
//     cout << " area of square = " << area << "\n";
//     cout << " perimeter of square = " << perimeter << "\n";
//     return 0;
// }

//3. Write a program to print Hello World on console, and ask user, Do you want to continue? Press 1 to continue, Press 0 to exit. Accept user choice.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int choice = 0;
//     do
//     {
//         cout << "Hello World" << "\n";
//         cout << "Do you want to continue? Press 1 to continue, Press 0 to exit" << "\n";
//         cin >> choice;
//     } while (choice != 0);
//     return 0;
// }

// 4. Write a program print following menu to user:
//   Main Menu:
//   Press 1 for Addition,
//   Press 2 for Subtraction,
//   Press 3 for Multiplication,
//   Press 4 fot Division,
//   Press 0 to exit
// #include<iostream>
// using namespace std;
// int main()
// {
//     int choice = 0;
//     do
//     {
//         cout << "Main Menu:" << "\n";
//         cout << "Press 1 for Addition," << "\n";
//         cout << "Press 2 for Subtraction," << "\n";
//         cout << "Press 3 for Multiplication," << "\n";
//         cout << "Press 4 for Division," << "\n";
//         cout << "Press 0 to exit" << "\n";
//         cin >> choice;
//         switch (choice)
//         {
//             case 1:
//             {
//                 cout << "Addition" <<"\n";
//                 break;
//             }
//             case 2:
//             {
//                 cout << "Subtraction" << "\n";
//                 break;
//             }
//             case 3:
//             {
//                 cout << "Multiplication" << "\n";
//                 break;  
//             }
//             case 4:
//             {
//                 cout << "Division" << "\n";
//                 break;
//             }
//             case 0:
//             {
//                 cout << "Exiting..." << "\n";
//                 break;
//             }
//             default:
//             {
//                 cout << "Invalid choice. Please choose a valid option." << "\n";
//                 break;
//             }
//         }
//     } while (choice != 0);
//     return 0;
// }

// 4. Write a program to accept number from user, until user press 0 to exit. Print the count of all the entered number exclude 0
// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 0;
//     int number = 0;
//     do
//     {
//         cout << "Enter the no." << "\n";
//         cin >> number;
//         count ++;
//     } while (number != 0);
//     cout << "Total no. of numbers entered excluding 0 is " << count - 1;
//     return 0;
// }
    
// 5.    Write a program to accept number from user, until user press 0 to exit. Print the average of all the entered number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number = 0;
//     int sum = 0;
//     int count = 0;
//     do
//     {
//         cout << "Enter the no. and press 0 for exit" << "\n";
//         cin >> number;
//         sum = sum + number;
//         count ++;
//     } while (number != 0);
//     int average = sum / (count - 1);
//     cout << "Average of all the entered number is " << average << "\n";
//     return 0;
// }

// 6. Write a program to accept number from user, until user press 0 to exit Print the count of all the entered even number exclude 0.
#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    int count = 0;
    do
    {
        cout << "Enter the no. and press 0 for exit" << "\n";
        cin >> number;
        if (number != 0 && number % 2 == 0)
        {
            count ++;
        }
    }
    while (number != 0);
    cout << "Count of all the entered even number excluding 0 is " << count << "\n";
    return 0;
}