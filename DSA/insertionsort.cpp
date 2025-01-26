// W.A.P to sort an array by using insertion sort.

#include<iostream>
using namespace std;
void insertion(int arr[],int s)
{
    for (int i=0; i<s; i++)
    {
        int mn = i;
        while(mn>0 && arr[mn]<arr[mn-1])
        {
            int temp = arr[mn-1];
            arr[mn-1] = arr[mn];
            arr[mn] = temp;
            mn --;
        }
    }
    for (int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
}


int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int c=0; c<n; c++)
    {
        cin >> arr[c];
    }
    int s=sizeof(arr)/sizeof(arr[0]);

    insertion(arr,s);
    return 0;
}