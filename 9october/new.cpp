#include<iostream>
using namespace std;
int main()
{
    int n = 0, sum = 0;
    cout<<"Enter any three digit no. between 100-999 "<< "\n";
    cin>>n;
    int temp = n;
    if(n >= 100 && n <= 999){
        // for(n; n>0; n=n/10)
        while(n != 0){
            int digit = n % 10;
            n = n / 10;
            sum = sum + digit * digit * digit;
        }
        cout<<"Sum of cube of digit of the no. is "<<sum<<endl;
        if(temp == sum){
            cout<<"The number is armstrong"<<endl;
        }
        else{
            cout<<"The number is not a armstrong no."<<endl;
        }
    }
    else{
        cout<<"Entered no. is not a three digit no." <<"\n";
    }
    return 0;
}