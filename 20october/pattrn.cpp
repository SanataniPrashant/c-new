// *
// * *
// * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<"*"<<"\t";
//         }
//         cout<<"\n";
//     }
// }

// 1
// 2 2
// 3 3 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i<<"\t";
//         }
//         cout<<"\n";
//     }
// }

// 1
// 2 3
// 4 5 6 (floyd triangle or consecutive series)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int p = 1;
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<p<<"\t"; 
//             p++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// 1
// 4   9
// 16  25  36

// #include<iostream>
// using namespace std;
// int main()
// {
//     int p = 1;
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout << p*p<< "\t";
//             p++;
//         }
//         cout<<"\n";
//     }
// }

// 1
// 1 2
// 1 2 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<j<<"\t";
//         }
//         cout<<"\n";
//     }
// }

// 1
// 1 4
// 1 4 9

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<j*j<<"\t";
//         }
//         cout<<"\n";
//     }
// }

// 1
// 2 
// 3 4 5 
// 6 7 8 9

//  Example to understand exit single loop by using break statement 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int p = 1;
//     for(int i=1; i<=4; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<p<<"\t"; 
//             p++;
//             if(p==3){
//                 break;
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// Example to understand exit multiple loop by using goto statement 

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=4; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i+j<<"\t";
//             if(i+j==6){
//                 goto radhe;
//             }
//         }
//         cout<<"\n";
//     }
//     radhe:
//     cout << "good boy";
//     return 0;
// }


// A
// A B
// A B C

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<char(j+64)<<"\t";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//or

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=65; i<=67; i++)
//     {
//         for(int j=65; j<=i; j++)
//         {
//             cout<<char(j)<<"\t";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//or 

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(char i='A'; i<='C'; i++)
//     {
//         for(char j='A'; j<=i; j++)
//         {
//             cout<<j<<"\t";
//         }
//         cout<<"\n";
//     }
// }



// A
// B B
// C C C

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<char(i+64)<<"\t";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//or  
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=65; i<=67; i++)
//     {
//         for(int j=65; j<=i; j++)
//         {
//             cout<<char(i)<<"\t";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// A
// B C
// D E F

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r = 1;
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<char(r+64)<<"\t";
//             r++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// a
// b c
// d e f

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r = 1;
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<char(r+96)<<"\t";
//             r++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//  *
// **
//***

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             cout << "*";
//         }
//         cout<<"\n";
//     }
// }

//  1
// 23
//456

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=1;
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             cout << n;
//             n++;
//         }
//         cout<<"\n";
//     }
// }

//  1
// 22
//333

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             cout <<i;
//         }
//         cout<<"\n";
//     }
// }

//  A
// BB
//CCC

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             cout <<char(i+64);
//         }
//         cout<<"\n";
//     }
// }

//  A
// BC
//DEF

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r=1;
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             cout << char(r+64);
//             r++;
//         }
//         cout<<"\n";
//     }
// }


//  1
// 21
//321

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     { 
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=i;k>0; k--)
//         {
//             cout <<k;
//         }
//         cout<<"\n";
//     }
// }

//  A
// BA
//CBA

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=3; i++)
//     { 
//         for(int j=3; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=i;k>0; k--)
//         {
//             cout <<char(k+64);
//         }
//         cout<<"\n";
//     }
// }

//full pyramid

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=5; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             cout << "* ";
//         }
//         cout<<"\n";
//     }
// }

//     1 
//    0 1 
//   1 0 1 
//  0 1 0 1
// 1 0 1 0 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=5; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             if((i+k)%2 == 0){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }
//         }
//         cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=5; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++)
//         {
//             if(k%2 == 0)
//             {
//                 cout<<"0 ";
//             }
//             else
//             {
//                 cout<<"1 ";
//             }
//         }
//         cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int d=1;
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=5; j>i; j--)
//         {
//             cout << " ";
//         }
//         for(int k=1;k<=i; k++){
//             if(d == 1){
//                 cout<<"1 ";
//                 d--;
//             }
//             else{
//                 cout<<"0 ";
//                 d++;
//             }
//         }
//         cout<<"\n";
//     }
// }

// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=5; j>i; j--)
//         {
//             cout << "* ";
//         }
//         cout<<"\n";
//     }
// }

// ***
//  **
//   *

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout <<" ";
//         }
//         for(int k=5;k>=i; k--){
//             cout<< "*";
//         }
//         cout<<"\n";
//     }
// }

// *****
// *   *
// *   *
// *   *
// *   *
// *****

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=5; j++)
//         {
//             if((i==1|| j==1)||(i==5 ||j==5)) {
//                 cout<< "*";
//             }
//             else{
//                 cout<<" ";
//             }
//         } 
//         cout<<"\n";
//     }
// }

// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=5;j++){
//             if(i == 1 || j==1 || i==5 || j==5 || i==j || (i+j) == 6)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout <<"  ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter the value of n" << "\n";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int k=n; k>i; k--){
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2==0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}
