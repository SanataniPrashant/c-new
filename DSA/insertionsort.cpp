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


// Time-complexity : 1.Best Case - O(n); 2. Avg. Case and Worst Case - O(n^2)

// Space - Complexity - O(1) or Big O of one  i.e constant.

// Implace : (yes / no)  It depend on if we take an extra array to sort the array then it will not be inplace since we havn't take any extra array to solve so in this condition it is implace.

// Stable : only check in case of duplicacy if the swapping happen then it is not stable but if the swapping doesn't happen between the duplicate numbers then it is stable.

// Approach : substraction and conquer technique.

// Code is value/element based or structure based or both : in this case it is Structure based.