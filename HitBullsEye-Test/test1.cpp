// 1.) LEFT_SMALLEST

// Problem Statement:
// Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

// Input:
// The first line of input contains T test cases.

// The first line of each test case contains the number of elements in the array.

// The second line of each test case contains the elements of the array.

// Output:
// Print the n elements.

// Constraints:
// 1<=T<=100

// 1<=N<=100

// 0<=A[i]<10000

// Time Limit:
// 1 sec

// Example 1:
// Input
// 2
// 3
// 1 6 2
// 6
// 1 5 0 3 4 5

// Output
// -1 1 1
// -1 1 -1 0 3 4


// Solution:

// #include<iostream>

// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n], ans[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         ans[0] = -1;
//         for(int i=1; i<n; i++){
//             int j = i-1;
//             while(j>=0){
//                 if(arr[j]<arr[i]){
//                     ans[i] = arr[j];
//                     break;
//                 }
//                 j--;
//             }
//             if(j<0){
//                 ans[i] = -1;
//             }
//         }
//         for(int i=0; i<n; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// or using stack

// #include <iostream>
// #include <stack>
// #include <vector>

// using namespace std;

// vector<int> findLeftSmallest(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> result(n, -1);
//     stack<int> st;

//     for (int i = 0; i < n; ++i)
//     {
//         while (!st.empty() && arr[st.top()] >= arr[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             result[i] = arr[st.top()];
//         }
//         st.push(i);
//     }

//     return result;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N;
//         cin >> N;
//         vector<int> arr(N);

//         for (int i = 0; i < N; ++i)
//         {
//             cin >> arr[i];
//         }

//         vector<int> result = findLeftSmallest(arr);

//         for (int i = 0; i < N; ++i)
//         {
//             cout << result[i];
//             if (i < N - 1)
//             {
//                 cout << " ";
//             }
//         }

//         cout << endl; // Add a newline character after each test case's output
//     }

//     return 0;
// }

// 2.) UNIQUE_PATHS

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

// 3.) REACH_NTH_STAIR

// Problem Statement:
// There are N stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

// Input:
// The first line contains an integer 'T' denoting the total number of test cases. In each test cases, an integer N will be given.

// Output:
// For each testcase, in a new line, print number of possible ways to reach Nth stair. Answer your output % 10^9+7.

// Constraints:
// 1<=T<=10^5
// 1<=N<=10^5

// Time Limit:
// 1 sec

// Example 1:
// Input
// 3
// 4
// 10
// 24

// Output
// 5
// 89
// 75025

// Solution:

// # include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         long long dp[n+1];
//         dp[0] = 1;
//         dp[1] = 1;
//         for(int i=2; i<=n; i++){
//             dp[i] = (dp[i-1] + dp[i-2])%1000000007;
//         }
//         cout<<dp[n]<<endl;
//     }
//     return 0;
// }

// Simon, likes special coins, and for any non‐negative integer 𝑘 ൌ 0, 1, 2, 3, …  he has exactly two coins of value
// 𝑛 ൌ 2௞ (i.e., 2 to the power of 𝑘). For a given value Z, help Simon to calculate the number of different ways
// that can represent Z with the coins which he has. Note that two representations are considered different if
// there is a coin that appears a different number of times (or does not appear at all) in the representations.  
// 1. Download the source code attached to this task. Create a new Microsoft Visual Studio project and
// import the three files. Your newly built project should compile without errors. Note that the file
// Tester.cs already provides you with a Main method as a starting point of your program and is
// important for the purpose of debugging and testing.    Another file, TestGenerator.cs, serves the
// Tester class in Tester.cs with hard‐coded test instances. Finally, CoinRepresentation.cs contains a
// template for the algorithm that you need to develop and implement as part of the
// CoinRepresentation class.  
// 2. Explore the existing CoinRepresentation class to find the static method named Solve. This method
// must implement your algorithm. It accepts only a single argument: A target value Z that you must
// match exactly with a set of existing coins. The method must tell Simon the number of ways that his
// coins can represent the given target value. Note that both the input argument and the output are
// long integers (i.e. 64‐bit integers designated via the long data type in C#). You may assume that Z will
// be between 1 and 1,000,000,000,000,000,000 (10ଵ଼ ), inclusive
// 3. Consider the following examples:
// ‐ For a given input value Z ൌ 1, the algorithm must return 1. The only possible way for Simon to
// represent Z in this case is to use exactly one coin of value 1.
// ‐ For a given input value Z ൌ 6, the algorithm must return 3. The following three representations
// are possible for Simon in this case:
// {
//     1, 1, 2, 2
// }
// , {1, 1, 4} and {2, 4}.
// ‐ For a given input value Z ൌ 47, the algorithm must return 2.
// ‐ For a given input value Z ൌ 256, the algorithm must return 9.
// ‐ For a given input value Z ൌ 8489289, the algorithm must return 6853.
// ‐ For a given input value Z ൌ 1000000000, the algorithm must return 73411.

// Solution: do in c++

// #include <iostream>
// #include <vector>

// class CoinRepresentation
// {
// public:
//     static long long Solve(long long Z)
//     {
//         std::vector<long long> dp(Z + 1, 0);
//         dp[0] = 1;

//         for (long long coin = 1; coin <= Z; coin *= 2)
//         {
//             for (long long i = coin; i <= Z; ++i)
//             {
//                 dp[i] += dp[i - coin];
//             }
//         }

//         return dp[Z];
//     }
// };

// int main()
// {
//     long long testCases[] = {1, 6, 47, 256, 8489289, 1000000000};

//     for (long long Z : testCases)
//     {
//         long long ways = CoinRepresentation::Solve(Z);
//         std::cout << "For a given input value Z ൌ " << Z << ", the algorithm must return " << ways << ". ";
//         if (Z == 1)
//         {
//             std::cout << "The only possible way for Simon to represent Z in this case is to use exactly one coin of value 1." << std::endl;
//         }
//         else
//         {
//             std::cout << "The following " << ways << " representations are possible for Simon in this case." << std::endl;
//         }
//     }

//     return 0;
// }

// write a xcpode for likle i say double two it printts 22 and when i say double 3 it prints 33 and so on
// fitsr take input as a string like double two and then print the number 22 and for double three print 33 and so on
// #include <iostream>
// #include <string>
// #include <unordered_map>

// std::string getPhoneNumber(const std::string &s)
// {
//     std::unordered_map<std::string, std::string> wordToNumberMap = {
//         {"one", "1"},
//         {"two", "2"},
//         {"three", "3"},
//         {"four", "4"},
//         {"five", "5"},
//         {"six", "6"},
//         {"seven", "7"},
//         {"eight", "8"},
//         {"nine", "9"},
//         {"zero", "0"},
//         {"double", ""}, // Handle "double" as an empty string
//         {"triple", ""}  // Handle "triple" as an empty string
//     };

//     std::string resultStr;
//     std::string word;
//     bool isDouble = false;
//     bool isTriple = false;

//     for (const char c : s)
//     {
//         if (c == ' ')
//         {
//             if (!word.empty())
//             {
//                 if (word == "double")
//                 {
//                     isDouble = true;
//                 }
//                 else if (word == "triple")
//                 {
//                     isTriple = true;
//                 }
//                 else
//                 {
//                     if (isDouble)
//                     {
//                         resultStr += wordToNumberMap[word] + wordToNumberMap[word];
//                         isDouble = false;
//                     }
//                     else if (isTriple)
//                     {
//                         resultStr += wordToNumberMap[word] + wordToNumberMap[word] + wordToNumberMap[word];
//                         isTriple = false;
//                     }
//                     else
//                     {
//                         resultStr += wordToNumberMap[word];
//                     }
//                 }
//                 word.clear();
//             }
//         }
//         else
//         {
//             word += c;
//         }
//     }

//     if (!word.empty())
//     {
//         if (isDouble)
//         {
//             resultStr += wordToNumberMap[word] + wordToNumberMap[word];
//         }
//         else if (isTriple)
//         {
//             resultStr += wordToNumberMap[word] + wordToNumberMap[word] + wordToNumberMap[word];
//         }
//         else
//         {
//             resultStr += wordToNumberMap[word];
//         }
//     }

//     return resultStr;
// }

// int main()
// {
//     std::string s;
//     std::getline(std::cin, s);

//     std::string result = getPhoneNumber(s);

//     std::cout << result << std::endl;

//     return 0;
// }

// Online C++ compiler to run C++ program online
// #include <iostream>
// #include <string>
// #include <unordered_map>

// using namespace std;

// string getPhoneNumber(string &s){
//     unordered_map<string, string> mp = {
//         {"one", "1"},
//         {"two", "2"},
//         {"three", "3"},
//         {"four", "4"},
//         {"five", "5"},
//         {"six", "6"},
//         {"seven", "7"},
//         {"eight", "8"},
//         {"nine", "9"},
//         {"zero", "0"},
//         {"double", ""},
//         {"triple", ""}};
//     string result;
//     string word;
//     bool isDouble = false;
//     bool isTriple = false;

//     for (char c : s)
//     {
//         if (c == ' ')
//         {
//             if (!word.empty())
//             {
//                 if (word == "double")
//                     isDouble = true;
//                 else if (word == "triple")
//                     isTriple = true;
//                 else
//                 {
//                     if (isDouble)
//                         result += mp[word] + mp[word];
//                     else if (isTriple)
//                         result += mp[word] + mp[word] + mp[word];
//                     else
//                         result += mp[word];
//                 }
//                 word.clear();
//             }
//         }
//         else
//         {
//             word += c;
//         }
//     }
//     if (!word.empty())
//     {
//         if (isDouble)
//             result += mp[word] + mp[word];
//         else if (isTriple)
//             result += mp[word] + mp[word] + mp[word];
//         else
//             result += mp[word];
//     }
//     return result;
// }

// int main()
// {
//     // Write C++ code here
//     string s;
//     cin >> s;
//     string res = getPhoneNumber(s);
//     cout << res << endl;

//     return 0;
// }
