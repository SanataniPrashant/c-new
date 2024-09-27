// W.A.P to generate table of any no.
#include<iostream>
using namespace std;
int main(){
    int n = 0, i = 1;
    cout << "enter the no." << "\n";
    cin >> n;
    do
    {
        cout << n << "X" << i << "=" << n * i << "\n";
        i++;
    } while (i <= 10);
    return 0;
}

// W.A.p to the sum between 1 to 10
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 1, sum = 0;
//     do
//     {
//         sum = sum + n;
//         n++;
//     } while (n <= 10);
//     cout << "sum =" << sum;
//     return 0;
// }

// W.A.P to findout the factorial of any no.
// #include <iostream>
// using namespace std;
// int main(){
//     int fact = 1, n = 0;
//     cout << "Enter the no." << "\n";
//     cin >> n;
//     do
//     {
//         fact = fact * n;
//         n--;
//     } while (n !=1);
//     cout << "factorial = " << fact;
//     return 0;
// }