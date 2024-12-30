// Recursion : 
// Recursion is a programming technique where a function calls itself in order to solve a problem. It is often used to break down complex problems into simpler sub-problems.


// 1. Base case :
// The part of the function where the function calls itself with modified arguments.
// This is where the problem is broken down into smaller instances.The base case is the smallest instance of the problem that can be solved directly.


// 2. Recursive case :
// The part of the function where the function calls itself with modified arguments.


// 3. Return value :
//The value that is returned from the recursive function.
// It is often the result of combining the results of the recursive calls.
// The value that is returned from the recursive function.


// 4. Call the function again with the new value :
//The function is invoked again with a new value that brings it closer to the base case.


// 5. Repeat the process until the base case is met.

// The function continues to call itself until it reaches the base case, at which point it starts returning values back up the call stack.
// The final result is the value returned from the base case.


// Time complexity : O(n) where n is the number of elements in the array.
// Space complexity : O(n) due to the recursive call stack.


//Q.1 W.A.P to  print number by using recursion .

// #include<iostream>
// using namespace std;
// void printNumber(int n){
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     printNumber(n-1);
     
// }
// int main(){
//     printNumber(5);
//     return 0;
// }

//Q.2 W.A.P to find the Factorial by using recursion.
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//     cout<<factorial(5)<<endl;
//     return 0;
// }

// Q.3 W.A.P to sum of n numbers by using recursion.
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n + sum(n-1);
// }
// int main(){
//     cout<<sum(5)<<endl;
//     return 0;
// }