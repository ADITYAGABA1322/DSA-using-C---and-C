#include <iostream>
using namespace std;

// noew we have to perform the operation like
// Split array 𝑎 into two (possibly empty) subsequences† 𝑠 and 𝑡 such that every element of 𝑎 is either in 𝑠 or  𝑡
// now we split dp array into two subsequence s and t
// s = dp[0] to dp[i-1]
// t = dp[i] to dp[n-1]
// for array b of size m define the penalty 𝑝(𝑏) of an array 𝑏 as the number of indices 𝑖between 1 and 𝑚−1
// inclusive such that 𝑏𝑖>𝑏𝑖+1
// now we have to find the penalty of s and t

// The total penalty you will receive is 𝑝(𝑠) + 𝑝(𝑡)

// now we have to find the minimum penalty
// code
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int dp[n];
    for (int i = 0; i < n; i++)
    {
      cin >> dp[i];
    }
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
      // now we want to find the penalty of s and t
      // s = dp[0] to dp[i-1]
      // t = dp[i] to dp[n-1]
      for(int j=0;j<i;j++){
       // now we want to check subsequences s and t
        // for s
        if(dp[j]<dp[i]){
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
}