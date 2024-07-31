// Write a program to accept birth year of user in YYYY format (like 1983) and print the chinese zodiac of the user.

// Chinese zodiac is represented by an animal sign as follows:
// 0: monkey
// 1: rooster
// 2: dog
// 3: pig
// 4: rat
// 5: ox
// 6: tiger
// 7: rabbit
// 8: dragon
// 9: snake
// 10: horse
// 11: sheep
// To get the corresponding value modulo-division year by 12

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the birth year" << "\n";
    int year;
    cin >> year;
    int zodiac = year % 12;
    cout << "zodiac = " << zodiac;
    if(zodiac = 0){
        cout << "Monkey";
    }
    else if(zodiac = 1){
        cout << "Rooster";
    }
    
    return 0;
    }