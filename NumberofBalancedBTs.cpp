// #include <iostream>
// #include <cmath>
// using namespace std;

// // h>=0
// int balancedBTs(int h)
// {
//     // Base Case
//     if (h <= 1)                         // Time Complexity : O(2^n)
//     {
//         return 1;
//     }
//     // Recursive Case
//     int mod = (int) (pow(10, 9)) + 7;
//     int x = balancedBTs(h - 1);
//     int y = balancedBTs(h - 2);
//     int temp1 = (int) (((long) (x) * x) % mod);
//     int temp2 = (int) ((2 * (long) (x) * y) % mod);
//     // int temp1 = (int)((long(x) * long(x)) % mod);
//     // int temp2 = (int)((2 * long(x) * long(y)) % mod);
//     int ans = (temp1 + temp2) % mod;
//     // int ans = (x*x) + (2*x*y);
//     return ans;
// }
// int main()
// {
//     int h;
//     cin >> h;
//     cout << balancedBTs(h) << endl;
// }



// No. of Balanced BTs using memoization  , DP , Recursion

#include <iostream>
#include <cmath>
using namespace std;

// h>=0
int balancedBTs(int h, int *ans)
{                                   //  Time Complexity : O(n) , Space Complexity : O(n) 
    // Base Case                       // Memoization (Top Down Approach)
    if (h <= 1)
    {
        return 1;
    }
    // Check if output already exists
    if (ans[h] != -1)
    {
        return ans[h];
    }
    // Recursive Case
    int mod = (int) (pow(10, 9)) + 7;
    int x = balancedBTs(h - 1, ans);
    int y = balancedBTs(h - 2, ans);
    int temp1 = (int) (((long) (x) * x) % mod);
    int temp2 = (int) ((2 * (long) (x) * y) % mod);
    // int temp1 = (int)((long(x) * long(x)) % mod);
    // int temp2 = (int)((2 * long(x) * long(y)) % mod);
    int output = (temp1 + temp2) % mod;
    // int ans = (x*x) + (2*x*y);
    // Save the output for future use
    ans[h] = output;
    return output;
}
int balancedBTs_2(int h)             // Time Complexity : O(n) , Space Complexity : O(n) 
{                                   //  Memoization (Top Down Approach)
    int *ans = new int[h + 1];
    for (int i = 0; i <= h; i++)
    {
        ans[i] = -1;
    }
    return balancedBTs(h, ans);
}

int main()
{
    int h;
    cin >> h;
    cout << balancedBTs_2(h) << endl;
}

