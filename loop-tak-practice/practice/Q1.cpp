// table
// factorial
// table
// generate power
// generate squareroot of valid vo.
// generate cube root of valid no.
// prime or not 
// perfect no. or not
// no. of digits in a no.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     cout<<"Enter a number: " << "\n";
//     cin>>n;
//     int i = 0;
//     while(i<=10){
//         cout<<n*i<<"\t";
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     cout << "enter the no." << "\n";
//     cin >> n;
//     int fact = 1;
//     while(n != 0){
//         fact = fact * n;
//         n--;
//     }
//     cout << "factorial is : " << fact << "\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//  int base = 0;
//  cout << "enter the no." << "\n";
//  cin >> base;
//  int power = 0;
//  cout << "enter the power" << "\n";
//  cin >> power;
//  int result = 1;
//  while(power != 0){
//     result = result * base;
//     power--;
//  }
//  cout << "result is : " << result << "\n";
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     cout << "enter the no." << "\n";
//     cin >> n;
//     int i = 1;
//     bool p = false;
//     while(i*i <= n){
//         if (i*i == n)
//         {
//             p = true;
//         }
//         i++;
//     }
//     if(p){
//         cout << "number is a perfect square" << "\n";
//         cout << "sqareroot of n = " << i-1 << "\n";
//     }
//     else
//     {
//         cout << "number is not a perfect square" << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     cout << "enter the no." << "\n";
//     cin >> n;
//     int i = 1;
//     bool p = false;
//     while(i*i*i <= n){
//         if (i*i*i == n)
//         {
//             p = true;
//         }
//         i++;
//     }
//     if(p){
//         cout << "number is a perfect cube" << "\n";
//         cout << "cuberoot of n = " << i-1 << "\n";
//     }
//     else
//     {
//         cout << "number is not a perfect cube" << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     cout << "enter the no." << "\n";
//     cin >> n;
//     int i = 1;
//     int count = 0;
//     while(i <= n){
//         if (n % i == 0){
//             count++;
//         }
//         i++;
//     }
//     if(count == 2){
//         cout << "number is a prime number" << "\n";
//     }
//     else
//     {
//         cout << "number is not a prime number" << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     cout << "enter the no." << "\n";
//     cin >> n;
//     int i = 1;
//     int c = 0;
//     while(i < n){
//         if (n % i == 0){
//             c = c + i;
//         }
//         i++;
//     }
//     if(c == n){
//         cout << "number is a perfect number" << "\n";
//     }
//     else
//     {
//         cout << "number is not a perfect number" << "\n";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "enter the no." << "\n";
    cin >> n;
    int digit = 0;
    while(n != 0){
        n = n / 10;
        digit++;
    }
    cout << digit;
}