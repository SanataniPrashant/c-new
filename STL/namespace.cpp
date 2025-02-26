// Namespace : It is a space or context in which identifiers are defined. (std library file)
// bydefault data-members public hote hain in namespace.

// Class : It is a blueprint or template that defines the properties and behavior of an object. (  
// Function : It is a block of code that performs a specific task. (std library function)
// Variable : It is a value that can be changed. (std library variable)
// Constant : It is a value that cannot be changed. (std library constant)
// Enum : It is a set of named values. (std library enum)
// Operator : It is a symbol that is used to perform an operation. (std library operator)
// Type : It is a category of data. (std library type)
// Template : It is a blueprint or template that defines the properties and behavior of a class or function
// Macro : It is a preprocessor instruction that is used to perform a specific task. (std
// library macro)
// Exception : It is an event that occurs when an error or unexpected condition occurs. (std library
// exception)
// Comment : It is a note or explanation that is added to the code to make it easier to
// understand. (std library comment)


 #include<iostream>
 using namespace std;
 namespace cybrom
 {
    int a = 10;
    int b = 20;
    void show()
    {
        cout << "result =" << a+b << '\n';
    }

    class bhopal
    {
        public:int sqr(int a)
        {
            return a*a;
        }
    };
    class iostreamx
    {
        public: void fun()
        {
            cout << "fun" <<"\n";
        }
    }coutx;
 }

 using namespace cybrom ;

 int main()
 {
    // cout<<cybrom:: a << '\n';
    // cout<<cybrom:: b << '\n';
    // cybrom::show();
    // cout<<cybrom::bhopal().sqr(5)<<'\n';
    // cybrom :: coutx.fun();

    cout << a << "\n";
    cout << b << "\n";
    show();
    // bhopal obj;
    // cout << obj.sqr(5) << "\n";
    cout << bhopal().sqr(5) << "\n";
    coutx.fun();

 }