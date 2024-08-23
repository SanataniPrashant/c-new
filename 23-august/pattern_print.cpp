// *            *       
// * *        * *
// *   *    *   *
// *     *      *
// *   *    *   *
// * *        * *
// *            *

# include<iostream>
using namespace std;
int main()
{
    int n = 7;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == 1 || j == n || j == i || i + j == n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";//2ws
            }
        }
        cout << "\n";
    }
    return 0;
}

