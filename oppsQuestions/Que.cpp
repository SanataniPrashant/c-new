//1. W.A.P to find the table of any no. using parameterized constructor.

// #include<iostream>
// using namespace std;
// class table{
//     public:
//     table(int a){
//         for(int i=1;i<=10;i++){
//             cout << a << "*" << i << "=" << a*i << "\n";
//         }
//     }
// };
// int main(){
//     table t(5);
//     return 0;
// }

//2. W.A.P to find the sum of an array using anonymous class. (class without name)
// #include<iostream>
// using namespace std;
// class{
//     public:
//     int sum(int arr[], int n){
//         int s=0;
//         for(int i=0;i<n;i++){
//             s=s+arr[i];
//         }
//         return s;
//     }
// }c;
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "Sum of array elements is: " << c.sum(arr, n);
// }


//3. W.A.P to find the no. is prime or not by using composite class.
// #include<iostream>
// using namespace std;

// class prime {
// public:
//     void primeno(int n) {
//         int flag = 0;
//         if (n <= 1) {
//             flag = 1; // 1 and numbers less than 1 are not prime
//         } 
//         else {
//             for (int i = 2; i <= n / 2; i++) {
//                 if (n % i == 0) {
//                     flag = 1; // Not a prime number
//                     break;
//                 }
//             }
//         }
//         if (flag == 0) {
//             cout << "The number is prime" << "\n";
//         } else {
//             cout << "The number is not prime" << "\n";
//         }
//     }
// };

// class ram {
//     prime p; // Composition: ram class has a prime object
// public:
//     void checkPrime(int n) {
//         p.primeno(n); // Call the primeno method of the prime class
//     }
// };

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     ram obj;
//     obj.checkPrime(n); // Call the checkPrime method of the ram class
//     return 0;
// }



// 4. W.A.P for swapping two numbers using inheritance.
// #include<iostream>
// using namespace std;
// class A {
//     public:
//     int a;
//     void getA() {
//         cout << "Enter the value of a: ";
//         cin >> a;
//     }
// };
// class B : public A {
//     public:
//     int b;
//     void getB() {
//         cout << "Enter the value of b: ";
//         cin >> b;
//     }
//     void swap() {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
// };
// int main() {
//     B obj;
//     obj.getA();
//     obj.getB();
//     obj.swap();
//     cout << "After swapping: a = " << obj.a << " b = " << obj.b;
//     return 0;
// }
    


//5. W.A.P to find which no. is greater by using friend function.
// #include<iostream>
// using namespace std;
// class student2;
// class student1
// {
//     int marks = 90;
//     friend void cmp(student1,student2);
// };
// class student2
// {
//     int marks = 80;
//     friend void cmp(student1,student2);
// };
// void cmp(student1 s1,student2 s2){
//     cout << "marks of s1 = " << s1.marks << endl;
//     cout << "marks of s2 = " << s2.marks << endl;
//     //     s1.marks = 100; // error: cannot assign to member variable 'marks
//     //     s2.marks = 100; // error: cannot assign to member variable '
//     if(s1.marks>s2.marks){
//         cout << "s1 is greater than s2" << endl;
//     }
//     else{
//         cout << "s2 is greater than s1" << endl;
//     }
// }
// int main()
// {
//     student1 s1;
//     student2 s2;
//     cmp(s1,s2);
// }

//6. W.A.P to add two objects with paramerterized constructor and operator overloading.
#include<iostream>
using namespace std;
class bhopal{
   int mile;
   public:bhopal(int m){
    mile = m;
   }
   operator +(bhopal &obj)
   {
    mile = mile + obj.mile;
    cout << "Total miles = " << mile;
   }
};
int main(){

    bhopal start(12400);
    bhopal end(12500);
    start + (end);
}