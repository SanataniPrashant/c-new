// Class Templete : Class templates like function templates, class templates are useful when a class defines something that is 
//independent of the data type. Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc. 

#include<iostream>
using namespace std;
template <typename v1>
class cybrom {
    v1 a;
    public:cybrom(v1 x)
    {
        a=x;
    }
    v1 show(){
        return a+1;
    }
};

template <typename t1 , typename t2>
class bhopal{
    public: void sum(t1 x, t2 y){
        cout<<x+y;
    }
};
int main ()
{
    cybrom <int> obj(34);
    cout<<obj.show()<<"\n";

    bhopal<int, int> b;
    b.sum(34, 56);
}