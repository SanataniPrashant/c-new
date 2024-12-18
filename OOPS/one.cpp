// Example of class and object 
// #include<iostream>
// using namespace std;
// class Teacher {
//     // data member
//     private:
//     double salary;
//     public:
//     string name;
//     int age;
//     string dept;
//     string subject;

//     // setter
//     void setSalary(double s) {
//         salary = s;
//     }

//     // getter
//     double getSalary() {
//         return salary;
//     }

//     // member function
//     void chaneDept(string newDept){
//         dept = newDept;
//     }
// };
// int main(){
//     // creating object of class
//     Teacher t1;
//     t1.name = "ram";
//     t1.age = 25;
//     t1.dept = "science";
//     t1.subject = "maths"; 
//     t1.chaneDept("cs");
//     t1.setSalary(2500);

//     cout << t1.name << "\n";
//     cout << t1.age << "\n";
//     cout << t1.dept << "\n";
//     cout << t1.subject << "\n";
//     cout << t1.getSalary() << "\n"; 

// }

// Function Defined  inside the class 

// #include<iostream>
// using namespace std;
// class top1{
//     int a = 25;
//     int b = 30;
//     public:
//     int sum(){
//         return a+b;
//     }
// };
// int main(){
//     top1 t1;
//     cout << t1.sum() << "\n";
// }

// Function Defined  outside the class 

// #include<iostream>
// using namespace std;
// class top2
// {
//     int a=10,b=20;
//     public:
//     int sum();
// };
// int top2::sum(){
//     return a+b;
// } // function declared inside a class & but defined outside the class
// int main(){
//     top2 t2;
//     cout<<t2.sum();
// }

// multiple function class
// function overloading in class 

// 
#include<iostream>
using namespace std;
static int e = 30;
static int f = 20;
class top{
    static int a;
    static int b;
    public: static void sum(){
        cout  << a+b << "\n";
        cout  << e+f << "\n";
    }
};
class top2{
    static int a;
    static int b;
    public: static void multi(){
        cout  << e*f << "\n";
    }
};
class {
    int a;
    int b;
    public:  void minus(){
        cout  << e-f << "\n";
    }
} r;
    int top:: a = 10;
    int top:: b = 20;
int main(){
    top:: sum();
    top2::multi();
    r.minus();
}