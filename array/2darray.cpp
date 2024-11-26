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

// 1. transpose matrix (rows and coulumns interchanged)- only applied on square matrix 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[2][3];
//     cout << "Enter the 6 values" << '\n';
//     for(int r=0; r<2; r++){
//         for(int c=0; c<3; c++){
//             cin>>a[r][c];
//         }
//     }
//     cout << "The matrix is= "<< "\n";
//     for(int r=0; r<2; r++){
//         for(int c=0; c<3; c++){
//            cout << a[r][c];
//         }
//         cout << "\n";
//     }
//     cout << "The transpose of the matrix is= "<< "\n";
//     for(int c=0; c<3; c++){
//         for(int r=0; r<2; r++){
//             cout << a[r][c]<<"\t";
//         }
//         cout << "\n";
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r = 0, c = 0;
//     cout << "Enter the no. of row" << "\n";
//     cin >> r;
//     cout << "Enter the no. of column" << "\n";
//     cin >> c;
//     if(r==c){
//         int arr[r][c];
//         cout << "Enter the " <<r*c<< " values" << '\n';
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 cin>>arr[i][j];
//             }
//         }
//         cout<<"Matrix ="<<"\n";
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 cout<< arr[i][j] << "\t";
//             }
//             cout << "\n";
//         }
//         cout << "The transpose of the matrix is= "<< "\n";
//          for(int i=0; i<r; i++){
//             for(int j=i+1; j<c; j++){
//                 int temp =arr[i][j];
//                 arr[i][j]=arr[j][i];
//                 arr[j][i]=temp;
//             }
//         }
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 cout<< arr[i][j] << "\t";
//             }
//             cout << "\n";
//         }
//     }
//     else{
//         cout << "not allowed";
//     }
// }

// 2. matrix multiplication

// #include<iostream>
// using namespace std;
// int main(){
//     int r = 0, c = 0, i=0, j=0;
//     cout << "Enter the no. of row of first matrix" << "\n";
//     cin >> r;
//     cout << "Enter the no. of column of first matrix" << "\n";
//     cin >> c;
//     cout << "Enter the no. of row of second matrix" << "\n";
//     cin >> i;
//     cout << "Enter the no. of column of second matrix" << "\n";
//     cin >> j;
//     if(c==i){
//         int a1[r][c];
//         int a2[i][j];
//         int ans[r][j];
//         int sum = 0;
//         cout << "Enter the " <<r*c<< " values of first matrix" << '\n';
//         for(int a=0; a<r; a++){
//             for(int b=0; b<c; b++){
//                 cin>>a1[a][b];
//             }
//         }
//         cout << "Enter the " <<i*j<< " values of second matrix" << '\n';
//         for(int a=0; a<i; a++){
//             for(int b=0; b<j; b++){
//                 cin>>a2[a][b];
//             }
//         }

//         cout << "the first matrix is :" << "\n";
//         for(int a=0; a<r; a++){
//             for(int b=0; b<c; b++){
//                 cout<< a1[a][b] << "\t";
//             }
//             cout << "\n";
//         }
//         cout << "the second matrix is: " << '\n';
//         for(int a=0; a<i; a++){
//             for(int b=0; b<j; b++){
//                 cout<<a2[a][b]<<"\t";
//             }
//             cout << "\n";
//         }
//         cout<<"Multiplication of two matrix is:"<<"\n";
//         for(int a=0; a<r; a++){
//             for(int b=0; b<j; b++){
//                 sum=0;
//                 for(int k=0; k<c; k++){
//                     sum = sum + a1[a][k]*a2[k][b];
//                     ans[a][b]=sum;
//                 }
//             }
//         }
//         for(int a=0; a<r; a++){
//             for(int b=0; b<j; b++){
//                 cout<<ans[a][b]<<"\t";
//             }
//             cout << "\n";
//         }
//     }
//     else{
//         cout << "invalid choice for doing matrix multiplication"<< "\n";
//     }
// }

// 3D- ARRAY :
// multi-linked-list
#include<iostream>
using namespace std;
int main()
{
    int a[2][3][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    // table row column
    for(int t = 0; t<2; t++){
        for(int r = 0; r<3; r++){
            for(int c = 0; c<2; c++){
                cout<<a[t][r][c]<<"\t";
            }
            cout<< "\n";
        }
        cout<<"\n";
    }
}
