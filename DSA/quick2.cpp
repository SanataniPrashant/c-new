#include<iostream>
using namespace std;
int part(int arr[],int low, int high)
{
    int pvt = arr[low];
    int i = low+1;
    int j= high;

    do
    {
        while(arr[i]<pvt)
        {
            i++;
        }
        while(arr[j]>pvt)
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
    }while(i<j);
    int tmp;
    tmp=arr[low];
    arr[low] =arr[j];
    arr[j]=tmp;
    return j;
}
void qcksort(int arr[], int low , int high)
{
    int pv;
    if(low<high)
    {
        pv=part(arr,low,high);
        qcksort(arr,0,pv-1);
        qcksort(arr,pv+1,high);
    }
}


int main()
{
    int arr[] = {5,2,5,6,9};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";

    qcksort(arr,0,s-1);
    cout << "\nQuick Sort\n";

    for(int i=0;i<s;i++)
    {
        cout << arr[i] << "\t";
    }
}