#include<iostream>
using namespace std;
int main()
{
    int t = 0;
    for(int r=1; r<=255; r++)
    {
        cout << r << "=" << char(r) << ";";
    }
    cout << char(3);
}
