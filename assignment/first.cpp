// Q.1 Write a C++ program to find first and last digit of a number using function define outside of class.
// #include<iostream>
// using namespace std;
// class Number
// {
//     public: 
//     int firstDigit(int a);
//     int lastDigit(int a);
// };
// int Number::firstDigit(int a){
//     while(a>9){
//         a = a/10;
//     }
//     return a;
// }
// int Number::lastDigit(int a){
//     return a%10;
// }
// int main()
// {
//    int num;
//    cout<<"Enter a number: ";
//    cin>>num;
//    Number n;
//    cout<<"First digit of the number is: "<<n.firstDigit(num) << endl;
//    cout<<"Last digit of the number is: "<<n.lastDigit(num) << endl;
//    return 0;
// }


//Q.2 Write a C++  program to find sum of first and last digit of a number using function define inside a class.
// #include <iostream>
// using namespace std;
// class DigitSum {
// public:
//     int digit(int a){
//         int temp = a;
//         while(a>9){
//             a = a/10;
//         }
//         int first = a;
//         int last = temp %10;
//         return first + last;
//     }
// };

// int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    DigitSum d;
//    cout << "Sum of first and last digit of the number is: " << d.digit(num) << "\n";
//    return 0;
// }

// Q.3 Write a C++ program to create function named as Result with different parameter to find area of geometry formula using function over loading in a class.

#include <iostream>
using namespace std;
class Geometry {
public:
    // Function to calculate the area of a rectangle
    double Result(double length, double width) {
        return length * width;
    }

    // Function to calculate the area of a circle
    double Result(double radius) {
        return 3.14 * radius * radius; 
    }

    // Function to calculate the area of a triangle
    double Result(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Geometry g;

    // Calculate area of a rectangle
    double length,width;
    cout << "Enter length of rectangle: " << "\n";
    cin >> length;
    cout << "Enter width of rectangle: " << "\n";
    cin >> width;

    cout << "Area of Rectangle: " << g.Result(length, width) << "\n";

    // Calculate area of a circle
    double radius;
    cout << "Enter radius of circle: " << "\n";
    cin >> radius;
    cout << "Area of Circle: " << g.Result(radius) << "\n";

    // Calculate area of a triangle
    double base,height;
    cout << "Enter base of triangle: " << "\n"; 
    cin >> base;
    cout << "Enter height of triangle: " << "\n";
    cin >> height;
    cout << "Area of Triangle: " << g.Result(base, height) << "\n";

    return 0;
}