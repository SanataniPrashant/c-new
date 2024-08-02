// W.A.p to accept a number from user and check weather the given no. is a two digit and also an odd no.
#include<iostream>
using namespace std;
int main()
{
    int number =  0;
    cout  <<"Enter a number: " <<"\n";
    cin >> number;
    if((number >= 10 && number <= 99 ) && number % 2 != 0){
      cout << "Number =" << number << "The no. is two digit and also an odd no." << "\n";
      }
      else{
        cout << "Number = " << number << "The no.is not an odd number";
    }
    return 0;
}