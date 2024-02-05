// Problem Statement
// There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of w i and a value of v i . 

// Taro has decided to choose some of the N items and carry them home in a knapsack. The capacity of the knapsack is W, which means that the sum of the weights of items taken must be at most W.

// Find the maximum possible sum of the values of items that Taro takes home.

// Constraints

// All values in input are integers.

// 1≤N≤100

// 1≤W≤10^5

// 1≤w i ≤W

// 1≤v i ≤10^9

// Input
// Input is given from Standard Input in the following format:

// N W

// w1 v1

// w2 v2

// :

// wN vN

// Output

// Print the maximum possible sum of the values of items that Taro takes home.

// Sample Input 1

// 3 8
// 3 30
// 4 50
// 5 60

// Sample Output 1

// 90

// Taro can take the second and third items. The sum of their weights is 4+5=9, which does not exceed W=8. The sum of their values is 50+60=110, which is the maximum possible.

// Sample Input 2

// 5 5
// 1 1000000000
// 1 1000000000
// 1 1000000000
// 1 1000000000
// 1 1000000000

// Sample Output 2

// 5000000000

// Taro can take all five items. The sum of their weights is 1+1+1+1+1=5, which does not exceed W=5. The sum of their values is 1000000000+1000000000+1000000000+1000000000+1000000000=5000000000, which is the maximum possible.

// Sample Input 3

// 6 15
// 6 5
// 5 6
// 6 4
// 6 6
// 3 5
// 7 2

// Sample Output 3

// 17

// Taro can take the first, third and sixth items. The sum of their weights is 6+6+7=19, which does not exceed W=15. The sum of their values is 5+4+2=11, which is the maximum possible.

// Solution

// 1.) Recursive Solution:

// The code provided above contains the recursive solution. It defines a helper function knapsack that recursively calculates the maximum value that can be obtained by including or excluding an item at each step. It considers two options at each step: either including the current item or excluding it, and it returns the maximum of these two options.

// Recursive Solution: Exponential time complexity (O(2^n)) and O(n) space complexity due to the function call stack.


// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>
// using namespace std;

// long long knapsack(vector<int> &weights, vector<long long> &values, int n, int W, int currentIndex)
// {
//     if (currentIndex == n || W == 0)
//     {
//         return 0; // Reached the end of the array or capacity of the knapsack is 0.
//     }

//     // If the weight of the current item exceeds the capacity of the knapsack, we can't include this item.
//     if (weights[currentIndex] > W)
//     {
//         return knapsack(weights, values, n, W, currentIndex + 1);
//     }

//     // Try both including and excluding the current item.
//     long long include = values[currentIndex] + knapsack(weights, values, n, W - weights[currentIndex], currentIndex + 1);
//     long long exclude = knapsack(weights, values, n, W, currentIndex + 1);
//     return max(include, exclude);
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<long long> values(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     cout << knapsack(weights, values, n, W, 0) << endl;

//     return 0;
// }

// Time Complexity: The time complexity of this recursive solution is exponential, O(2^n), because we explore all possible combinations of items.
// Space Complexity: The space complexity is O(n) due to the recursive function call stack.

// 2.) Memoization (Top-Down) Approach:

// The recursive solution can be optimized using memoization. We can store the results of the subproblems in a 2D array dp, where dp[i][j] represents the maximum value that can be obtained by including or excluding an item at each step. If the value of dp[i][j] is -1, it means that the subproblem has not been solved yet. Otherwise, it stores the result of the subproblem.

// Memoization Solution: Time complexity is O(n*W), where n is the number of items and W is the capacity of the knapsack. The space complexity is O(n*W) for the memoization table.

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>
// using namespace std;

// long long knapsack(vector<int> &weights, vector<long long> &values, vector<vector<long long> > &memo , int n, int W, int currentIndex)
// {
//     if (currentIndex == n || W == 0)
//     {
//         return 0; // Reached the end of the array or capacity of the knapsack is 0.
//     }

//     if (memo[currentIndex][W] != -1) {
//         return memo[currentIndex][W];
//     }

//     // If the weight of the current item exceeds the capacity of the knapsack, we can't include this item.
//     if (weights[currentIndex] > W)
//     {
//         return memo[currentIndex][W] = knapsack(weights, values, memo, n, W, currentIndex + 1);
//     }

//     // Try both including and excluding the current item.
//     long long include = values[currentIndex] + knapsack(weights, values, memo, n, W - weights[currentIndex], currentIndex + 1);
//     long long exclude = knapsack(weights, values, memo, n, W, currentIndex + 1);
//     return memo[currentIndex][W] = max(include, exclude);
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<long long> values(n);
//     vector<vector<long long> > memo(n, vector<long long>(W + 1, -1));

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     cout << knapsack(weights, values, memo, n, W, 0) << endl;

//     return 0;
// }

// 3.) Dynamic Programming (Bottom-Up) Approach:

// The recursive solution can be converted into an iterative solution using dynamic programming. We can use a 2D array dp, where dp[i][j] represents the maximum value that can be obtained by including or excluding an item at each step. The value of dp[i][j] is calculated based on the values of dp[i + 1][j] and dp[i + 1][j - weights[i]].

// Dynamic Programming (Bottom-Up) Approach: Time complexity is O(n*W), where n is the number of items and W is the capacity of the knapsack. The space complexity is O(n*W) for the memoization table.


// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>

// using namespace std;

// long long knapsack(vector<int> &weights, vector<long long> &values, int n, int W)
// {
//     vector<vector<long long> > dp(n + 1, vector<long long>(W + 1, 0));

//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j <= W; j++)
//         {
//             if (weights[i] > j)
//             {
//                 dp[i][j] = dp[i + 1][j];
//             }
//             else
//             {
//                 dp[i][j] = max(values[i] + dp[i + 1][j - weights[i]], dp[i + 1][j]);
//             }
//         }
//     }

//     return dp[0][W];
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<long long> values(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     cout << knapsack(weights, values, n, W) << endl;

//     return 0;
// }

// Time Complexity: O(n*W), where n is the number of items and W is the capacity of the knapsack.
// Space Complexity: O(n*W) for the memoization table.

// 4.) Dynamic Programming (Bottom-Up) Approach: (Space Optimized)

// The space complexity of the above solution can be reduced to O(W) by using a 1D array dp instead of a 2D array. The value of dp[j] is calculated based on the values of dp[j] and dp[j - weights[i]].

// Dynamic Programming (Bottom-Up) Approach: Time complexity is O(n*W), where n is the number of items and W is the capacity of the knapsack. The space complexity is O(W) for the memoization table.

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>

// using namespace std;

// long long knapsack(vector<int> &weights, vector<long long> &values, int n, int W)
// {
//     vector<long long> dp(W + 1, 0);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = W; j >= 0; j--)
//         {
//             if (weights[i] <= j)
//             {
//                 dp[j] = max(values[i] + dp[j - weights[i]], dp[j]);
//             }
//         }
//     }

//     return dp[W];
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<long long> values(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     cout << knapsack(weights, values, n, W) << endl;

//     return 0;
// }

// Time Complexity: O(n*W), where n is the number of items and W is the capacity of the knapsack.
// Space Complexity: O(W) for the memoization table.


// OR

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>

// using namespace std;

// long long knapsack(vector<int> &weights, vector<long long> &values, int n, int W)
// {
//     vector<long long> dp(W + 1, 0);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = W; j >= weights[i]; j--)
//         {
//             dp[j] = max(values[i] + dp[j - weights[i]], dp[j]);
//         }
//     }

//     return dp[W];
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<long long> values(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     cout << knapsack(weights, values, n, W) << endl;

//     return 0;
// }

// Time Complexity: O(n*W), where n is the number of items and W is the capacity of the knapsack.
// Space Complexity: O(W) for the memoization table.

// 5.) Iterative Dynamic Programming (Tabulation) Approach: (Space Optimized)

// The space complexity of the above solution can be reduced to O(1) by using two variables instead of an array. The value of dp is calculated based on the values of dp and dp - weights[i].
// Iterative Dynamic Programming (Tabulation) Approach: Time complexity is O(n*W), where n is the number of items and W is the capacity of the knapsack. The space complexity is O(1) for the memoization table.

// #include <iostream>

// using namespace std;

// long long knapsack(int weights[], long long values[], int n, int W)
// {
//     long long dp[2][W + 1];

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= W; j++)
//         {
//             if (i == 0 || j == 0)
//             {
//                 dp[i % 2][j] = 0;
//             }
//             else if (weights[i - 1] <= j)
//             {
//                 dp[i % 2][j] = max(values[i - 1] + dp[(i - 1) % 2][j - weights[i - 1]], dp[(i - 1) % 2][j]);
//             }
//             else
//             {
//                 dp[i % 2][j] = dp[(i - 1) % 2][j];
//             }
//         }
//     }

//     return dp[n % 2][W];
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     int weights[n];
//     long long values[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     cout << knapsack(weights, values, n, W) << endl;

//     return 0;
// }

// Time Complexity: O(n*W), where n is the number of items and W is the capacity of the knapsack.
// Space Complexity: O(1) for the memoization table. 




