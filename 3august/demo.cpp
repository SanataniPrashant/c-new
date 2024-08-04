#include<iostream>
using namespace std;
int main()
{
    cout << " \"vovel\" " << "\n" ;
    cout << " a \\t\"vovel\" " << "\n";
    char user_input = 0;
    cout << "Enter a character: " << "\n";
    cin >> user_input;
    bool flag_invalid = false;
    bool flag_vovel = false;

    switch (user_input){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            flag_invalid = true;
            break;
        default :
            flag_vovel = true;
    }
    if (flag_vovel){
        cout << "The character is a vovel." << "\n";
    }
    else{
        cout << "The character is consonent." << "\n";
    } 
    return 0;
}