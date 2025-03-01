// Array templete : 


#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
array<int,6>arr{1,2,78,45,12,48};
sort(arr.begin(),arr.end());
cout<<"Sorted array is: ";
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<"\t";
}

cout << "\n" << "Min =" << arr.front()<< "\n";
cout << "Max =" << arr.back()<< "\n";
cout << "size of array = "<< arr.size() << "\n";
return 0;

}



// All templete Class : - 
// 1. Container 
// 2. Iterator (pointer)
// 3. Algorithm (sort())