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
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     cout << "factorial = " << factorial(10) << "\n";
//     return 0;
// }

// 3. W.A.P to calculate the ncr 
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int ncr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n / (fact_r * fact_nmr);
// }
// int main(){
//     cout << "ncr = " << ncr(10, 5) << "\n";
//     int a = 10;
//     int* ptr = &a; // (pointer)
//     int** ptr2 = &ptr; // (pointer to pointer)
//     cout << "address of ptr2  = " << &ptr2 << "\n";
//     cout << "address of ptr  = " << &ptr << "\n";
//     cout << "address of a = " << ptr << "\n";
//     cout << *(ptr); // ( * -> dereferencing operator gets the value of that address)
//     return 0;
// }

// pass by reference is done in two ways :
// 1. by using pointers :

// #include<iostream>
// using namespace std;
// void changeA(int* a){
//     *a =20;
// }
// int main(){
//     int a = 10;
//     changeA(&a);
//     cout << "a = " << a << "\n";
// }

// #include<iostream>
// using namespace std;
// void swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 10;
//     int b = 20;
//     cout << "before swap a = " << a << "\n";
//     cout << "before swap b = " << b << "\n";
//     swap(&a, &b);
//     cout << "after swap a = " << a << "\n";
//     cout << "after swap b = " << b << "\n";
//     return 0;
// }

// 2. by using reference variables called alias.

// #include<iostream>
// using namespace std;
// void changeA(int &b){
//     b = 20;
// }
// int main(){
//     int a = 10;
//     changeA(a);
//     cout << "a = " << a << "\n";
// }


// pass by value.
// #include<iostream>
// using namespace std;
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int x = 10;
//     int y = 20;
//     cout << "before swap x = " << x << "\n";
//     cout << "before swap y = " << y << "\n";
//     swap(x, y);
//     cout << "after swap x = " << x << "\n";
//     cout << "after swap y = " << y << "\n";
//     return 0;
// }