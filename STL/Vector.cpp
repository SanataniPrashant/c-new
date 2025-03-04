// vector template :
// vector is dynamic while array is static
// vector is more flexible than array
// vector is more memory efficient than array


#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() 
{
    vector<int> v{5,12,14};
    cout<<"Size of vector is "<<v.size()<<endl;
    cout<<"Capacity of vector is "<<v.capacity()<<endl;
    cout<<"Max size of vector is "<<v.max_size()<<endl;
v[1]=20;
    for(auto p:v)
    {
        cout<<p<<"\t";
    }

    vector<string>v1{"ram", "shyam", "mohan"};
    for (auto k : v1)

    {
        cout<< k << "\t";
    }


    vector <int> vec;
    int a , n ;
    cout<<"Enter the number of elements you want to enter in vector"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<endl;
        cin>>a;
        vec.push_back(a);
    }
    cout<<"Vector elements are "<<endl;
    for(auto p:vec)
    {
        cout<<p<<"\t";
    }
    vec.pop_back();
    cout<<"Vector elements after pop_back() are "<<endl;
    for(auto p:vec)
    {
        cout<<p<<"\t";
    }


    vector<int>::iterator it;
    it = vec.begin();
    vec.insert(it,780);
    vec.insert(it+3, 45);

    vec.insert(vec.end()-2,64);

    cout<<"Vector elements after insertion are "<<endl;
    for(auto p:vec)
    {
        cout<<p<<"\t";
    }


    return 0;
}