// Problem Statement
// Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

// The vacation consists of N days. For each i (1≤i≤N), Taro will choose one of the following activities and do it on the i-th day:

// A: Swim in the sea. Gain ai points of happiness.
// B: Catch bugs in the mountains. Gain bi points of happiness.
// C: Do homework at home. Gain ci points of happiness.
// As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

// Find the maximum possible total points of happiness that Taro gains.

// Constraints
// All values in input are integers.
// 1≤N≤10 5
// 1≤ai,bi,ci≤10 4

// Input
// Input is given from Standard Input in the following format:

// N
// a1 b1 c1
// a2 b2 c2
// :
// aN bN cN

// Output

// Print the maximum possible total points of happiness that Taro gains.

// Sample Input 1

// 3
// 10 40 70
// 20 50 80
// 30 60 90

// Sample Output 1

// 210

// Taro gains 70 points of happiness on the 1-st day, 50 points of happiness on the 2-nd day, and 90 points of happiness on the 3-rd day, for a total of 70+50+90=210 points of happiness.

// Sample Input 2

// 1
// 100 10 1

// Sample Output 2

// 100

// Taro will do homework at home on the 1-st day and gain 1 points of happiness.

// Sample Input 3

// 7
// 6 7 8
// 8 8 3
// 2 5 2
// 7 8 6
// 4 6 8
// 2 3 4
// 7 5 1

// Sample Output 3

// 46

// Taro gains 8 points of happiness on the 1-st day, 8 points of happiness on the 2-nd day, 5 points of happiness on the 3-rd day, 8 points of happiness on the 4-th day, 8 points of happiness on the 5-th day, 3 points of happiness on the 6-th day, and 5 points of happiness on the 7-th day, for a total of 8+8+5+8+8+3+5=46 points of happiness.

// Solution

// 1.) Recursive Approach:

// The code provided above contains the recursive solution. It defines a helper function maxHappiness that recursively calculates the maximum happiness that Taro can gain. It considers three options at each step: either choosing activity A, B, or C, and it returns the maximum of these three options.

// Recursive: Exponential time complexity (O(3^n)) and O(n) space complexity due to the function call stack.
// #include <iostream>
// #include <vector>

// using namespace std;

// int maxHappinessRecursive(vector<vector<int> > &activities, int n, int day, int lastActivity)
// {
//     if (day == n)
//     {
//         return 0; // Reached the last day, no additional happiness.
//     }

//     int maxHappiness = 0;

//     for (int currentActivity = 0; currentActivity < 3; currentActivity++) // This is a loop that iterates through the three possible activities (A, B, C) that Taro can choose from for the current day.
//       //   It checks if currentActivity is different from lastActivity to ensure that Taro does not do the same activity on consecutive days.
//         {
//         // Inside the loop, it calculates the happiness happinessToday that Taro gains from choosing the current activity for the current day.
//         // It then recursively calculates happinessTomorrow for the remaining days (day + 1) by calling maxHappinessRecursive with the updated state.
//         // totalHappiness represents the total happiness gained by choosing the current activity for the current day and then maximizing happiness for the remaining days.
//         // maxHappiness keeps track of the maximum happiness among all possible activities for the current day.
//         if (currentActivity != lastActivity)
//         {
//             int happinessToday = activities[day][currentActivity];
//             int happinessTomorrow = maxHappinessRecursive(activities, n, day + 1, currentActivity);
//             int totalHappiness = happinessToday + happinessTomorrow;
//             maxHappiness = max(maxHappiness, totalHappiness);
//             }
           
//         }

//     return maxHappiness;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int> > activities(n, vector<int>(3));

//     for (int i = 0; i < n; i++)
//     {
//         cin >> activities[i][0] >> activities[i][1] >> activities[i][2];
//     }

//     int result = maxHappinessRecursive(activities, n, 0, -1);
//     cout << result << endl;

//     return 0;
// }


// Time Complexity: The time complexity of this recursive solution is exponential, O(3^n), because we explore all possible paths to reach the nth day.
// Space Complexity: The space complexity is O(n) due to the recursive function call stack.

// 2.) Memoization (Top-Down) Approach:

// The code provided above contains the memoized solution. It defines a helper function maxHappiness that recursively calculates the maximum happiness that Taro can gain. It considers three options at each step: either choosing activity A, B, or C, and it returns the maximum of these three options. It also uses a 2D array dp to store the results of subproblems so that they can be reused later.

// Memoization (Top-Down): Time complexity is O(n), where 'n' is the size of the array, and space complexity is O(n) for the memoization table.

// #include <iostream>
// #include <vector>

// using namespace std;

// int maxHappinessRecursive(vector<vector<int> > &activities, vector<vector<int> > &memo, int n, int day, int lastActivity)
// {
//     if (day == n)
//     {
//         return 0; // Reached the last day, no additional happiness.
//     }

//     if (memo[day][lastActivity] != -1)
//     {
//         return memo[day][lastActivity]; // Return memoized result if available.
//     }

//     int maxHappiness = 0;

//     for (int currentActivity = 0; currentActivity < 3; currentActivity++)
//     {
//         if (currentActivity != lastActivity)
//         {
//             int happinessToday = activities[day][currentActivity];
//             int happinessTomorrow = maxHappinessRecursive(activities, memo, n, day + 1, currentActivity);
//             int totalHappiness = happinessToday + happinessTomorrow;
//             maxHappiness = max(maxHappiness, totalHappiness);
//         }
//     }

//     // Store the result in memo and return it.
//     memo[day][lastActivity] = maxHappiness;
//     return maxHappiness;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int> > activities(n, vector<int>(3));
//     vector<vector<int> > memo(n, vector<int>(3, -1)); // Initialize memoization table with -1.

//     for (int i = 0; i < n; i++)
//     {
//         cin >> activities[i][0] >> activities[i][1] >> activities[i][2];
//     }

//     int result = 0;
        //  // int result = maxHappinessRecursive(activities, memo, n, 0, -1);
        // // The code should initialize result with the maximum of the three possible starting activities because Taro can start with any of the three activities on the first day. Here's the corrected code:
//     for (int startActivity = 0; startActivity < 3; startActivity++)
//     {
//         result = max(result, maxHappinessRecursive(activities, memo, n, 0, startActivity));
//     }

//     cout << result << endl;

//     return 0;
// }

// Time Complexity: The time complexity of this memoized solution is O(n), where 'n' is the size of the array, because we only need to compute the result for each subproblem once.
// Space Complexity: The space complexity is O(n) for the memoization table.

// 3.) Dynamic Programming (Bottom-Up) Approach:

// The code provided above contains the iterative solution. It defines a helper function maxHappiness that iteratively calculates the maximum happiness that Taro can gain. It considers three options at each step: either choosing activity A, B, or C, and it returns the maximum of these three options. It also uses a 2D array dp to store the results of subproblems so that they can be reused later.

// Iterative (Bottom-Up) DP: Time complexity is O(n), where 'n' is the size of the array, and space complexity is O(n) for the DP array.

// #include <iostream>

// using namespace std;

// int maxHappinessIterative(int a[], int b[], int c[], int n)
// {
//     int dp[n][3];
//     dp[0][0] = a[0];
//     dp[0][1] = b[0];
//     dp[0][2] = c[0];

//     for (int i = 1; i < n; i++)
//     {
//         dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
//         dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
//         dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i];
//     }

//     return max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n], b[n], c[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i] >> b[i] >> c[i];
//     }
//     cout << maxHappinessIterative(a, b, c, n);
//     return 0;
// }

//          or

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int> > activities(n, vector<int>(3));

//     for (int i = 0; i < n; i++)
//     {
//         cin >> activities[i][0] >> activities[i][1] >> activities[i][2];
//     }

//     vector<vector<int> > dp(n, vector<int>(3, 0));

//     // Initialize the first row of dp with the values from the first day.
//     dp[0][0] = activities[0][0];
//     dp[0][1] = activities[0][1];
//     dp[0][2] = activities[0][2];

//     // Iterate through the days starting from the second day.
//     for (int day = 1; day < n; day++)
//     {
//         for (int activity = 0; activity < 3; activity++)
//         {
//             // Calculate the maximum happiness for the current day and activity.
//             for (int prevActivity = 0; prevActivity < 3; prevActivity++)
//             {
//                 if (activity != prevActivity)
//                 {
//                     dp[day][activity] = max(dp[day][activity], activities[day][activity] + dp[day - 1][prevActivity]);
//                 }
//             }
//         }
//     }

//     // Find the maximum happiness from the last day.
//     int maxHappiness = max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));

//     cout << maxHappiness << endl;

//     return 0;
// }   

// Time Complexity: The time complexity of this iterative DP approach is O(n) since we iterate through the array of days once.
// Space Complexity: The space complexity is O(n) due to the DP array.

// Practice
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> activities(n, vector<int>(3));
//     for (int i = 0; i < n; i++)
//         cin >> activities[i][0] >> activities[i][1] >> activities[i][2];
//     vector<vector<int>> dp(n, vector<int>(3, 0));
//     dp[0][0] = activities[0][0];
//     dp[0][1] = activities[0][1];
//     dp[0][2] = activities[0][2];
//     // for(int day =1; day<n; day++){
//     //     for(int currActivity =1 ; currActivity < 3 ; currActivity++){
//     //         for(int prevActivity = 1 ; prevActivity < 3 ; prevActivity++){
//     //             if(currActivity != prevActivity){
//     //                 dp[day][currActivity] = max(dp[day][currActivity] , activities[day][currActivity] + dp[day-1][prevActivity]);
//     //             }
//     //         }
//     //     }
//     // }
//     for (int i = 1; i < n; i++)
//     {
//         dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + activities[i][0];
//         dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + activities[i][1];
//         dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + activities[i][2];
//     }
//     int maxHappines = max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
//     cout << maxHappines << endl;
//     return 0;
// }


// Time Complexity: The time complexity of this iterative DP approach is O(n) since we iterate through the array of days once.

// 5.) Iterative Dynamic Programming (Tabulation) Approach: (Space Optimized)

// The code provided above contains the iterative solution. It defines a helper function maxHappiness that iteratively calculates the maximum happiness that Taro can gain. It considers three options at each step: either choosing activity A, B, or C, and it returns the maximum of these three options. It also uses a 2D array dp to store the results of subproblems so that they can be reused later.

// Iterative (Bottom-Up) DP: Time complexity is O(n), where 'n' is the size of the array, and space complexity is O(1) for the DP array.

// #include <iostream>

// using namespace std;

// int maxHappinessIterative(int a[], int b[], int c[], int n)
// {
//     int dp[3];
//     dp[0] = a[0];
//     dp[1] = b[0];
//     dp[2] = c[0];

//     for (int i = 1; i < n; i++)
//     {
//         int temp0 = dp[0], temp1 = dp[1], temp2 = dp[2];
//         dp[0] = max(temp1, temp2) + a[i];
//         dp[1] = max(temp0, temp2) + b[i];
//         dp[2] = max(temp0, temp1) + c[i];
//     }

//     return max(dp[0], max(dp[1], dp[2]));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n], b[n], c[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i] >> b[i] >> c[i];
//     }
//     cout << maxHappinessIterative(a, b, c, n);
//     return 0;
// }

// Time Complexity: The time complexity of this iterative DP approach is O(n) since we iterate through the array of days once.
// Space Complexity: The space complexity is O(1) because we only use a constant amount of extra space to store the dp array of size 3.


//      OR


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int> > activities(n, vector<int>(3));

//     for (int i = 0; i < n; i++)
//     {
//         cin >> activities[i][0] >> activities[i][1] >> activities[i][2];
//     }

//     // Use variables to store previous day's results for each activity.
//     int prevA = activities[0][0], prevB = activities[0][1], prevC = activities[0][2];

//     // Iterate through the days starting from the second day.
//     for (int day = 1; day < n; day++)
//     {
//         int curA = max(prevB, prevC) + activities[day][0];
//         int curB = max(prevA, prevC) + activities[day][1];
//         int curC = max(prevA, prevB) + activities[day][2];

//         // Update previous day's results.
//         prevA = curA;
//         prevB = curB;
//         prevC = curC;
//     }

//     // Find the maximum happiness from the last day.
//     int maxHappiness = max(prevA, max(prevB, prevC));

//     cout << maxHappiness << endl;

//     return 0;
// }


