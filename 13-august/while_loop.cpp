#include<iostream>
using namespace std;
int main()
{
    int magic_number = 55;
    int user_input = 0;
    int count = 0;
    while (user_input != magic_number){
        cout << "Enter a no. try to enter maguc no." << '\n';
        cin >> user_input;
        count ++;
        // if(count == 5) or
        if(count % 5 == 0){
            cout << " magic no. is a double digit no. like 11 " << "\n" ;
            // count = 0;
        }
        cin.clear();
    }
    return 0;
}
// w.a.p to print cheen tapak dam dam till the time  the user not entering 10 th even no.