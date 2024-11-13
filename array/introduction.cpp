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
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,1,2,1,2,5,6,4,5,5,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Length of array is: "<<n<<endl;
//     return 0;
// }

// int arr[3]={1,2,3} output - 1,2,3.
// int arr[3]={1,2,3,4} outpu t- error.
// int arr[3]={1} output - 1,0,0.
// int arr[3]; output - garbage.


// Array traversing: by using loop when we go-through with each element of array 
// forward traversing
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<=n-1;i++)
//     {
//         cout<<arr[i]<<"\n";
//     }
// }

// backward traversing

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     arr[4]=-4[arr];
//     cout<<arr[4]<<"\n";
//     //   arr[2]=(-1)*arr[2];
//         arr[2]=-2[arr];
//        cout<<arr[2] <<"\n";
//     for(int i=n-1; i>=0;i--)
//     {
//         cout<<i[arr]<<"\n";
//     }
  
   
//     // cout<<arr[-4]<<"\t";
//     // cout<<-4[arr]<<"\n"<<"nrew";
//     // cout<<arr[4];

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     //int arr[];   // error
//     int arr[]={}; //no error
//     cout<<"Size of array is: "<<sizeof(arr)<<endl;
//     cout<< 4[arr] or arr[4];
// }



// bug in array 
// out of bound 
// exception handling 

// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,2,3,4,5};
//     a[9]=900;
//     cout<<a[9];
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0 ;i<siz;i++){
//         cout<<a[i];
//     }
// }

// w.a.p to display the sum of the values of array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3,4,5};
//     int sum=0;
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         sum=sum+a[i];
//     }
//     cout << sum;
// }

// w.a.p to display the minimum of the values of array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={15,22,3,4,5};
//     int min = a[0];
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         if(a[i]<min){
//             min=a[i];
//         }
//     }
//     cout <<min ;
//     cout<<INT64_MAX << "\n";
//     cout<<INT64_MIN;
// }

// w.a.p to display the maximum of the values of array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={15,22,3,4,5};
//     int min = a[0];
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         if(a[i]>min){
//             min=a[i];
//         }
//     }
// }

// w.a.p to print only even no. in array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3,4,5,6,7,8,9,10};
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         if(a[i]%2==0){
//             cout << a[i] << "\n";
//         }
//     }
//     return 0;
// }

// w.a.p to print only odd no. in array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3,4,5,6,7,8,9,10};
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         if(a[i]%2!=0){
//             cout << a[i] << "\n";
//         }
//     }
//     return 0;
// }

// w.a.p to display the second maximum of the values of array.
// #include<iostream>
// using namespace std;
// int main()
// {
    
//     int a[]={11,3,4,590,6,7,8,99,10};
//     int max1=0, max2=0;
//     max2=INT64_MIN;
//     max1=max2;
//     int siz=sizeof(a)/sizeof(a[0]);
//     int second=0;
//     for(int i=0;i<= siz-1; i++){
//         if(a[i]>max1){
//             max2=max1;
//             max1=a[i];
//         }
//         else if(a[i]>max2 && a[i]!=max1){
//             max2=a[i];
//         }
//     }
//     cout<<max2;
//     return 0;
// }

// 1.w.a.p to find the prime no. in a given array arr[]={7,6,11,5} output- 7,11,5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={7,6,11,5};
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<siz;i++)
//     {
//         int count=0;
//         for(int j=1;j<=a[i];j++){
//             if(a[i]%j==0){
//                 count++;
//             }
//         }
//         if(count==2){
//             cout<<a[i]<<" ";
//         }
//     }
// }

// 2. w.a.p to replace 1 with 0 in a given array arr[]={2,1,3,1,5,1} output- {2,0,3,0,5,0}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={2,1,3,1,5,1};
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<siz;i++){
//         if(a[i]==1){
//             a[i]=0;
//         }
//         cout<< a[i] << "\t";
//     }
// }

// 3. w.a.p to sheift all zero atlast by holding reletive position ?
// arr[]={2,0,7,0,3,0,6}
// output - {2,7,3,6,0,0,0}

#include<iostream>
using namespace std;
int main()
{
    int a[]={2,0,7,0,3,0,6};
    int siz=sizeof(a)/sizeof(a[0]);
    

}




