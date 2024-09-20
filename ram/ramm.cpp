#include<iostream>
using namespace std;
int main()
{
    float phy = 0, chem = 0, math = 0, Total = 0, per = 0;
    cout << "Enter the marks of your physics" << "\n";
    cin >> phy;
    cout << "Enter the marks of your chemistry" << "\n";
    cin >> chem;
    cout << "Enter the marks of your math" << "\n";
    cin >> math;
    Total = phy + chem + math;
    cout << Total<< "\n"; 
    per = (Total/3);
    cout << per << "\n";
    if(phy>=35 && chem>=35 && math<35){
        cout << "supply in math" << "\n";
    }
    else if(phy>=35 && chem<35 && math>=35){
        cout << "supply in chem" << "\n";
    }
    else if(phy<35 && chem>=35 && math>=35){
        cout << "supply in phy" << "\n";
    }
    else if(phy>=35 && chem<35 && math<35){
        cout << "failed" << "\n";
    }
    else if(phy<35 && chem<35 && math>=35){
        cout << "failed" << "\n";
    }
    else if(phy<35 && chem>=35 && math<35){
        cout << "failed" << "\n";
    }
    else if(phy<35 && chem<35 && math<35){
        cout << "failed" << "\n";
    }
    else if (per>= 60 && per<=100){
        cout << "1st division" << "\n";
    }
    else if(per>=50 && per<=59){
        cout << "2nd division" << "\n";
    }
    else if(per>=35 && per<=49){
        cout << "2nd division" << "\n";
    }
    else{
        cout << "failed";
    }
return 0;
}
