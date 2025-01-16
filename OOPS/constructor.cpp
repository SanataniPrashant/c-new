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


// #include<iostream>
// #include<string>
// using namespace std;
// class vehicle{
//     string vehicleno , color;
//     public:
//     vehicle(string vehicleno, string color){
//         this->vehicleno = vehicleno;
//         this->color = color;
//     }
//     virtual void info(){
//         cout << "Vehicle Number: "<< vehicleno <<"\n" ;
//         cout << "Vehicle Color: "<< color <<"\n" ;
//     }
// };
// class Twowheeler : public vehicle{
//     public:
//     Twowheeler(string vehicleno, string color):vehicle(vehicleno,color){
//     }
//     void info(){
//         vehicle::info();
//         cout << "class Twowheeler" << "\n";
//     }
// };
// class fourwheeler : public vehicle{
//     public:
//     fourwheeler(string vehicleno, string color):vehicle(vehicleno,color){
//     }
//     void info(){
//         vehicle::info();
//         cout << "class fourwheeler" << "\n";
//     }
// };
// int main(){
// //    Twowheeler bike("ghj","dfgh");
// //    bike.info();
// //    fourwheeler car("vnb55","dhdhd");
// //    car.info();
// vehicle *v ;
// Twowheeler obj("ghj","dfgh");
// fourwheeler obj1("vnb55","dhdhd");
// v = &obj;
// v->info();
// v = &obj1;
// v->info();

//     return 0;
// }


//Write a program to find Area and Circumference of different shapes using polymorphism concept. in cpp

// #include <iostream>
// using namespace std;

// // Base class Shape
// class Shape {
// public:
//     // Virtual function to calculate area
//     virtual double area() const = 0; // Pure virtual function

//     // Virtual function to calculate circumference
//     virtual double circumference() const = 0; // Pure virtual function

//     // Virtual destructor
//     virtual ~Shape() {}
// };

// // Derived class Circle
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     // Override area() for Circle
//     double area() const override {
//         return 3.14159 * radius * radius; // πr²
//     }

//     // Override circumference() for Circle
//     double circumference() const override {
//         return 2 * 3.14159 * radius; // 2πr
//     }
// };

// // Derived class Rectangle
// class Rectangle : public Shape {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}

//     // Override area() for Rectangle
//     double area() const override {
//         return length * width; // l * w
//     }

//     // Override circumference() for Rectangle
//     double circumference() const override {
//         return 2 * (length + width); // 2(l + w)
//     }
// };

// int main() {
//     // Create objects of Circle and Rectangle
//     Circle circle(5.0);
//     Rectangle rectangle(4.0, 6.0);

//     // Use base class pointers to achieve polymorphism
//     Shape* shape1 = &circle;
//     Shape* shape2 = &rectangle;

//     // Calculate and display area and circumference
//     cout << "Circle:" << endl;
//     cout << "Area: " << shape1->area() << endl;
//     cout << "Circumference: " << shape1->circumference() << endl;

//     cout << "\nRectangle:" << endl;
//     cout << "Area: " << shape2->area() << endl;
//     cout << "Circumference: " << shape2->circumference() << endl;

//     return 0;
// }

// Write a program using static method & static variable. in cpp
// #include <iostream>
// using namespace std;

// class s{
//     static int a,b;
//     public:
//     static void sum(int c, int d)
//     {
//         a=c;
//         b=d;
//         cout<<"sum of a and b is "<<a+b<<endl;
//     }
//     static void display()
//     {
//         cout<<"value of a is "<<a<<endl;
//         cout<<"value of b is "<<b<<endl;
//     }
// };
// int s::a=0;
// int s::b=0;
// int main()
// {
//     s::sum(10,20);
//     s::display();
//     return 0;
// }    



//Write a program to create diamond problem in inheritance .in cpp
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void display()
//     {
//         cout<<"A"<<endl;
//     }
// };
// class B:public A{
//     public:
//     void displayB()
//     {
//         cout<<"B"<<endl;
//     }
// };
// class C:public A{
//     public:
//     void displayC()
//     {
//         cout<<"C"<<endl;
//     }
// };
// class D:public B , public C{
//     public:
//     void displayD()
//     {
//         cout<<"D"<<endl;
//     }
// };
// int main()
// {
//     D obj;
//     obj.display();// ambiguidity
//     obj.displayB();
//     obj.displayC();
//     obj.displayD();
//     return 0;
// }


//Write a program to handle the exception of double and char value. in cpp

// #include <iostream>
// #include <stdexcept> // For std::invalid_argument

// // Function to check if a double value is valid
// void checkDouble(double value) {
//     if (value < 0) {
//         throw std::invalid_argument("Double value cannot be negative!");
//     }
//     std::cout << "Double value is valid: " << value << std::endl;
// }

// // Function to check if a char value is valid
// void checkChar(char value) {
//     if (!isalpha(value)) {
//         throw std::invalid_argument("Char value must be an alphabet!");
//     }
//     std::cout << "Char value is valid: " << value << std::endl;
// }

// int main() {
//     try {
//         // Test double value
//         double doubleValue;
//         std::cout << "Enter a double value: ";
//         std::cin >> doubleValue;
//         checkDouble(doubleValue);

//         // Test char value
//         char charValue;
//         std::cout << "Enter a char value: ";
//         std::cin >> charValue;
//         checkChar(charValue);
//     }
//     catch (const std::invalid_argument& e) {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (...) {
//         std::cerr << "An unknown exception occurred!" << std::endl;
//     }

//     return 0;
// }

//W.a.cpp program for constructor overloading

// #include <iostream>
// #include <string>

// class Student {
// private:
//     std::string name;
//     int age;
//     double grade;

// public:
//     // Default Constructor
//     Student() {
//         name = "Unknown";
//         age = 0;
//         grade = 0.0;
//         std::cout << "Default constructor called!" << std::endl;
//     }

//     // Parameterized Constructor (with name only)
//     Student(std::string n) {
//         name = n;
//         age = 0;
//         grade = 0.0;
//         std::cout << "Parameterized constructor (name only) called!" << std::endl;
//     }

//     // Parameterized Constructor (with name and age)
//     Student(std::string n, int a) {
//         name = n;
//         age = a;
//         grade = 0.0;
//         std::cout << "Parameterized constructor (name and age) called!" << std::endl;
//     }

//     // Parameterized Constructor (with name, age, and grade)
//     Student(std::string n, int a, double g) {
//         name = n;
//         age = a;
//         grade = g;
//         std::cout << "Parameterized constructor (name, age, and grade) called!" << std::endl;
//     }

//     // Display student details
//     void display() {
//         std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
//     }
// };

// int main() {
//     // Creating objects using different constructors
//     Student s1; // Default constructor
//     s1.display();

//     Student s2("Alice"); // Constructor with name only
//     s2.display();

//     Student s3("Bob", 20); // Constructor with name and age
//     s3.display();

//     Student s4("Charlie", 22, 95.5); // Constructor with name, age, and grade
//     s4.display();

//     return 0;
// }