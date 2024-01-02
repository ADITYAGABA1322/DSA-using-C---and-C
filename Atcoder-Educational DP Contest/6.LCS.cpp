// Problem Statement
// You are given strings s and t.Find one longest string that is a subsequence of both s and t.

// Notes
// A subsequence of a string x is the string obtained by removing zero or more characters from x and concatenating the remaining characters without changing the order.

// Constraints
// s and t contain only lowercase English letters.
// 1≤|s|,|t|≤3000


// Input
// Input is given from Standard Input in the following format:
// s
// t
// Output
// Print one longest string that is a subsequence of both s and t. If there are multiple such strings, any of them will be accepted.


// Sample Input 1

// axyb
// abyxb

// Sample Output 1

// axb

// The strings axb and ayb are both subsequences of s and t, but axb is longer than ayb.

// Sample Input 2

// aa
// xayaz

// Sample Output 2

// aa

// The strings aa, aa, and aa are all subsequences of s and t, but aa is longer than the other two.

// Sample Input 3

// a
// z

// Sample Output 3

// THE ANS IS EMPTY
// There is no string that is a subsequence of both s and t.

// Sample Input 4

// abracadabra
// avadakedavra

// Sample Output 4

// aaadara

// Solution

// 1.) Brute Force Approach /  Recursive Approach:

// In this approach, you would consider all possible combinations of subsequences of s and t and check if they are equal. This approach would involve a nested loop and would be highly inefficient for larger inputs.

// Brute Force: Exponential time complexity (O(2^n)) and O(1) space complexity.

// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// string longestCommonSubsequence(string s, string t, int sIndex, int tIndex)
// {
//     if (sIndex == s.length() || tIndex == t.length())
//     {
//         return "";
//     }

//     if (s[sIndex] == t[tIndex])
//     {
//         return s[sIndex] + longestCommonSubsequence(s, t, sIndex + 1, tIndex + 1);
//     }

//     string s1 = longestCommonSubsequence(s, t, sIndex + 1, tIndex);
//     string s2 = longestCommonSubsequence(s, t, sIndex, tIndex + 1);

//     if (s1.length() > s2.length())
//     {
//         return s1;
//     }
//     else
//     {
//         return s2;
//     }
// }

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << longestCommonSubsequence(s, t, 0, 0) << endl;

//     return 0;
// }

#include<iostream>
using namespace std;

string helper(string s , string t , int sIndex , int tIndex ,vector<vector<string> >& memo){
    if(s.length() == sIndex || t.length() == tIndex) return "";
    if(memo[sIndex][tIndex] != "") return memo[sIndex][tIndex];
    if(s[sIndex] == t[tIndex]) return memo[sIndex][tIndex] = s[sIndex] + helper(s , t , sIndex + 1 , tIndex + 1 , memo);   
    string s1 = helper(s , t , sIndex +1  , tIndex  , memo);
    string s2 = helper(s , t ,sIndex , tIndex + 1 , memo);
    if(s1.length() > s2.length()) return s1;
    else return s2;
}

int main(){
    string s , t;
    cin>>s>>t;
    vector<vector<string> > memo(s.length() , vector<string>(t.length() , ""));
    cout<<helper(s , t , 0 , 0 , memo )<<endl;
    return 0;
}
// done with memo now move to bottom up -> 0)

// Time Complexity: The time complexity of this brute force approach is exponential, O(2^n), because we explore all possible subsequences of s and t.

// Space Complexity: The space complexity is O(n) due to the recursive function call stack.

// 2.) Memoization Approach (Top-Down Approach):

// In this approach, you would store the results of the subproblems in a 2D array and use them to calculate the result of the main problem. This approach is also known as the top-down approach because you start solving the problem from the top and move towards the bottom.

// Memoization: O(n^2) time complexity and O(n^2) space complexity.

// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// string longestCommonSubsequence(string s, string t, int sIndex, int tIndex, vector<vector<string>> &memo)
// {
//     if (sIndex == s.length() || tIndex == t.length())
//     {
//         return "";
//     }

//     if (memo[sIndex][tIndex] != "")
//     {
//         return memo[sIndex][tIndex];
//     }

//     if (s[sIndex] == t[tIndex])
//     {
//         memo[sIndex][tIndex] = s[sIndex] + longestCommonSubsequence(s, t, sIndex + 1, tIndex + 1, memo);
//         return memo[sIndex][tIndex];
//     }

//     string s1 = longestCommonSubsequence(s, t, sIndex + 1, tIndex, memo);
//     string s2 = longestCommonSubsequence(s, t, sIndex, tIndex + 1, memo);

//     if (s1.length() > s2.length())
//     {
//         memo[sIndex][tIndex] = s1;
//         return s1;
//     }
//     else
//     {
//         memo[sIndex][tIndex] = s2;
//         return s2;
//     }
// }

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     vector<vector<string>> memo(s.length(), vector<string>(t.length(), ""));

//     cout << longestCommonSubsequence(s, t, 0, 0, memo) << endl;

//     return 0;
// }

// Time Complexity: The time complexity of this memoization approach is O(n^2) since we calculate the result of each subproblem only once.

// Space Complexity: The space complexity is O(n^2) due to the memoization table.

// 3.) Dynamic Programming Approach (Bottom-Up Approach):

// In this approach, you would start solving the problem from the bottom and move towards the top. You would use the results of the subproblems to calculate the result of the main problem. This approach is also known as the bottom-up approach.

// Dynamic Programming: O(n^2) time complexity and O(n^2) space complexity.

// #include <iostream>

// using namespace std;

// string longestCommonSubsequence(string s, string t)
// {
//     int m = s.length();
//     int n = t.length();

//     int dp[m + 1][n + 1];

//     for (int i = 0; i <= m; i++)
//     {
//         dp[i][0] = 0;
//     }

//     for (int j = 0; j <= n; j++)
//     {
//         dp[0][j] = 0;
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {

//             if (s[i - 1] == t[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {

//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     string result = "";

//     int i = m;
//     int j = n;

//     while (i > 0 && j > 0)
//     {
//         if (s[i - 1] == t[j - 1])
//         {
//             result = s[i - 1] + result;
//             i--;
//             j--;
//         }
//         else
//         {
//             if (dp[i - 1][j] > dp[i][j - 1])
//             {
//                 i--;
//             }
//             else
//             {
//                 j--;
//             }
//         }
//     }

//     return result;
// }


// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << longestCommonSubsequence(s, t) << endl;

//     return 0;
// }

// Time Complexity: The time complexity of this dynamic programming approach is O(n^2) since we calculate the result of each subproblem only once.

// Space Complexity: The space complexity is O(n^2) due to the DP table.

// 4.) Iterative Dynamic Programming (Tabulation) Approach:

// The code you provided initially is an iterative dynamic programming (DP) approach, which is efficient and avoids the overhead of recursive function calls and memoization. It uses a bottom-up approach to compute the minimum cost iteratively.

// Time Complexity: O(n)
// Space Complexity: O(n) // can be reduced to O(1) by using 3 variables instead of an array

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n; // number of stones
//     cin >> n; // input number of stones
//     int arr[n], dp[n]; // array to store heights of stones and dp array to store minimum cost to reach ith stone
//     for (int i = 0; i < n; i++) // input heights of stones 
//         cin >> arr[i];

//     dp[0] = 0; // minimum cost to reach 1st stone is 0
//     dp[1] = abs(arr[1] - arr[0]); // minimum cost to reach 2nd stone is the absolute difference between heights of 1st and 2nd stone

//     for (int i = 2; i < n; i++)
//     {
//         dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2])); // minimum cost to reach ith stone is the minimum of the cost to reach (i - 1)th stone and (i - 2)th stone
//     }

//     cout << dp[n - 1] << endl; // print minimum cost to reach nth stone
//     return 0;
// }

// 5.) Iterative Dynamic Programming (Tabulation) Approach: (Space Optimized)

// Time Complexity: The time complexity of this iterative DP approach is O(n) since we iterate through the array of stones once.

// Space Complexity: The space complexity is 0(1) since we only use 3 variables.

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n; // number of stones
//     cin >> n; // input number of stones
//     int arr[n], dp[2]; // array to store heights of stones and dp array to store minimum cost to reach ith stone
//     for (int i = 0; i < n; i++) // input heights of stones 
//         cin >> arr[i];

//     dp[0] = 0; // minimum cost to reach 1st stone is 0
//     dp[1] = abs(arr[1] - arr[0]); // minimum cost to reach 2nd stone is the absolute difference between heights of 1st and 2nd stone

//     for (int i = 2; i < n; i++)
//     {
//         int current = min(dp[0] + abs(arr[i] - arr[i - 1]), dp[1] + abs(arr[i] - arr[i - 2])); // minimum cost to reach ith stone is the minimum of the cost to reach (i - 1)th stone and (i - 2)th stone
//         dp[0] = dp[1];
//         dp[1] = current;
//     }

//     cout << dp[1] << endl; // print minimum cost to reach nth stone
//     return 0;
// }
