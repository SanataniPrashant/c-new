#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,6>arr{6,2,1,4,5,3};
    sort(arr.begin(),arr.end());
    cout << "After Sorting :";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\t";
    }
    int m = arr.back();
    for(int i= arr.size()-2; i>=0;i--)
    {
        if(arr[i]<m)
        {
            cout << "second gratest no. of array is :"<< arr[i];
            break;
        }
    }
return 0;
}