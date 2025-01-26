// W.A.P to show array Data

#include<iostream>
using namespace std;

void show(int a[], int s)
{
if(s==0){
    cout<<"Array is empty"<<endl;
}
else
{
    for (int i=0; i<s; i++)
    {
        cout<<a[i]<<" ";
    }
}
}



int main()
{
    int arr[] = {1, 2, 3, 4,5,6,7,8};
    int s = sizeof(arr)/sizeof(arr[0]);

    show(arr,s);
    return 0;
}