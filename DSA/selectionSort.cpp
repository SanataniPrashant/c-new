// Selection Sort : 
// It cannot be optimized.
// Time Complexity in all three cases : O(n^2)
// Space Complexity : O(1)
// Inplace : yes
// Selection Sort is not a stable sort.
// It is structure based.
// It follows substraction and conquer technique.

#include<iostream>
using namespace std;

void selectionSort(int a[],int s)
{
    int chotu;
    for(int i=0;i<s;i++)
    {
        chotu = i;
        for (int j=i+1; j<s; j++)
        {
            if (a[chotu] > a[j])
            {
                chotu = j;
            }
        }
        if(chotu != i){
            int temp = a[i];
            a[i] = a[chotu];
            a[chotu] = temp;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,s);
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}