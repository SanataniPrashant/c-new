//Write a program that print the current balance of the account, ask the user to enter the withdrawal amount.
//if withdrawal amount is less than current balance,
//deduct the withdrawal amount form the current balance, if current balance after deduction is less than 500
// INR, deduct penalty of 50 INR and print current balance and penalty.
//otherwise, print the current balance.
//If withdrawal amount is greater than current balance, print insufficient funds.

#include<iostream>
using namespace std;
int main(){
    int current_balance = 0;
    int withdrawal_amount = 0;
    cout << "Enter the current ammount" << "\n";
    cin >> current_balance;
    cout << "Enter the withdrawal ammount" << "\n";
    cin >> withdrawal_amount;
    if (withdrawal_amount < current_balance){
        current_balance = current_balance - withdrawal_amount;
        cout << "remaining balence = " << current_balance << "\n";
        if (current_balance < 500){
            current_balance = current_balance - 50;
            cout << "Current balance after deduction is " << current_balance << "\n";
            cout << "Penalty of 50 INR is deducted" << "\n";
        }
    }
    else{
        cout << "Insufficient funds" << "\n";
    }
    return 0;
}