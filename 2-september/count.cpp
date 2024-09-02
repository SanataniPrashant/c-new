// W.a.p tp count the no. of digit 
#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "enter the no." << "\n";
    cin >> n;
    while(n!=0) {
        n = n / 10;
        count++;
    }
    cout << count;
}