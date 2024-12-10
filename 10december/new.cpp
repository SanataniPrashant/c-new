// W.A.P to find the factorial of a no.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,fact=1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=n;i>0;i--)
//     {
//         fact=fact*i;
//     }
//     cout<<"Factorial of "<<n<<" is "<<fact;
//     return 0;
// }

// matrix- multiplication

#include<iostream>
using namespace std;
int main(){
    int r = 0, c = 0, i=0, j=0;
    cout << "Enter the no. of row of first matrix" << "\n";
    cin >> r;
    cout << "Enter the no. of column of first matrix" << "\n";
    cin >> c;
    cout << "Enter the no. of row of second matrix" << "\n";
    cin >> i;
    cout << "Enter the no. of column of second matrix" << "\n";
    cin >> j;
    if(c==i){
        int a1[r][c];
        int a2[i][j];
        int ans[r][j];
        int sum = 0;
        cout << "Enter the " <<r*c<< " values of first matrix" << '\n';
        for(int a=0; a<r; a++){
            for(int b=0; b<c; b++){
                cin>>a1[a][b];
            }
        }
        cout << "Enter the " <<i*j<< " values of second matrix" << '\n';
        for(int a=0; a<i; a++){
            for(int b=0; b<j; b++){
                cin>>a2[a][b];
            }
        }

        cout << "the first matrix is :" << "\n";
        for(int a=0; a<r; a++){
            for(int b=0; b<c; b++){
                cout<< a1[a][b] << "\t";
            }
            cout << "\n";
        }
        cout << "the second matrix is: " << '\n';
        for(int a=0; a<i; a++){
            for(int b=0; b<j; b++){
                cout<<a2[a][b]<<"\t";
            }
            cout << "\n";
        }
        cout<<"Multiplication of two matrix is:"<<"\n";
        for(int a=0; a<r; a++){
            for(int b=0; b<j; b++){
                sum=0;
                for(int k=0; k<c; k++){
                    sum = sum + a1[a][k]*a2[k][b];
                    ans[a][b]=sum;
                }
            }
        }
        for(int a=0; a<r; a++){
            for(int b=0; b<j; b++){
                cout<<ans[a][b]<<"\t";
            }
            cout << "\n";
        }
    }
    else{
        cout << "invalid choice for doing matrix multiplication"<< "\n";
    }
}