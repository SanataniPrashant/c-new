// W.A.P to accept the withdrawal ammount  and 
// if the amount less than the withdrawal succesful else insufficient balence
// without using if-else 
// withrawal amount cannot be cheked twice in if 
// do not use any loop statement
#include <iostream>
using namespace std;

int main() {
//     int account_balance = 100000;
//     int withdrawal_amount = 0;

//     cout << "Enter the withdrawal amount" << "\n";
//     cin >> withdrawal_amount;

//     int new_balance = account_balance - withdrawal_amount;
//     int flag = (new_balance >= 0) ? 1 : 0;

//     cout << (flag ? "Withdrawal successful" : "Insufficient balance") << "\n";
//     cout << "Account balance after withdrawal is " << (flag ? new_balance : account_balance) << "\n";

//     return 0;
// }

    int account_balance = 100000;
    int withdrawal_amount = 0;
    bool is_withdrawal_done = false;
    if (withdrawal_amount <= account_balance){
        cout << "withdrawal successful" << '\n';
        is_withdrawal_done = true;
    }
    if (!is_withdrawal_done)
    {
        cout << "insufficient balance" << '\n';
    }
}
    

