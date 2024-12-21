//Q.1 W.A.P to find the cube of any number by using function.

// #include<iostream>
// using namespace std;
// double cube(double a){
//     return a*a*a;
// }
// double main(){
//     double n;
//     cout << "Enter the no." << "\n";
//     cin >> n;
//     cout << "cube of " << n << " = " << cube(n); 
//     return 0;
// }

// Q.2 W.A.P to find the diameter , circumference and area of circle by using function.
// #include<iostream>
// using namespace std;
// double diameter(double r){
//     return 2*r;
// }
// double circumference(double r){
//     return 2*3.14*r;
// }
// double area(double r){
//     return 3.14*r*r;
// }
// double main(){
//     double r;
//     cout << "Enter the radius of circle" << "\n";
//     cin >> r;
//     cout << "Diameter of circle = " << diameter(r);
//     cout << "Circumference of circle = " << circumference(r);
//     cout << "Area of circle = " << area(r);
//     return 0;
// }

// Q.3 W.A.P to find the maximum and minimum between two no. by using function.
// #include<iostream>
// using namespace std;
// double max(double a, double b){
//     if(a>b)
//     return a;
//     else
//     return b;
// }
// double min(double a, double b){
//     if(a<b)
//     return a;
//     else
//     return b;
// }
// int main(){
//     double a, b;
//     cout << "Enter the first no." << "\n";
//     cin >> a;
//     cout << "Enter the second no." << "\n";
//     cin >> b;
//     cout << "Maximum no. = " << max(a, b) << "\n";
//     cout << "Minimum no. = " << min(a, b) << "\n";
//     return 0;
// }

//Q.4 W.A.P to check Weather the number given is even or odd by using function.
// #include<iostream>
// using namespace std;
// int check(int n){
//     if( n % 2 == 0){
//     return 1;
//     }
//     else
//     return 0;
// }
// int main(){
//     int n;
//     cout << "Enter the number" << "\n";
//     cin >> n; 
//     if(check(n) == 1){
//         cout << "Number is even" << "\n";
//     }
//     else{
//         cout << "Number is odd" << "\n";
//     }
//     return 0;
// }

// Q.5 W.A.P to check weather the given no. is armstrong prime or perfect no. by using function.
// #include<iostream>
// using namespace std;
// int armstrong(int n){
//     int sum = 0, temp, rem;
//     temp = n;
//     while(temp != 0){
//         rem = temp % 10;
//         sum = sum + (rem * rem * rem);
//         temp = temp / 10;
//         }
//         if(sum == n)
//         return 1;
//         else
//         return 0;
//     }
//     int prime(int n){
//         int i;
//         for(i = 2; i <= n / 2; i++){
//             if(n % i == 0)
//             return 0;
//         }
//         return 1;
//     }
//     int perfect(int n){
//         int sum = 0;
//         int i;
//         for(i = 1; i <= n / 2; i++){
//             if(n % i == 0)
//             sum = sum + i;
//         }
//         if(sum == n)
//         return 1;
//         else
//         return 0;
//     }
//     int main(){
//         int n;
//         cout << "Enter the number" << "\n";
//         cin >> n;

//         if(armstrong(n) == 1){
//             cout << "Number is Armstrong no." << "\n";
//         }
//         else{
//             cout << "Number is not Armstrong no." << "\n";
//         }
//         if(prime(n) == 1){
//             cout << "Number is prime no." << "\n";
//         }
//         else{
//             cout << "Number is not prime no." << "\n";
//         }
//         if(perfect(n) == 1){
//             cout << "Number is perfect no." << "\n";
//         }
//         else{
//             cout << "Number is not perfect no." << "\n";
//         }
//     }

// Q.6 W.A.P to print all the perfect no. between given interval using function.
// #include<iostream>
// using namespace std;
// int perfect(int n){
//     int sum = 0;
//     int i;
//     for(i = 1; i <= n / 2; i++){
//         if(n % i == 0)
//         sum = sum + i;
//     }
//     if(sum == n)
//     return 1;
//     else
//     return 0;
// }
// int main(){
//     int n, start, end;
//     cout << "Enter the start of interval" << "\n";
//     cin >> start;
//     cout << "Enter the end of interval" << "\n";
//     cin >> end;
//     for(n = start; n <= end; n++){
//         if(perfect(n) == 1){
//             cout << n << "\n";
//         }
//     }
//     return 0;
// }



// Q.7 W.A.P to print the power of any no. by using function.
// #include<iostream>
// using namespace std;
// int power(int n, int p){
//     int result = 1;
//     for(int i = 1; i <= p; i++){
//         result = result * n;
//     }
//     return result;
// }
// int main(){
//     int n, p;
//     cout << "Enter the number" << "\n";
//     cin >> n;
//     cout << "Enter the power" << "\n";
//     cin >> p;
//     cout << "The power of " << n << " is " << power(n, p);
//     return 0;
// }

// Q.8 W.A.P to print the reverse of any no. by using function.
// #include<iostream>
// using namespace std;
// int reverse(int n){
//     int rev = 0;
//     while(n != 0){
//         int rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n / 10;
//     }
//     return rev;
// }
// int main(){
//     int n;
//     cout << "Enter the number" << "\n";
//     cin >> n;
//     cout << "The reverse of " << n << " is " << reverse(n);
//     return 0;
// }




// Q.9 W.A.P to check Weather the given no. is pallendeome or not by using function.

// #include<iostream>
// using namespace std;
// int pallindrome(int n){
//     int rev = 0;
//     int temp = n;
//     while(temp != 0){
//         int rem = temp % 10;
//         rev = rev * 10 + rem;
//         temp = temp / 10;
//     }
//     if(n == rev)
//     return 1;
//     else
//     return 0;
// }
// int main(){
//     int n;
//     cout << "Enter the number" << "\n";
//     cin >> n;
//     if(pallindrome(n) == 1)
//     cout << n << " is a pallindrome number";
//     else
//     cout << n << " is not a pallindrome number";
//     return 0;
// }


// Q.10 W.A.P to print the factorial of any no. by using function.

#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++)
    fact = fact * i;
    return fact;
}
int main(){
    int n;
    cout << "Enter the number" << "\n";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << "\n";
    return 0;
}