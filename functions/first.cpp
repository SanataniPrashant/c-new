// Functions: It is used to perform any task. It is a collection of data member (int a, b, c) and statments(cout or cin) / code(formula). 

// Advantages: 1. reusable 2. memory efficient 3. time efficient 

// Types of function :

// 1. predefined - 
//1.maths , 2.string, 3.time
// 2. userdefined - 
//1. returntype function- with parameters , without parameters
// 2. Non-return-type function - with parameters , without parameters

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // char is a constant
    // char c[5]; // 1byte for null value
    // c="amit"; // error because we cannot reinitialise char 
    // cout<< c;

    // in runtime we can give value more than its size because it will automatically build memory.

    // char name[20];
    // char srname[20];
    // cout<<strlen(name)<<"\n";
    // cout<<"Enter your name" << "\n";
    // cin>> name;
    //  cout<<"Enter your srname" << "\n";
    // cin>> srname;
    // cout<<strlen(name);
    // cout<< "uppercase = " << strupr(name)<<"\n";
    // cout<< "lowercase = " << strlwr(name)<<"\n";
    // cout << strcat(name,srname)<<'\n'; //string concatenation
    // cout<<"name = "<<name <<"srname = "<<srname << "\n";

    // cout << strcpy(name,srname)<<'\n'; //it will override name with surname
    // cout<<"name = "<<name <<"srname = "<<srname << "\n";

    // char pwd[20];
    // char repwd[20];
    // cout<<"Enter your pwd" << "\n";
    // cin>> pwd;
    // cout<<"Enter your repwd" << "\n";
    // cin>> repwd;
    // if(stricmp(pwd,repwd)==0)
    // {
    //     cout << "correct" <<"\n";
    // }
    // else{
    //     cout<< "incorrect"<<"\n";
    // }
    // cout << strrev(pwd);
    // if(strcmp(pwd,repwd)==0)
    // {
    //     cout << "correct" <<"\n";
    // }
    // else{
    //     cout<< "incorrect"<<"\n";
    // }

    char ram[20];
    char temp[20];
    cout <<"enter the value" <<'\n';
    cin >>ram;
    strcpy(temp,ram);
    cout<< strrev(ram)<<"\n";
    // if(strcmp(strrev(ram),temp)==0) or
    if(strcmp(temp,ram)==0){ 
        cout <<"pallendrom" <<"\n";
    }
    else{
        cout << "not a pallendrom" <<'\n';
    }


}
// w.a.p to check the given string is pallendrom or not 