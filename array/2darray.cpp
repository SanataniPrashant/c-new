// 2-D array: 

// #include<iostream>
// using namespace std;
// int main()
// {
//     // int a[3][3] = {{1, 2, 3}, {4,5,6},{7,8,9}};
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             cout<<a[r][c]<<"\t";
//         }
//     cout<<"\n";
//     }
// }

// 1. w.a.p to display even value in 2 d array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3];
//     cout << "Enter the 9 values" << '\n';
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             cin>>a[r][c];
//         }
//     }
//     cout << "The even numbers are: \n";
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             if(a[r][c]%2==0){
//                 cout<<a[r][c]<<"\t";
//             }
//         }
//     }

// }

// 2.W.a.p to display sum of all the values of 2 d array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3];
//     int sum = 0;
//     cout << "Enter the 9 values" << '\n';
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             cin>>a[r][c];
//         }
//     }
//     cout << "The sum = ";
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             sum = sum + a[r][c];
//         }
//     }
//     cout << sum << "\n";
// return 0;
// }

//3.Find the minimum value in 2 d array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3];
//     int min = a[0][0];
//     cout << "Enter the 9 values" << '\n';
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             cin>>a[r][c];
//         }
//     }
//     cout << "The minium value = ";
//     for(int r=0; r<3; r++){
//         for(int c=0; c<3; c++){
//             if(a[r][c]<min){
//             min=a[r][c];
//         }
//         }
//     }
//     cout << min << "\n";
// return 0;
// }