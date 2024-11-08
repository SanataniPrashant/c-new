// ==>>  ARRAY : 
// =>  It is a collection of similar kind of data element.
// =>  The indexing of array starts from 0.
// =>  The memory allocation of array is contiguous / sequentially. The data stored in sequence.
// =>  It is used to store multiple value.
// =>  With the help of array we can search the data quickly .\
// =>  There are to types of array :
// 1.  Numetric Array : 
//                      1. 1 Diamentional Array
//                      2. 2 Diamentional Array
//                      3. 3 Diamentional Array
// {
//     It is less secure because It can be accessed through its index value which is univesally known that it satarts from zero and sequentially inceases.
// }
// 2.  Associative array
// {
//     It is more secure because It is accessed through its key(It is unique and random and cannot reapeate).
// }


// ==>> one-Dimentional Array :

// =>  In one-Dimentional Array we can use only one subscript that belongs to the size of an array. 
// =>  We can create static array as well as dynamic array 
// =>  We can use loop to traverse the array.

// Syntax:
// datatype arrayname[size]; or
// datatype arrayname[size] = {value1, value2, value3, …, valueN};
// =>>  Static Array :
// =>  It is a fixed size array that is created at the time of compilation.
// =>  It is a memory efficient array because it is created at the time of compilation.
// =>  It is a faster array because it is created at the time of compilation.
// example:
// int arr[5] = {1, 2, 3, 4, 5};
// =>> Dynamic array:
// =>  It is a variable size array that is created at the time of execution.
// =>  It is a memory inefficient array because it is created at the time of execution.
// =>  It is a slower array because it is created at the time of execution.
// example:
// int *arr = new int[5];
// Differences Between Static and Dynamic Arrays:

// Memory Allocation:
// Static arrays: Allocated on the stack at compile time.
// Dynamic arrays: Allocated on the heap at runtime.

// Size Flexibility:
// Static arrays: Fixed size.
// Dynamic arrays: Size can be changed during execution.

// Initialization:
// Static arrays: Can be initialized at declaration.
// Dynamic arrays: Must be allocated and initialized using pointers.


// Program of one-dimentional static array:
// #include<iostream>
// using namespace std;
// int main() 
// {
//     int arr[5] = {11, 22, 33, 44, 55};
//     cout<<"Elements of array are: "<<endl;
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// w.a.p to count and print the length of array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,2,1,2,5,6,4,5,5,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array is: "<<n<<endl;
    cout<<arr[13];
    return 0;
}