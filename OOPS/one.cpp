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
//     ATM obj(acc,pass);// parameterized constructor
//     ATM obj2;// default constructor
    
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

// inheritance:
// By using Inheritance we cannot save memory we only can create less no. of object .
// firstly memory allocated to parent class or  constructor of parent class then memory allocated to child class or constructor of child class.
// firstly memory deallocated or released of child class  (destructor) then memory deallocated or released of parent class (destructor)

//1. single inheritance:


// #include<iostream>
// using namespace std;
// class RBI {
//     int t;
//     public: RBI(){
//         cout << "RBI Memory" << "\n";
//     }
//     ~RBI(){
//         cout << "RBI Memory deallocated or released" << "\n";
//     }
//     public: void show(){
//         cout << "RBI Class" << "\n";
//     }
//     public: void ram(){
//         cout << "RBI RAM" << "\n";
//     }
// };

// class SBI : public RBI 
// {
//     int a;
//     public: SBI(){
//         cout << "SBI Memory" << "\n";
//     }
//     ~SBI(){
//         cout << "SBI Memory deallocated or released" << "\n";
//     }
//     public: void show(){
//         cout << "SBI Class" << "\n";
//     }
// };

// int main(){
//     SBI s;
//     s.show();
//     s.ram();
//     cout << "Size of SBI = " << sizeof(s) << "\n";
//     cout << "Size of RBI = " << sizeof(RBI) << "\n";
//     return 0;

// }

// 2. Multilevel:

// #include<iostream>
// using namespace std;
// class RBI {
//     int t;
//     public: RBI(){
//         cout << "RBI Memory" << "\n";
//     }
//     ~RBI(){
//         cout << "RBI Memory deallocated or released" << "\n";
//     }
//     public: void show(){
//         cout << "RBI Class" << "\n";
//     }
//     public: void ram(){
//         cout << "RBI RAM" << "\n";
//     }
// };

// class SBI : public RBI 
// {
//     int a;
//     public: SBI(){
//         cout << "SBI Memory" << "\n";
//     }
//     ~SBI(){
//         cout << "SBI Memory deallocated or released" << "\n";
//     }
//     public: void show(){
//         cout << "SBI Class" << "\n";
//     }
// };

// class customer : public SBI
// {
//     int b;
//     public: customer(){
//         cout << "Customer Memory" << "\n";
//     }
//     ~customer(){
//         cout << "Customer Memory deallocated or released" << "\n";
//     }
//     public: void account(){
//         cout << "Customer Class" << "\n";
//     }
// };

// int main(){
//     customer s;
//     s.show();
//     s.ram();
//     s.account();
//     cout << "Size of RBI = " << sizeof(RBI) << "\n";
//     cout << "Size of SBI = " << sizeof(SBI) << "\n";
//     cout << "Size of customer = " << sizeof(customer) << "\n";

//     return 0;

// }

// 3. Multiple Inheritance: 
// In a multiple inheritance we can inherit more than one class at a time.

// #include<iostream>
// using namespace std;
// class SBI {
//     public: void sbiacnt(){
//         cout << "SBI" << "\n";
//     }
// };
// class Axis {
//     public: void axisacnt(){
//         cout << "Axis" << "\n";
//     }
// };
// class customer : public SBI, public Axis {
//     public: void msg(){
//         cout << "Welcome" << "\n";
//     }
// };
// int main(){
//     customer s;
//     s.sbiacnt();
//     s.axisacnt();
//     s.msg();
//     return 0;
// }


// Ambiguidity:
//(Diamond Problem): Diamond problem arises on multiple inheritance due to signature.

// Ambiguidity is a situation where the compiler is unable to decide which function to call when
// there are multiple functions with the same name in the classes.

// #include<iostream>
// using namespace std;
// class SBI {
//     public: SBI(){
//         cout << "SBI" << "\n";
//     }
//     public: void show(){  // signature
//         cout << "SBI Account no." << "\n";
//     }
//     ~SBI(){
//         cout << "SBI Destructor" << "\n";
//     }
// };
// class Axis {
//     public: Axis(){
//         cout << "Axis" << "\n";
//     }
//     public: void show(){  // signature
//         cout << "Axis Account no." << "\n";
//     }
//     ~Axis(){
//         cout << "Axis Destructor" << "\n";
//     }
// };
// class customer : public SBI, public Axis { 
//     public: void msg(){
//         cout << "Welcome" << "\n";
//     }
//     public: void show(){  // signature
//     // SBI::show();  // call SBI::show()
//     // Axis::show();  // call Axis::show()
    
//     cout << "Customer name" << "\n";
//     }
//     ~customer(){
//         cout << "Customer Destructor" << "\n";
//     }
// };
// int main(){
//     customer s;
//     s.show();  
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class SBI {
//     public: SBI(){
//         cout << "SBI" << "\n";
//     }
//     public: void show(){  // signature
//         cout << "SBI Account no." << "\n";
//     }
//     ~SBI(){
//         cout << "SBI Destructor" << "\n";
//     }
// };
// class Axis {
//     public: Axis(){
//         cout << "Axis" << "\n";
//     }
//     public: void show(){  // signature
//         cout << "Axis Account no." << "\n";
//     }
//     ~Axis(){
//         cout << "Axis Destructor" << "\n";
//     }
// };
// class customer : private SBI, private Axis { 
//     public: customer(){
//         cout << " customer Welcome" << "\n";
//         SBI::show();  // call SBI::show()
//         Axis::show();  // call Axis::show()
//     }
    
//     // public: void show(){  // signature
//     // // SBI::show();  // call SBI::show()
//     // // Axis::show();  // call Axis::show()
    
//     // cout << "Customer name" << "\n";
//     // }
//     ~customer(){
//         cout << "Customer Destructor" << "\n";
//     }
// };
// int main(){
//     customer s;
//     // s.show();  
//     return 0;
// }


// Protected function can accessed only inside the function of inherited class.

// #include<iostream>
// using namespace std;
// class college {
//     protected: void show(){
//         cout << "College name" << "\n";
//     }
// };
// class student : public college 
// {
//     public: void message(){
//         college::show();  // call college::show()
//         cout << "Student name" << "\n";
//     }
// };
// int main(){
//     student s;
//     s.message();
//     return 0;
// }

// Hierachicle Inheritance :  (server-client architecture)

// #include<iostream>
// using namespace std;
// class RBI{
//     public: void man(){
//         cout << "RBI" << '\n';
//     }
// };
// class SBI : public RBI
// {
//     public: void dam(){
//         cout << "SBI" << "\n";
//     }
// };
// class UBI : public RBI
// {
//     public: void sam(){
//         cout << "UBI" << "\n";
//     }
// };
// class PNB : public RBI
// {
//     public: void cam(){
//         cout << "PNB" << "\n";
//     }
// };
// int main(){
//     SBI s;
//     s.man();
//     s.dam();
//     UBI u;
//     u.man();
//     u.sam();
//     PNB p;
//     p.man();
//     p.cam();
// }



// Hybrid  Inheritance : Combination of differnt tyopes of inheritance is called  hybrid inheritance.

// virtual pointer is used to resolve diamond problem in inheritance. it takes 8 bytes memory bydefault. and In this more memory required.

// #include<iostream>
// using namespace std;
// class RBI{
//     public: void man(){
//         cout << "RBI" << '\n';
//     }
// };
// class SBI : virtual public RBI  // virtual pointer
// {
//     public: void dam(){
//         cout << "SBI" << "\n";
//     }
// };
// class UBI : virtual public RBI
// {
//     public: void sam(){
//         cout << "UBI" << "\n";
//     }
// };
// class cust : public SBI, public UBI
// {
//     public: void cam(){
//         cout << "PNB" << "\n";
//     }
// };
// int main(){
//     SBI s;
//     s.man();
//     s.dam();
//     UBI u;
//     u.man();
//     u.sam();
//     cust c;
//     c.dam();
//     c.sam();
//     c.cam();
//     c.man();
// }



//  Polymorphism :

//  There are two types of polymorphism: compile-time polymorphism and runtime polymorphism.

//  Compile-time polymorphism is achieved through function overloading, while runtime polymorphism is achieved through
//  function overriding or method overriding.

//  Polymorphism is a key feature of object-oriented programming (OOP) that allows for
//  more flexibility and generic code.

// #include<iostream>
// using namespace std;
// class RBI
// {
//     public:  // virtual void man()=0; // Pure Virtual Function
//     virtual void loan(){  // virtual function
//         cout << "RBI Class" << "\n";
//     }
//     virtual void  show(){
//         cout << "RBI Bank" << "\n";
//     }
// };

// class AXIS : public RBI
// {
//     public: void loan(){
//         cout << "AXIS Class" << "\n";
//     }
//     void show(){
//         cout << "AXIS Bank" << "\n";
//     }
// };
// class SBI : public RBI
// {
//     public: void loan(){
//         cout << "SBI Class" << "\n";
//     }
//     void show(){
//         cout << "SBI Bank" << "\n";
//     }
// };

// int main(){
//     RBI *p;
//     AXIS a;
//     SBI b;
//     RBI r;
//     p = &a;
//     p->loan();
//     p->show();

// }


// Pure-virtual function 
// A pure-virtual function is a virtual function that is declared with virtual keyword and initialized with zero.
// Pure-virtual function declared in class that class is called as abstract class.

// #include<iostream>
// using namespace std;
// class Animal{
//     public: virtual void sound()=0;
// };
// class Dog : public Animal
// {
//     public: void sound(){
//         cout << "Barking" << "\n";
//     }
// };
// class Cat : public Animal
// {
//     public: void sound(){
//         cout << "Meowing" << "\n";
//     }
// };
// class Lion: public Animal{
//     public: void sound(){
//         cout << "Roaring" << "\n";
//     }
// };
// int main(){
//     Animal *p;
//     Dog d;
//     Cat c;
//     Lion l;
//     p = &d;
//     p->sound();
//     p = &c;
//     p->sound();
//     p = &l;
//     p->sound();
//     return 0;
// }
