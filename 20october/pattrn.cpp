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

