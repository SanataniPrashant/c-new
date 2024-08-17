// w.a.p to print cheen tapak dam dam till the time  the user not entering 10 th even no.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int user_input = 0;
//     int count = 0;
//     while (count <=10)
//     {
//         cin >> user_input ;

//         if(user_input % 2 == 0 )
//         {
//             count ++;
//         }
//         cout << "try again:";
//     }
    
// }
// digit extraction
// 123
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num = 1234;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         num =  num / 10;
//         cout << digit << endl;

//     }
// }

// w.a.p to check weather the given no. is palindrom or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number = 0;
//     cout << "Enter the no." << "\n";
//     cin >> number;
//     int temp = number;
//     int new_number = 0;
//     while (number != 0){
//         int digit = number % 10;
//         number = number / 10;
//         new_number = new_number * 10 + digit;
//     }
//     if(temp == new_number){
//         cout << "palindrom" << "\n";
//     }
//     else{
//         cout << "not palindrom" << "\n";
//     }
//     return 0;
// }
    