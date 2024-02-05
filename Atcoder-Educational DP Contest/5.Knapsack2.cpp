// Problem Statement
// There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of w  and a value of v.

// Taro has decided to choose some of the N items and carry them home in a knapsack. The capacity of the knapsack is W, which means that the sum of the weights of items taken must be at most W.

// Find the maximum possible sum of the values of items that Taro takes home.

// Constraints

// All values in input are integers.

// 1≤N≤100

// 1≤W≤10^5

// 1≤w≤W

// 1≤v≤10^9

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

// Taro can take all three items. The sum of their weights is 3+4+5=12, which does not exceed W=8. The sum of their values is 30+50+60=140, which is the maximum possible.

// Sample Input 2

// 1 1000000000
// 1000000000 10

// Sample Output 2

// 10

// Taro can take Item 1. The sum of the weights of items taken is 1000000000, which does not exceed W=1000000000. The sum of the values of items taken is 10, which is the maximum possible.

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

// Taro can take Items 2, 3 and 5. The sum of the weights of items taken is 5+4+3=12, which does not exceed W=15. The sum of the values of items taken is 6+6+5=17, which is the maximum possible.

// Solution

// 1.) Recursive Approach:

// In this approach, we consider all possible ways to choose items from the given list and calculate the total value for each. Then, we choose the maximum value among these options.

// Time Complexity: O(2^n) and Space Complexity: Space: O(N), Stack space required for recursion. This approach would give a TLE (Time Limit Exceeded) error for larger inputs.,

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int unboundedKnapsack(int W, vector<int> &weights, vector<int> &values, int n)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }

//     if (weights[n - 1] > W)
//     {
//         return unboundedKnapsack(W, weights, values, n - 1);
//     }

//     return max(values[n - 1] + unboundedKnapsack(W - weights[n - 1], weights, values, n-1),
//                unboundedKnapsack(W, weights, values, n - 1));
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<int> values(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     int result = unboundedKnapsack(W, weights, values, n);
//     cout << result << endl;

//     return 0;
// }

//  OR

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int unboundedKnapsack(int W, vector<int> &weights, vector<int> &values, int currIndex, int n)
// {
//     // Base case: if there are no items or knapsack capacity is 0, return 0.
//     if (currIndex == n || W == 0)
//     {
//         return 0;
//     }

//     // If the weight of the current item is greater than the knapsack capacity,
//     // skip this item and move to the next item.
//     if (weights[currIndex] > W)
//     {
//         return unboundedKnapsack(W, weights, values, currIndex + 1, n);
//     }

//     // Return the maximum of two cases:
//     // 1. Include the current item and recursively call the function for the remaining capacity.
//     // 2. Exclude the current item and recursively call the function for the same capacity.
//     return max(values[currIndex] + unboundedKnapsack(W - weights[currIndex], weights, values, currIndex + 1, n),
//                unboundedKnapsack(W, weights, values, currIndex + 1, n));
// }

// int main()
// {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<int> values(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> weights[i] >> values[i];
//     }

//     int result = unboundedKnapsack(W, weights, values, 0, n);
//     cout << result << endl;

//     return 0;
// }

// Time Complexity: O(2^n) and Space Complexity:  Space: O(N), Stack space required for recursion. This approach would give a TLE (Time Limit Exceeded) error for larger inputs.,

// 2.) Memoization (Top-Down) Approach:

// In this approach, you would use memoization to cache the results of subproblems to avoid redundant calculations. You'd start with a recursive function and use a memoization table (an array or map) to store intermediate results. This approach would optimize the recursive solution and make it more efficient.

// Memoization (Top-Down): Time complexity is O(n*k), where 'n' is the size of the array, and space complexity is O(n) for the memoization table.

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_map>

// using namespace std;

// // Define a memoization table as a map to store computed results.
// unordered_map<int, int> memo;

// int unboundedKnapsack(int W, vector<int>& weights, vector<int>& values, int n) {
//     // Check if the result for this subproblem is already computed.
//     if (memo.find(W) != memo.end()) {
//         return memo[W];
//     }

//     // Base case: if there are no items or knapsack capacity is 0, return 0.
//     if (n == 0 || W == 0) {
//         return 0;
//     }

//     // If the weight of the current item is greater than the knapsack capacity,
//     // skip this item and move to the next item.
//     if (weights[n - 1] > W) {
//         return unboundedKnapsack(W, weights, values, n - 1);
//     }

//     // Return the maximum of two cases:
//     // 1. Include the current item and recursively call the function for the remaining capacity.
//     // 2. Exclude the current item and recursively call the function for the same capacity.
//     int include = values[n - 1] + unboundedKnapsack(W - weights[n - 1], weights, values, n-1);
//     int exclude = unboundedKnapsack(W, weights, values, n - 1);

//     // Store the computed result in the memoization table.
//     memo[W] = max(include, exclude);

//     return memo[W];
// }

// int main() {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<int> values(n);

//     for (int i = 0; i < n; i++) {
//         cin >> weights[i] >> values[i];
//     }

//     int result = unboundedKnapsack(W, weights, values, n);
//     cout << result << endl;

//     return 0;
// }

// // Time Complexity: O(n*k), where 'n' is the size of the array, and space complexity is O(n) for the memoization table.



// 3.) Dynamic Programming (Bottom-Up) Approach:

// In this approach, you would use a bottom-up approach to solve the problem. You'd start with the base cases and iteratively compute the results for all subproblems. This approach would optimize the recursive solution and make it more efficient.

// Time Complexity: O(n*k) and Space Complexity: O(n*k)

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int unboundedKnapsack(int W, vector<int>& weights, vector<int>& values, int n) {
//     // Initialize a DP table of size 'n+1' x 'W+1'.
//     vector<vector<int> > dp(n + 1, vector<int>(W + 1));

//     // Initialize the first row and column with 0.
//     for (int i = 0; i <= n; i++) {
//         dp[i][0] = 0;
//     }

//     for (int j = 0; j <= W; j++) {
//         dp[0][j] = 0;
//     }

//     // Build the DP table in a bottom-up manner.
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= W; j++) {
//             // If the weight of the current item is greater than the knapsack capacity,
//             // then we can't include this item and the value will be the same as the previous item.
//             if (weights[i - 1] > j) {
//                 dp[i][j] = dp[i - 1][j];
//             }
//             // Otherwise, we have two options:
//             // 1. Include the current item and add its value to the total value.
//             // 2. Exclude the current item and use the value from the previous item.
//             else {
//                 dp[i][j] = max(values[i - 1] + dp[i-1][j - weights[i - 1]], dp[i - 1][j]);
//             }
//         }
//     }

//     // Return the last cell from the DP table.
//     return dp[n][W];
// }

// int main() {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<int> values(n);

//     for (int i = 0; i < n; i++) {
//         cin >> weights[i] >> values[i];
//     }

//     int result = unboundedKnapsack(W, weights, values, n);
//     cout << result << endl;

//     return 0;
// }

// OR   

// Time complexity O(n*maxValue) and space complexity O(n*maxValue)

// #include <iostream>
// #define ll long long


// using namespace std;

// int main()
// {
//     ll n, w;
//     cin >> n >> w;
//     vector<ll> weight(n), value(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> weight[i] >> value[i];
//     }
//     ll maxValue = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         maxValue += value[i];
//     }
//     vector<vector<ll> > dp(n + 1, vector<ll>(maxValue + 1, 1e18));
//     dp[0][0] = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = 0; j <= maxValue; j++)
//         {
//             dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
//             if (j + value[i] <= maxValue)
//             {
//                 dp[i + 1][j + value[i]] = min(dp[i + 1][j + value[i]], dp[i][j] + weight[i]);
//             }
//         }
//     }
//     ll ans = 0;
//     for (ll i = 0; i <= maxValue; i++)
//     {
//         if (dp[n][i] <= w)
//         {
//             ans = i;
//         }
//     }
//     cout << ans << endl;
// }

// Time Complexity: O(n*k) and Space Complexity: O(n*k)

// 4.) Iterative Dynamic Programming (Bottom-up) Space Optimized Approach:

// In this approach, you would use a bottom-up approach to solve the problem. You'd start with the base cases and iteratively compute the results for all subproblems. This approach would optimize the recursive solution and make it more efficient.

// Time Complexity: O(n*k) and Space Complexity: O(k)



// #include <iostream>
// #define ll long long


// using namespace std;

// int main()
// {
//     ll n, w;
//     cin >> n >> w;
//     vector<ll> weight(n), value(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> weight[i] >> value[i];
//     }
//     ll maxValue = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         maxValue += value[i];
//     }
//     vector<ll> dp(maxValue + 1, 1e18);
//     dp[0] = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = maxValue - value[i]; j >= 0; j--)
//         {
//             dp[j + value[i]] = min(dp[j + value[i]], dp[j] + weight[i]);
//         }
//     }
//     ll ans = 0;
//     for (ll i = 0; i <= maxValue; i++)
//     {
//         if (dp[i] <= w)
//         {
//             ans = i;
//         }
//     }
//     cout << ans << endl;
// }

// OR


// Time Complexity: O(n*k) and Space Complexity: O(k)

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int unboundedKnapsack(int W, vector<int>& weights, vector<int>& values, int n) {
//     // Initialize a DP table of size 'W+1'.
//     vector<int> dp(W + 1);

//     // Initialize the first element with 0.
//     dp[0] = 0;

//     // Build the DP table in a bottom-up manner.
//     for (int i = 1; i <= W; i++) {
//         for (int j = 0; j < n; j++) {
//             // If the weight of the current item is greater than the knapsack capacity,
//             // then we can't include this item and the value will be the same as the previous item.
//             if (weights[j] <= i) {
//                 dp[i] = max(dp[i-1], dp[i - weights[j]] + values[j]);
//             }
//         }
//     }

//     // Return the last element from the DP table.
//     return dp[W];
// }

// int main() {
//     int n, W;
//     cin >> n >> W;

//     vector<int> weights(n);
//     vector<int> values(n);

//     for (int i = 0; i < n; i++) {
//         cin >> weights[i] >> values[i];
//     }

//     int result = unboundedKnapsack(W, weights, values, n);
//     cout << result << endl;

//     return 0;
// }

