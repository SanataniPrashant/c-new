// Pair : It is used to store Two different types of values the 
// first value is accessed by first keyword and the second value is aceessed by the second keyword 
// We insert data in a pair by using make_pair function.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Creating a pair
    pair<int, int> p1 = make_pair(10, 20);
    // Accessing the first value of the pair
    cout << "First value of the pair: " << p1.first << endl;
    // Accessing the second value of the pair
    cout << "Second value of the pair: " << p1.second << endl;

    
    vector<pair<int, string>>v;
    int roll,n;
    string name;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"Enter the roll number: ";
        cin>>roll;
        cout<<"Enter the name: ";
        cin>>name;
        v.push_back(make_pair(roll,name));// v.push_back({roll,name})
    }
    cout<< "Result = "<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}
