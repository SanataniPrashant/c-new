// Merge Sort :  
// Time complexity :  best , average and worst O(nlogn) 
// Space Complexity: O(n) i.e constant
// Inplace: No
// Stable : No
// Technique: Divide and Coquer

#include<iostream>
using namespace std;


void merges(int A[],int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k] =A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        A[i]=B[i];
    }
}



void divide(int A[],int low,int high) 
{
    int mid;
    if(low<high){

        mid = (low+high)/2;
        divide(A,low,mid);
        divide(A,mid+1,high);
        merges(A,low,mid,high);
    }
}

void printarr(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<< A[i] << "\t";
    }
    cout << "\n";
}


int main ()
{
  int arr[] = {5,2,5,6,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  printarr(arr,n);
  divide(arr,0,n-1);

  cout<< "-------------After MergeSort ------------" << "\n";
  printarr(arr,n);
    
}