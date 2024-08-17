// w.a.p to accept 5 no. from user and find the maximum no. among the entered no.
#include<iostream>
using namespace std;
int main()
{
    int maximum = 0;
    int input = 0;
    for (int i = 1; i <=5; i++)
    {
        cout << "Enter number " << "\n";
        cin >> input;
        if (maximum < input)
        {
            maximum = input;
        }
    }
    cout << "the maximum no. among the enterd no. is " << maximum << "\n";
}