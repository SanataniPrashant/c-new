#include<iostream>
using namespace std;
int main()
{
    int n1=0, n2=0, n5=0, n10=0, n20=0, n50=0, n100=0, n200=0, n500=0, ammount=0;
    cout << "Enter the ammount " << "\n";
    cin >> ammount;
    if(ammount>=500){
        n500 = ammount/500;
        ammount = ammount%500;
    }
    if(ammount>=200){
        n200 = ammount/200;
        ammount = ammount%200; 
    }
    if(ammount>=100){
        n100 = ammount/100;
        ammount = ammount%100;
    }
    if(ammount>=50){
        n50 = ammount/50;
        ammount = ammount%50;
    }
    if(ammount>=20){
        n20 = ammount/20;
        ammount = ammount%20;
        }
    if(ammount>=10){
        n10 = ammount/10;
        ammount = ammount%10;
    }
    if(ammount>=5){
        n5 = ammount/5;
        ammount = ammount%5;
    }
    if(ammount>=2){
        n2 = ammount/2;
        ammount = ammount%2;
    }
    if(ammount>=1){
        n1 = ammount/1;
    }
    else{
        cout << "Invalid ammount" << "\n";
    }
    cout << n500 << n200 << n100 << n50 << n20 << n10 << n5 << n2 << n1;
}