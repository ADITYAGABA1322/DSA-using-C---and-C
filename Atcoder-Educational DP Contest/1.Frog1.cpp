// Problem Statement
// There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is hi.
// There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:
// If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of ∣hi−h.j∣is incurred, where j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone N.

// Constraints
// All values in input are integers.
// 2≤N≤10^5
// 1≤hi≤10^4
 

// Sample Input 1

// 4
// 10 30 40 20

// Sample Output 1

// 30

// Explanation

// Here, we can jump from Stone 1 to Stone 2, then to Stone 4, to achieve the minimum total cost of |10−30|+|30−20|=30.

// Sample Input 2

// 2

// 10 10

// Sample Output 2

// 0

// Explanation

// Here, we can jump from Stone 1 to Stone 2, to achieve the minimum total cost of |10−10|=0.


// Sample Input 3

// 6

// 30 10 60 10 60 50

// Sample Output 3

// 40

// Explanation

// Here, we can jump from Stone 1 to Stone 2, then to Stone 4, then to Stone 6, to achieve the minimum total cost of |30−10|+|10−10|+|10−50|=40.

// Note: |x| denotes the absolute value of x.

// Solution

// 1.) Brute Force Approach:

// In this approach, we consider all possible ways to reach the nth stone and calculate the cost for each. Then, we choose the minimum cost among these options.

// #include <iostream>

// using namespace std;

// int arr[100000];  // array to store heights of stones

// // Helper function to calculate the minimum cost to reach the nth stone

// int minCost(int n)
// {
//     if (n == 0)  // if there is only one stone, then the minimum cost to reach it is 0
//         return 0;
//     if (n == 1)  // if there are two stones, then the minimum cost to reach the second stone is the absolute difference between the heights of the first and second stone
//         return abs(arr[1] - arr[0]);

//     // if there are more than two stones, then the minimum cost to reach the nth stone is the minimum of the cost to reach (n - 1)th stone and (n - 2)th stone

//     return min(minCost(n - 1) + abs(arr[n] - arr[n - 1]), minCost(n - 2) + abs(arr[n] - arr[n - 2]));
// }

// int main()
// {
//     int n;  // number of stones
//     cin >> n;  // input number of stones
//     for (int i = 0; i < n; i++)  // input heights of stones
//         cin >> arr[i];

//     cout << minCost(n - 1) << endl;  // print minimum cost to reach nth stone
//     return 0;
// }


// Time Complexity: The time complexity of this brute force approach is exponential, O(2^n), because we explore all possible paths to reach the nth stone.

// Space Complexity: The space complexity is O(n) due to the recursive function call stack.

// 2.) Recursive Solution:

// The code provided above contains the recursive solution. It defines a helper function minCost that recursively calculates the minimum cost to reach the nth stone. It considers two options at each step: either jumping from (i-1)th stone or (i-2)th stone, and it returns the minimum of these two options.

// #include <iostream>

// using namespace std;

// int arr[100000];  // array to store heights of stones

// // Helper function to calculate the minimum cost to reach the nth stone

// int minCost(int n)
// {
//     if (n == 0)  // if there is only one stone, then the minimum cost to reach it is 0
//         return 0;
//     if (n == 1)  // if there are two stones, then the minimum cost to reach the second stone is the absolute difference between the heights of the first and second stone
//         return abs(arr[1] - arr[0]);

//     // if there are more than two stones, then the minimum cost to reach the nth stone is the minimum of the cost to reach (n - 1)th stone and (n - 2)th stone

//     return min(minCost(n - 1) + abs(arr[n] - arr[n - 1]), minCost(n - 2) + abs(arr[n] - arr[n - 2]));
// }

// int main()
// {
//     int n;  // number of stones
//     cin >> n;  // input number of stones
//     for (int i = 0; i < n; i++)  // input heights of stones
//         cin >> arr[i];

//     cout << minCost(n - 1) << endl;  // print minimum cost to reach nth stone
//     return 0;
    
// }

// Time Complexity: The time complexity of this recursive solution is exponential, O(2^n), because we explore all possible paths to reach the nth stone.

// Space Complexity: The space complexity is O(n) due to the recursive function call stack.


// 3.) Memoization (Top-Down) Approach:

// To optimize the recursive solution, we can use memoization to avoid redundant calculations. We store the intermediate results in an array to eliminate duplicate work.

// #include <iostream>
// #include <vector>

// using namespace std;

// int arr[100000];  // array to store heights of stones

// vector<int> dp(100000, -1);  // Initialize a memoization table with -1

// // Helper function to calculate the minimum cost to reach the nth stone

// int minCost(int n)
// {
//     if (dp[n] != -1)  // if the result is already present in the memoization table, then return it
//         return dp[n];
//     if (n == 0)  // if there is only one stone, then the minimum cost to reach it is 0
//         return 0;
//     if (n == 1)  // if there are two stones, then the minimum cost to reach the second stone is the absolute difference between the heights of the first and second stone
//         return abs(arr[1] - arr[0]);

//     // if there are more than two stones, then the minimum cost to reach the nth stone is the minimum of the cost to reach (n - 1)th stone and (n - 2)th stone

//     dp[n] = min(minCost(n - 1) + abs(arr[n] - arr[n - 1]), minCost(n - 2) + abs(arr[n] - arr[n - 2]));
//     return dp[n];
// }

// int main()
// {
//     int n;  // number of stones
//     cin >> n;  // input number of stones
//     for (int i = 0; i < n; i++)  // input heights of stones
//         cin >> arr[i];

//     cout << minCost(n - 1) << endl;  // print minimum cost to reach nth stone
//     return 0;
// }

// Time Complexity: The time complexity of this memoization approach is O(n) since we calculate the minimum cost for each stone only once.

// Space Complexity: The space complexity is O(n) due to the memoization table.



// 4.) Iterative Dynamic Programming (Tabulation) Approach:
// The code you provided initially is an iterative dynamic programming (DP) approach, which is efficient and avoids the overhead of recursive function calls and memoization. It uses a bottom-up approach to compute the minimum cost iteratively.



// Time Complexity: O(n) 
// Space Complexity: O(n) // can be reduced to O(1) by using 3 variables instead of an array

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;  // number of stones
//     cin >> n;  // input number of stones
//     int arr[n], dp[n];  // array to store heights of stones and dp array to store minimum cost to reach ith stone
//     for (int i = 0; i < n; i++)  // input heights of stones 
//         cin >> arr[i];

//     dp[0] = 0;  // minimum cost to reach 1st stone is 0
//     dp[1] = abs(arr[1] - arr[0]);  // minimum cost to reach 2nd stone is the absolute difference between heights of 1st and 2nd stone

//     for (int i = 2; i < n; i++)
//     {
//         dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));  // minimum cost to reach ith stone is the minimum of the cost to reach (i - 1)th stone and (i - 2)th stone
//     }

//     cout << dp[n - 1] << endl;  // print minimum cost to reach nth stone
//     return 0;
// }

// 5.) Iterative Dynamic Programming (Tabulation) Approach: (Space Optimized)

// Time Complexity: The time complexity of this iterative DP approach is O(n) since we iterate through the array of stones once.

// Space Complexity: The space complexity is O(1) because we only use a constant amount of extra space to store the dp array of size 3.

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;  // number of stones
//     cin >> n;  // input number of stones
//     int arr[n], dp[3];  // array to store heights of stones and dp array to store minimum cost to reach ith stone
//     for (int i = 0; i < n; i++)  // input heights of stones
//         cin >> arr[i];

//     dp[0] = 0;  // minimum cost to reach 1st stone is 0
//     dp[1] = abs(arr[1] - arr[0]);  // minimum cost to reach 2nd stone is the absolute difference between heights of 1st and 2nd stone

//     for (int i = 2; i < n; i++)
//     {
//         dp[2] = min(dp[1] + abs(arr[i] - arr[i - 1]), dp[0] + abs(arr[i] - arr[i - 2]));  // minimum cost to reach ith stone is the minimum of the cost to reach (i - 1)th stone and (i - 2)th stone
//         dp[0] = dp[1];
//         dp[1] = dp[2];
//     }

//     cout << dp[2] << endl;  // print minimum cost to reach nth stone
//     return 0;
// }


