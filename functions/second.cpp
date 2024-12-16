// 1. W.A.P to calculate the sum of n numbers by using functions.
// #include<iostream>
// using namespace std;
// int sum(int n){
//     int sum = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }
// int main(){
//     cout << "sum = " << sum(10) << "\n";
//     cout << "sum = " << sum(20) << "\n";
//     return 0;
// }

// 2. W.A.P to find the factorial of any no. by using functions.
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
int main()
{
    cout << "factorial = " << factorial(10) << "\n";
    return 0;
}