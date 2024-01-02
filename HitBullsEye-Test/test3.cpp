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

// 2.) Processing a string

// Problem Statement:
// Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.

// Input:
// The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow.
// Each test case is described with a single line containing a string S, the alphanumeric string.

// Output:
// For each test case, output a single line containing the sum of all the digit characters in that string.

// Constraints:
// 1 ≤ T ≤ 1000
// 1 ≤ |S| ≤ 1000, where |S| is the length of the string S.

// Time Limit:
// 1 sec

// Example 1:
// Input
// 1
// ab1231da

// Output
// 7

// Sample I/O Explanation:
// The digits in this string are 1, 2, 3 and 1. Hence, the sum of all of them is 7.

// Solution:

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int sum = 0;
//         for(int i=0; i<s.length(); i++){
//             if(s[i] >= '0' && s[i] <= '9'){
//                 sum += s[i] - '0';
//             }
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }


// 3.) Char Sum

// Problem Statement:
// Consider All lowercase Alphabets of the English language. Here we consider each alphabet from a to z to have a certain weight. The weight of the alphabet a is considered to be 1, b to be 2, c to be 3 and so on until z has a weight of 26. In short, the weight of the alphabet a is 1, and the weight of all other alphabets is the weight of its previous alphabet + 1.

// Now, you have been given a String S consisting of lowercase English characters. You need to find the summation of weight of each character in this String.

// For example, Consider the String aba

// Here, the first character a has a weight of 1, the second character b has 2 and the third character a again has a weight of 1. So the summation here is equal to : 1+2+1=4

// Input:
// The first and only line of input contains the String S.

// Output:
// Print the required answer on a single line

// Constraints:
// 1≤|S|≤100

// Time Limit:
// 1 sec

// Example 1:
// Input
// aba

// Output
// 4

// Sample I/O Explanation:

//Solution:

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0; i<s.length(); i++){
        sum += s[i] - 'a' + 1;
    }
    cout<<sum<<endl;
    return 0;
}