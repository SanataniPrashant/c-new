// Quick Sort :  
// Time complexity :  best and average O(nlogn) and in worst case O(n^2);
// Space Complexity: O(1) i.e constant
// Inplace: yes
// Stable : No
// Technique: Divide and Coquer

#include<iostream>
using namespace std;

int part(int arr[],int low, int high)
{
    int pvt = arr[low];
    int i = low+1;
    int j = high;
    do
    {
        while(arr[i]<pvt)
        {
            i++;
        }
        while (arr[j]>pvt)
        {
            j--;
        }
        if(i<j)
        {
           int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
        
    } while (i<j);
    int temp;
    temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j; 
}

void quicksort(int arr[],int low,int high)
{
    int pv;
    if(low<high)
    {
        pv = part(arr,low,high);
        quicksort(arr,0,pv-1);
        quicksort(arr,pv+1,high);
    }
}
int main()
{
//  int n;
//  cout << "Enter the no. of Element in an array"<< "\n";
//  cin >> n;
//  cout << "Enter the array Elements" << '\n';
//  int arr[n];
//  for(int i=0;i<n;i++)
//  {
//     cin>> arr[i];
//  }
int arr[]={5,7,0,12,1,78,11,3};
int s = sizeof(arr)/sizeof(arr[0]);
 cout << "The array is :" << '\t';
 for(int i=0;i<s;i++)
 {
    cout <<  arr[i] << "\t";
 }
 cout << '\n';
 
 quicksort(arr,0,s-1);
 
 cout << "Array after Sorting is:"<<"\t";
 for(int i=0;i<s;i++)
 {
    cout <<  arr[i] << "\t";
 }
}

