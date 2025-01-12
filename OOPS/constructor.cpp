// constructor : constructor is a special method invoked automatically at time of object creation . used for initialization.

// 1. default constructor Non-parameterized constructor

// #include<iostream>
// using namespace std;
// class Test
// {
//     public:
//     Test()
//     {
//         cout<<"default constructor"<<endl;
//     }
// };
// int main(){
//     Test t1;
//     return 0;
// }


// 2. parameterized constructor

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int rollno;
//     string dep;
//     student(string name, int rollno , string dep)
//     {
//         this->name = name;
//         this->rollno = rollno ;
//         this->dep = dep ;
        
//     }
    
//     void getinfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//         cout<<"department : "<<dep<<endl;
//     }
// };
// int main(){
//     student t1("hj",11,"math");
//     t1.getinfo();
//     return 0;
// }


// 3. copy constructor

// shallow copy

// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int rollno;
//     string dep;
//     student(string name, int rollno , string dep)
//     {
//         this->name = name;
//         this->rollno = rollno ;
//         this->dep = dep ;
        
//     }
    
//     void getinfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//         cout<<"department : "<<dep<<endl;
//     }
//     student(student &obj){
//         cout << "i am custom copy constructor" <<"\n";
//         this->name = obj.name;
//         this->rollno = obj.rollno ;
//         this->dep = obj.dep ;
//     }
// };
// int main(){
//     student t1("hj",11,"math");
//     t1.getinfo();
//     //    student t2 = t1; // this will call the copy constructor
//     student t2(t1); // this will call the copy constructor
//     t2.getinfo();
//     return 0;
// }


// Deep copy 
// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     double* cgpaptr;
//     student(string name, double cgpa)
//     {
//         this->name = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa ;
//     }
//     void getinfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"cgpa : "<<*cgpaptr<<endl;
//     }
//     student(student &obj){
//         cout << "i am custom copy constructor" <<"\n";
//         this->name = obj.name;
//         this->cgpaptr = new double ;
//         *cgpaptr = *obj.cgpaptr ;
//     }
// };
// int main(){
//     student s1("ram",10.0);
//     s1.getinfo();
//     student s2(s1);

//     *(s2.cgpaptr)=9.5;
//     s2.name="shyam";
//     s2.getinfo();

//     s1.getinfo();

//     return 0;

   
// }



//Write a program to create a class CIRCLE with one field as radius, used to calculate the area of a Circle. Create another class RECTANGLE used 
//to calculate the area of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance such that the radius of circle
// class can be re-used as length in rectangle class. Take necessary data members and member functions for both the classes to solve this problem. 
//All the data members are initialized through the constructors. Show the result by accessing the area method of both the classes through the objects of the rectangle class.

// #include<iostream>
// using namespace std;
// class CIRCLE{
//     public:
//     double radius;
//     CIRCLE(double r)
//     {
//         radius = r;
//     }
//     double areacircle(){
//         return 3.14*radius*radius;
//     }
// };
// class RECTANGLE : public CIRCLE
// {
//     public:
//     double width;
//     RECTANGLE(double r, double w):CIRCLE(r){
//         width = w;
//     }
//     double arearectangle()
//     {
//         return width*radius;
//     }
// };
// int main(){
    
//     RECTANGLE r(5.91, 6.25);
//     cout << r.areacircle()<< "\n";
//     cout<<r.arearectangle()<<"\n";

//     return 0;
// }

//Write a Program to find Maximum out of Two Numbers using friend function.

//W.A cpp program to overload binary (+)and binay(-) operator.
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     float real;
//     float imag;

// public:
//     // Constructor
//     Complex(float r = 0, float i = 0) : real(r), imag(i) {}

//     // Overloading the binary + operator
//     Complex operator+(const Complex& obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     // Overloading the binary - operator
//     Complex operator-(const Complex& obj) {
//         Complex temp;
//         temp.real = real - obj.real;
//         temp.imag = imag - obj.imag;
//         return temp;
//     }

//     // Function to display the complex number
//     void display() {
//         cout << "Real: " << real << " Imaginary: " << imag << endl;
//     }
// };

// int main() {
//     Complex c1(3.0, 4.0);
//     Complex c2(1.0, 2.0);

//     Complex result_add = c1 + c2;
//     Complex result_sub = c1 - c2;

//     cout << "Addition result: ";
//     result_add.display();

//     cout << "Subtraction result: ";
//     result_sub.display();

//     return 0;
// }

// Write a Program illustrating how the constructors and destructor are implemented and the order in which they are called when the classes are inherited. Use three classes named alpha, beta, gamma such that alpha,beta are base class and gamma is derived class inheriting alpha & beta.


//Write a Program  using Anonymous class having swap method and table method.

// #include<iostream>
// using namespace std;
// class {
//     public:
//     int a,b;
//     void swap(int c, int d)
//     {
//         a=c;
//         b=d;
//         cout << "before swapping :"<< "\n" << "a= "<< c << "b= " << d <<"\n"; 
//         int temp;
//         temp = a;
//         a = b;
//         b = temp;
//         cout << "after swapping :"<< "\n" << "a= "<< a << "b= " << b <<"\n";
//     }
//     void table(int n){
//         for(int i=1;i<=10;i++){
//             cout << n << "*" << i << "=" << n*i <<"\n";
//         }
//     }
// }obj;
// int main(){
//     obj.swap(5,6);
//     obj.table(5);
//     return 0;
// }


