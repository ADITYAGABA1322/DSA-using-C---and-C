// Problem Statement
// There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is hi.
// There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:
// If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of ∣hi−h.j∣is incurred, where j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone N.

// Constraints

// All values in input are integers.

// 2≤N≤10^5
// 1≤k≤100
// 1≤hi≤10^4

// Sample Input 1

// 5 3
// 10 30 40 50 20

// Sample Output 1

// 30

// Explanation

// Here, we can jump from Stone 1 to Stone 2, then to Stone 4, to achieve the minimum total cost of |10−30|+|30−50|=30.

// Sample Input 2

// 3 1
// 10 20 10

// Sample Output 2

// 20

// Explanation

// Here, we can jump from Stone 1 to Stone 3, to achieve the minimum total cost of |10−10|+|10−20|=20.

// Solution


// 1.) Brute Force Approach:

// In this approach, you would consider all possible combinations of jumps from 1 to 'k' at each position in the array and calculate the cost for each combination. This approach would involve a nested loop and would be highly inefficient for larger inputs.

// Brute Force: Exponential time complexity (O(k^n)) and O(1) space complexity.

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>
// using namespace std;

// int minCostBruteForce(vector<int> &arr, int n, int k, int currentIndex)
// {
//     if (currentIndex == n - 1)
//     {
//         return 0; // Reached the last element, no additional cost.
//     }

//     int minCostSoFar = INT_MAX;

//     // Try all possible jumps from 1 to k.
//     for (int j = 1; j <= k; j++)
//     {
//         if (currentIndex + j < n)
//         {
//             int currentCost = abs(arr[currentIndex] - arr[currentIndex + j]) + minCostBruteForce(arr, n, k, currentIndex + j);
//             minCostSoFar = min(minCostSoFar, currentCost);
//         }
//     }

//     return minCostSoFar;
// }

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int result = minCostBruteForce(arr, n, k, 0);
//     cout << result << endl;
//     return 0;
// }


// 2.) Recursive Approach:

// A recursive solution would involve defining a recursive function to calculate the minimum cost to reach a particular position 'i' based on the minimum cost of reaching previous positions. It would recursively explore all possible jumps. However, it can result in a high number of redundant computations and may not be efficient for large inputs.

// Recursive: Exponential time complexity (O(k^n)) and O(n) space complexity due to the function call stack.

// #include<iostream>
// #include<vector>
// #include<climits>
// #include<cmath>
// using namespace std;

// int minCostRecursive(vector<int>& arr, int n, int k, int currentIndex) {
//     if (currentIndex == n - 1) {
//         return 0; // Reached the last element, no additional cost.
//     }

//     int minCostSoFar = INT_MAX;

//     // Try all possible jumps from 1 to k.
//     for (int j = 1; j <= k; j++) {
//         if (currentIndex + j < n) {
//             int currentCost = abs(arr[currentIndex] - arr[currentIndex + j]) + minCostRecursive(arr, n, k, currentIndex + j);
//             minCostSoFar = min(minCostSoFar, currentCost);
//         }
//     }

//     return minCostSoFar;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int result = minCostRecursive(arr, n, k, 0);
//     cout << result << endl;
//     return 0;
// }




// 3.) Memoization (Top-Down) Approach:

// In this approach, you would use memoization to cache the results of subproblems to avoid redundant calculations. You'd start with a recursive function and use a memoization table (an array or map) to store intermediate results. This approach would optimize the recursive solution and make it more efficient.

// Memoization (Top-Down): Time complexity is O(n*k), where 'n' is the size of the array, and space complexity is O(n) for the memoization table.

// #include<iostream>
// #include<vector>
// #include<climits>
// #include<cmath>
// using namespace std;

// int minCostMemoization(vector<int>& arr, vector<int>& memo, int n, int k, int currentIndex) {
//     if (currentIndex == n - 1) {
//         return 0; // Reached the last element, no additional cost.
//     }

//     if (memo[currentIndex] != -1) {
//         return memo[currentIndex];
//     }

//     int minCostSoFar = INT_MAX;

//     // Try all possible jumps from 1 to k.
//     for (int j = 1; j <= k; j++) {
//         if (currentIndex + j < n) {
//             int currentCost = abs(arr[currentIndex] - arr[currentIndex + j]) + minCostMemoization(arr, memo, n, k, currentIndex + j);
//             minCostSoFar = min(minCostSoFar, currentCost);
//         }
//     }

//     memo[currentIndex] = minCostSoFar;
//     return minCostSoFar;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     vector<int> memo(n, -1); // Memoization table
//     int result = minCostMemoization(arr, memo, n, k, 0);
//     cout << result << endl;
//     return 0;
// }


// 4.) Iterative (Bottom-Up) DP Approach:

// The provided code is already an example of the iterative (bottom-up) dynamic programming approach. It starts from the base cases (dp[0] and dp[1]) and iteratively builds the solution for each position in the array. It uses a nested loop to consider different jump sizes and calculate the minimum cost based on previous positions. This approach ensures an optimal solution.

//  Iterative (Bottom-Up) DP: Time complexity is O(n*k) due to the nested loops, and space complexity is O(n) for the DP array.



// #include<iostream>
// #include<climits>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     int dp[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     dp[0] = 0;
//    for (int i = 1; i < n; i++)
//     {
//         dp[i] = INT_MAX;
//         for (int j = 1; j <= k; j++)
//         {
//             if (i - j >= 0)
//                 dp[i] = min(dp[i], dp[i - j] + abs(arr[i] - arr[i - j]));
//         }
//     }

//     cout << dp[n - 1] << endl;
//     return 0;
// }
