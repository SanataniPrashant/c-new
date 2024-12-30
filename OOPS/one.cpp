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

// multiple function class : class having multiple function in a single class.
// function overloading in class : function overloading is a feature of c++ in which two or more function with same name can
// be defined having different parameters. it is used to perform a single task in different ways.

// #include<iostream>
// using namespace std;
// class top1
// {
//     int a=10,b=20;
//     public:int sum(){
//         cout<<a+b<<"\n";
//     }
//     public: void sum(int e, int m, int l){
//         cout<<e+m+l;
//     }
// };
// int main(){
//     top1 k;
//     k.sum();
//     k.sum(10,20,30);
// }

// static function

// #include<iostream>
// using namespace std;
// static int e = 30;
// static int f = 20;
// class top{
//     static int a;
//     static int b;
//     public: static void sum(){
//         cout  << a+b << "\n";
//         cout  << e+f << "\n";
//     }
// };
// class top2{
//     public: static void multi(){
//         cout  << e*f << "\n";
//     }
// };
// class {                   // class without name anonymous class
//     int a;
//     int b;
//     public:  void minus(){
//         cout  << e-f << "\n";
//     }
// } r;
//     int top:: a = 10;
//     int top:: b = 20;
// int main(){
//     top:: sum();
//     top2::multi();
//     r.minus();
// }

// composite class

// #include<iostream>
// using namespace std;
// class virus{
//     public: void affect(){
//         cout << "your system got hacked" << "\n";
//     }
// };
// class reward{
//     virus v;
//     public: void Prize(){
//         cout << "you won $20000" << "\n";
//         v.affect();
//     }
// };
// int main(){
//     reward r;
//     r.Prize();
// }

// =>> Default constructor:

// #include<iostream>
// using namespace std;
// class top{
//     public: top(){  // implicit calling
//         cout << "default constructor called" << "\n";
//     }
//     public: void show(){   // explicit calling
//         cout << "fhfejifjieio" << "\n";
//     }
// };
// int main(){
//     top t;
//     t.show();
// }

// =>> parametrized constructor 

// #include<iostream>
// using namespace std;
// class ATM
// {
//     public: ATM(int u, int p){  // implicit calling
//     if(u == 111 && p == 9630){
//         cout << "welcome" << "\n";
//     }
//     else{
//         cout << "invalid" << "\n";
//     }
//     }
//     ATM(){
//         cout << "default constructor called" << "\n";
//     }
// };

// int main()
// {
//     int acc , pass;
//     cout<<"Enter the number" << "\n";
//     cin>>acc;
//     cout<<"Enter the number" << "\n";
//     cin>>pass;
//     ATM obj(acc,pass);// default constructor
//     ATM obj2;
    
//     return 0;
// }

// constructor overloading : if a class has more than one constructor with different parameters is calles constructor overloading

// this-> pointer:

// #include<iostream>
// using namespace std;
// class student{
//     int rno;
//     public: student(int rno){
//         this-> rno = rno;
//     }
//     void show(){
//         cout << "Rno = " << rno ;
//     }
// };
// int main(){
//     student s(101);
//     s.show();
//     student s1(s);
//      // shallow copy : it is inbuilt or default copy the data from one object to another. 
//     s.show();
// }

// shallow copy

// #include<iostream>
// using namespace std;
// class student{
//     public:int r;
//     public: student(int rno){
//         r = rno;
//     }
//     void show(){
//         cout << "Rno = " << r ;
//     }
// };
// int main(){
//     student s(101);
//     s.show();
//     student s1(s);
//      // shallow copy : it is inbuilt or default copy the data from one object to another. 
//     s1.show();
//     s1.r = 555;
//     student s2(s1);
//     s2.show();

// }

// shallow copy using pointer
// #include<iostream>
// #include<string.h>
// using namespace std;
// class student{
//     char *c;
//     public: student(char *s){
//         c= new char[20];
//         strcpy(c,s);
//     }
//     void show(){
//         cout << "Name = " << c ;
//     }
//     void surname(char *s){
//         strcat(c,s);
//     }
//     ~student(){
//         cout << "memory released" <<"\n";
//         delete c;
//     }
// };
// int main(){
//     student s1("rama");
//     s1.show();
//     student s2(s1);
//     s2.show();
//     s2.surname("mohan");
//     s1.show();
//     s2.show();
//     return 0;
// }

// Deep copy 

// #include<iostream>
// #include<string.h>
// using namespace std;
// class student{
//     char *c;
//     public: student(char *s){
//         c= new char[20];
//         strcpy(c,s);
//     }
//     student(student &obj){
//         c= new char[20];
//         strcpy(c,obj.c);
//     }
//     void show(){
//         cout << "Name = " << c ;
//     }
//     void surname(char *s){
//         strcat(c,s);
//     }
//     ~student(){
//         cout << "memory released" <<"\n";
//         delete c;
//     }
// };
// int main(){
//     student s1("rama");
//     s1.show();
//     student s2(s1);
//     s2.show();
//     s2.surname("mohan");
//     s1.show();
//     s2.show();
//     return 0;
// }

// Destructor: release the memory of an object.

// Friend Function 
// Friend function is a function that is defined inside a class but not a member of that class.
// It can access the private and protected members of the class.
// Friend function is used to provide a way to access the private and protected members of a class from
// outside the class.
// Friend function is a non-member function of a class.


// #include<iostream>
// using namespace std;
// class student2;
// class student1
// {
//     int marks = 90;
//     friend void cmp(student1,student2);
// };
// class student2
// {
//     int marks = 80;
//     friend void cmp(student1,student2);
// };
// void cmp(student1 s1,student2 s2){
//     cout << "marks of s1 = " << s1.marks << endl;
//     cout << "marks of s2 = " << s2.marks << endl;
//     //     s1.marks = 100; // error: cannot assign to member variable 'marks
//     //     s2.marks = 100; // error: cannot assign to member variable '
//     if(s1.marks>s2.marks){
//         cout << "s1 is greater than s2" << endl;
//     }
//     else{
//         cout << "s2 is greater than s1" << endl;
//     }
// }
// int main()
// {
//     student1 s1;
//     student2 s2;
//     cmp(s1,s2);
// }

// friend class :
// friend class is a class that is declared as a friend of another class.
// It is used to provide a way to access the private and protected members of a class from outside
// the class.
// friend class is a non-member function of a class.

// #include<iostream>
// using namespace std;
// class AXIS
// {
//     int ammount = 10000;
//     friend class RBI;
// };
// class SBI 
// {
//     int ammount = 30000;
//     friend class RBI;
// };
// class RBI
// {
//     public: void balanceaxis(AXIS a)
//     {
//         cout << "balence of axis = " << a.ammount <<"\n";
//     }
//     public: void balancesbi(SBI s)
//     {
//         cout << "balence of SBI = " << s.ammount <<"\n";
//     }
// };
// int main(){
//     AXIS a;
//     SBI s;
//     RBI r;
//     r.balanceaxis(a);
//     r.balancesbi(s);
//     return 0;
// }

// operator overloading:    
// Operator overloading is a feature of C++ that allows us to redefine the behavior of operators.

// complex data type ko solve karne ke liye operator-overloding use karenge.
// unary without parrameter
// binary with parameters 

// #include<iostream>
// using namespace std;
// class top 
// {
//     int a = 10; 
//     public: operator ++()
//     {
//         a++;
//         cout <<a<<"\n";
//     }
//     public: operator --()
//     {
//         a--;
//         cout <<a<<"\n";
//     }
// };
// int main(){
//     top p;
//     ++p;
//     --p;
//     // int a= 90;
//     // cout<<++a;
//     // int p=90;  // error due to memeory already allocated 
//     // cout << p;

// }

// w.a.p to add complex data-type
// #include<iostream>
// using namespace std;
// class bhopal{
//    int mile;
//    public:bhopal(int m){
//     mile = m;
//    }
//    operator +(bhopal &obj)
//    {
//     mile = mile + obj.mile;
//     cout << "Total miles = " << mile;
//    }
//     };
// int main(){
//     bhopal start(12400);
//     bhopal end(12500);
//     start + (end);
// }

