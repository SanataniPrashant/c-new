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
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number = 0;
//     int count = 0;
//     do
//     {
//         cout << "Enter the no. and press 0 for exit" << "\n";
//         cin >> number;
//         if (number != 0 && number % 2 == 0)
//         {
//             count ++;
//         }
//     }
//     while (number != 0);
//     cout << "Count of all the entered even number excluding 0 is " << count << "\n";
//     return 0;
// }
// 7. Write a program that calculates the sum of all even numbers from 1 to a given number N and print the sum. Accept the number N from user.

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the input no." << "\n";
//     int input = 0, sum = 0;
//     cin >> input;
//     while (input != 0)
//     {
//         if(input % 2 == 0)
//         {
//             sum = sum + input;
//         }
//         input --;
//     }
//     cout << " sum = " << sum << "\n";
//     return 0;
// }

// 8. Implement a program that computes the factorial of a given number N using a loop and print the factorial. Accept the number N from user.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number = 0, factorial = 1;
//     cout << "Enter the input no." << "\n";
//     cin >> number;
//     while (number != 0)
//     {
//         factorial = factorial * number;
//         number --;
//     }
//     cout << " factorial = " << factorial;
//     return 0;
// }

//9.Write a program that checks if a given integer inputNumber is prime number, if yes print inputNumber is prime number otherwise print inputNumber is not a prime number. Accept the inputNumber from user.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int input_Number = 0, flag = 0;
//     cout << "Enter the input no." << "\n";
//     cin >> input_Number;
//     for (int i = 1; i <= input_Number; i++)
//     {
//         if (input_Number % i == 0)
//         {
//             flag++;
//         }
//     }
//     if(flag == 2)
//     {
//         cout << "the given no. is a prime no." << "\n";
//     }
//     else
//     {
//         cout << "the given no. is not a prime no." << "\n";
//     }
//     return 0;
// }

// 10. Write a program to print the first N numbers in the Fibonacci sequence. Accept the number N from user. Constrain N >= 0 and N <= 20. (keep value of N small. )

// #include<iostream>
// using namespace std;
// int main()
// {
//     int N = 0, a = 0, b = 1;
//     cout << "enter the no." << "\n";
//     cin >> N;
//     cout << "The first " << N << " Fibonacci numbers are: " << "\n";
//     for (int i = 0; i < N; i++) 
//     {
//         cout << a << "\n";
//         int temp = a;
//         a = b;
//         b = temp + b;
//     }
//     return 0;
// }

//11. Write a program to print the sum of first N numbers in the Fibonacci sequence. Accept the number N from user. Constrain N >= 0 and N <= 20. (keep value of N small. )
// #include<iostream>
// using namespace std;
// int main()
// {
//     int N = 0, a = 0, b = 1, sum = 0;
//     cout << "enter the no." << "\n";
//     cin >> N;
//     cout << "The first " << N << " Fibonacci numbers are: " << "\n";
//     for (int i = 0; i < N; i++) 
//     {
//         cout << a << "\n";
//         sum = sum + a;
//         int temp = a;
//         a = b;
//         b = temp + b;
//     }
//     cout << "sum = " << sum << '\n';
//     return 0;
// }

//12.
//Write a program to check if a given three-digit number N is an Armstrong number if yes, print Armstrong number otherwise print Not an Armstrong number. Accept the three-digit number N from user

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the no." << "\n";
//     int input = 0;
//     cin >> input;
//     int a = input % 10;
//     int b = (input / 10) % 10;
//     int c = input / 100;
//     int sum = a*a*a + b*b*b + c*c*c;
//     if (sum == input)
//     {
//         cout << "Armstrong number" << "\n";
//     }
//     else
//     {
//         cout << "Not an Armstrong number" << "\n";
//     }
//     return 0;
// }

//13. Generate the multiplication table for a given number N up to 10. Accept the number N from user.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int input = 0;
//     cout << "Enter the no." << "\n";
//     cin >> input;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << input << " * " << i << " = " << input * i << "\n";
//     }
//     return 0;
// }

// 14. Write a program to calculate numberpower (number raised to the power) using a loop. Accept the number and power from user.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int input = 0;
//     int power = 0;
//     cout << "Enter the no." << "\n";
//     cin >> input;
//     cout << "Enter the power" << "\n";
//     cin >> power;
//     int result = 1;
//     for (int i = 1; i <= power; i++)
//     {
//         result = result * input;
//     }
//     cout << "result = " << result;
//     return 0;
// }