#include <iostream>
using namespace std;
int main()
{
    float balence = 1000000.855;
    cout << "Enter the amount to withdraw" << "\n";
    float withdraw_amount = 0;
    cin >> withdraw_amount;
    //conditional statement:
    if(withdraw_amount <= balence ){
        cout << "Rs." << withdraw_amount << "is withdrawn from your account." << "\n";
        float remaining_balence = balence - withdraw_amount;
        cout << "The remaining balance is "<< remaining_balence << "\n";
    }
    else{
        cout << "Insufficient balance"<<"\n";
        cout << "The balance is: " << balence <<"\n";
    }
    return 0;
}
//conditional statement:(selection statement)
// 1. if statement condition:
// Ex. if(condition {boolean expression or relational expression}){
// statements;
//  }
// 2. if else condition:
// 3.else if  ( if else if)
// 4.if else if else condition:(else if else)
// 5.Nesting nested if, nested else.
