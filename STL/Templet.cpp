// Template (Generalized- Format):  It is a generalized format of any program that may be a function or class.
//A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that 
// we don’t need to write the same code for different data types.
// It is used to remove the data type dependency.

// There are two types of templetes : 1. Function Templete 2. Class templete

// Function Templete : We write a generic function that can be used for different data types.

#include<iostream>
using namespace std;

template <typename t1>
t1 sum (t1 a, t1 b)
{
    return a + b;
}

template <typename x1 , typename x2>
void multiply (x1 a , x2 b)
{
    cout << "Multiply = " << a*b << "\n";
}

// x1 multiply (x1 a , x2 b)
// {
//     return a*b;
// }
int main ()
{
    cout << sum(10, 20) << endl;
    cout << sum(10.5, 20.5) << endl;
    multiply(10, 20);
}
