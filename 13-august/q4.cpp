// W.A.P to 
#include<iostream>
using namespace std;
int main()
{
    int input = 0;
    cout << "Enter number " << "\n";
        cin >> input;
        int minimum = input;
    for (int i = 1; i < 5; i++)
    {
        cout << "Enter number " << "\n";
        cin >> input;
        if (minimum > input)
        {
            minimum = input;
        }
    }
    cout << "the minimum no. among the enterd no. is " << minimum << "\n";
}