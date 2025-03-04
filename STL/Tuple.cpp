// Tuple : upgraded version of pair because it can store more than two values at a single indexing
#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
int main() 
{
    // Creating a tuple with 3 elements
    tuple<int, int, int> t(1, 2, 3);
    // Accessing the elements of the tuple
    cout << get<0>(t) << endl;  // prints 1
    cout << get<1>(t) << endl;  // prints 2
    cout << get<2>(t) << endl;  // prints 3

    tuple<int,string,int>student = make_tuple(101,"ram",45);
    cout<<get<0>(student)<<endl;
    cout<<get<1>(student)<<endl;
    cout<<get<2>(student)<<endl;
    return 0;   
}
