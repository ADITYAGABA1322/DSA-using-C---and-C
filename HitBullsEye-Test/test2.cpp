// 1.) UNIQUE_PATHS

// Problem Statement:
// Given a M X N matrix with your initial position at top-left cell, find the number of possible unique paths to reach the bottom right cell of the matrix from the initial position.

// Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].

// Input:
// The first line contains an integer T, depicting total number of test cases.
// Then following T lines contains an two integers A and B depicting the size of the grid.

// Output:
// Print the number of unique paths to reach bottom-right cell from the top-left cell.

// Constraints:
// 1 ≤ T ≤ 30
// 1 ≤ M ≤ 15
// 1 ≤ N ≤ 15


// Time Limit:
// 1 sec

// Example 1:
// Input
// 2
// 2 2
// 3 4

// Output 
// 2
// 10

// Sample I/O Explanation:
// Number of possible paths are 2 in a 2*2 matrix In a 3*4 matrix number of possible paths are 10


// Solution:

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int m,n;
//         cin>>m>>n;
//         int dp[m][n];
//         for(int i=0; i<m; i++){
//             dp[i][0] = 1;
//         }
//         for(int j=0; j<n; j++){
//             dp[0][j] = 1;
//         }
//         for(int i=1; i<m; i++){
//             for(int j=1; j<n; j++){
//                 dp[i][j] = dp[i-1][j] + dp[i][j-1];
//             }
//         }
//         cout<<dp[m-1][n-1]<<endl;
//     }
    
//     return 0;
// }


// 2.)  Re-arranging the Array

// Problem Statement:
// Given an array arr[] with n natural numbers. The task is to rearrange the array by putting all multiples of 10 at the end of the given array.

// Note that the order of the numbers which are not multiples of 10 should remain unaltered, and similarly, the order of all multiples of 10 should be unaltered.

// Example,

// Suppose n = 9 and arr[] = { 10 12 5 40 30 7 50 9 10}

// The output should be { 12 5 7 9 10 40 30 50 10 }

// Input Format

// The first line contains single natural numbers denoting the size of the array
// The second line contains space-separated list of integers denoting the elements of the array.

// Write a program, in a language of your choice, to accomplish the said task.

// Input:
// 9
// 10 12 5 40 30 7 50 9 10

// Output:
// 12 5 7 9 10 40 30 50 10

// Constraints:
// 1

// Time Limit:
// 2 sec

// Example 1:
// Input
// 9
// 10 12 5 40 30 7 50 9 10

// Output
// 12 5 7 9 10 40 30 50 10

// Example 2:
// Input
// 6
// 10 20 30 40 50 60

// Output
// 20 30 40 50 60 10

// Example 3:
// Input
// 8
// 15 12 8 10 25 30 35 40

// Output
// 15 12 8 25 35 10 30 40

// Example 4:
// Input
// 7
// 17 13 9 21 25 14 10

// Output
// 17 13 9 21 25 14 10

// Sample I/O Explanation:
// Suppose n = 9 and arr[] = { 10 12 5 40 30 7 50 9 10} The output should be { 12 5 7 9 10 40 30 50 10 }

// Solution:

// not correct

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n; // Size of the array
//     cin >> n;

//     vector<int> arr(n);
//     vector<int> multiplesOf10; // Store multiples of 10

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] % 10 == 0)
//         {
//             multiplesOf10.push_back(arr[i]);
//         }
//     }

//     // Rearrange the array by removing multiples of 10
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 10 != 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     // Print the multiples of 10 at the end
    // for (int i = 0; i < multiplesOf10.size(); i++)
    // {
    //     cout << multiplesOf10[i] << " ";
    // }

//     return 0;
// }


// 3.) STRONG_OR_NOT_STRONG

// Problem Statement:
// Write a program to check whether a number is strong or not. A number is called strong number if sum of the factorial of its digit is equal to number itself. For example: 145 as 1! + 4! + 5! = 1 + 24 + 120 = 145

// Input:
// First line contains number of test cases T. Then following T lines contains an integer N.

// Output:
// Output "Strong" if given number is strong else "Not Strong" .

// Constraints:
// 1 <= T <= 50
// 0 <= N <= 1000

// Time Limit:
// 1 sec

// Example 1:
// Input
// 2
// 145
// 10

// Output
// Strong
// Not Strong

// Sample I/O Explanation:
// 145 is strong as 1! + 4! + 5! = 1 + 24 + 120 = 145 10 is not a strong number

// Solution:

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;

//         int fact = 1;
//         int sum = 0;
//         int temp = n;
//         while(temp){
//             int rem = temp%10;
//             for(int i=1; i<=rem; i++){
//                 fact = fact*i;
//             }
//             sum += fact;
//             fact = 1;
//             temp = temp/10;
//         }
//         if(sum == n){
//             cout<<"Strong"<<endl;
//         }
//         else{
//             cout<<"Not Strong"<<endl;
//         }
//     }
//     return 0;
// }
