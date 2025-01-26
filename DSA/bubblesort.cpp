// w.A.P to sort an array by using bubble sort.

#include<iostream>
using namespace std;
void bubble(int a[],int s)
{
    int count=0;
    for(int i=0; i<s; i++)
    {
        bool t = true;
        for(int j=0; j<s-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                count++;
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                t=false;
            }
        }
        if(t == true){
        cout<<"No swap occurred"<<endl;
        break;
        }
    }
    cout<<"Number of swaps: "<<count<<endl;
    for(int i=0;i<s;i++)
    {
        cout<< a[i] << "\t";
    }
}

int main()
{
 int arr[] = {44,5,6,1,202,3,4,5,11,45};
// int arr[]={};
// int arr[] = {1,45,3,4,5};
 int s = sizeof(arr)/sizeof(arr[0]);

 bubble(arr,s);
 return 0;
}

// Time-complexity : 1.Best Case - O(n); 2. Avg. Case and Worst Case - O(n^2)

// Space - Complexity - O(1) or Big O of one  i.e constant.

// Implace : (yes / no)  It depend on if we take an extra array to sort the array then it will not be inplace since we havn't take any extra array to solve so in this condition it is implace.

// Stable : only check in case of duplicacy if the swapping happen then it is not stable but if the swapping doesn't happen between the duplicate numbers then it is stable.

// Approach : substraction and conquer technique.

// Code is value/element based or structure based or both : in this case it is Value based.