// enter two no. press1 for swap and 2 for max-value
#include<iostream>
using namespace std;
int main(){
   int a=0, b=0, c=0;
   cout << "enter 1st no."  << "\n";
   cin >> a;
   cout << "enter 2nd no." << "\n";
   cin >> b;
   cout << "press 1 for swap" << "\n";
   cout << "press 2 for max-value" << "\n";
   cin >> c;
   switch (c)
   {
    case 1:{
        a=a+b;
        b=a-b;
        a=a-b;
        cout << a << "\t" << b;
        break;
    }
    case 2:{
        if(a>b){
            cout << "a has max-value" << "\n";
        }
        else if(a=b){
            cout << "both are equal" << "\n";
        }
        else{
            cout << "b has max-value" << "\n";
        }
        break;
    }
    default :{
        cout << "Invalid choice" << "\n";
        break;
    }
   }
   return 0;
}

