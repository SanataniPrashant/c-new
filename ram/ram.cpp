// W.A.P to generate an electricity-bill 
// slab1: 1-100 3rs
// slab2: 101-200 5rs
// slab3: 201-500 7rs
// slab4: above 500 10rs
// slab5: less than equal to zero  invalid choice
// generate actual bill on adding 20% of the bill.
#include <iostream>
using namespace std;
int main()
{
    int r = 0, bill = 0, actual_bill = 0;
    cout << "Enter the reading" << "\n";
    cin >> r;
    if(r>=1 && r<=100){
        bill = 3*r;
    }
    else if(r>100 && r<=200){
        bill = 5*r;
    }
    else if(r>200 && r<=500){
        bill = 7*r;
    }
    else if(r>500){
        bill = 10*r;
    }
    else{
        cout << "Invalid choice" << "\n";
    }
    actual_bill = bill + (bill * 0.2);
    cout << "Actual bill is " << actual_bill << "\n";
    return 0;
}