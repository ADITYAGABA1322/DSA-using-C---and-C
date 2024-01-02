// #include<iostream>
// using namespace std;
// int minStepsHelper(int n , int *ans){           // Memoization  (Top Down Approach)
//     // Base Case                               // Time Complexity : O(n)
//     if(n<=1){
//         return 0;
//     }
//     // Check if output already exists
//     if(ans[n]!=-1){
//         return ans[n];
//     }
//     // Recursive Case
//     int x = minStepsHelper(n-1,ans);
//     int y = INT_MAX;
//     int z = INT_MAX;
//     if(n%2==0){
//         y = minStepsHelper(n/2,ans);
//     }
//     if(n%3==0){
//         z = minStepsHelper(n/3,ans);
//     }
//     // Calculate the final output
//     int output = min(x,min(y,z)) + 1;

//     // Save the output for future use
//     ans[n] = output;
//     return output;
// }
// int minSteps_2(int n){
//     int *ans = new int[n+1];
//     for(int i=0;i<=n;i++){
//         ans[i] = -1;
//     }
//     return minStepsHelper(n,ans);

// }
// int minSteps(int n){
//    // Base Case
//    if(n<=1){
//        return 0;
//    }
//     // Recursive Case
//     int x = minSteps(n-1);
//     int y = INT_MAX;
//     int z = INT_MAX;
//     if(n%2==0){
//         y = minSteps(n/2);
//     }
//     if(n%3==0){
//         z = minSteps(n/3);
//     }
//     // Calculate the final output
//     int ans = min(x,min(y,z)) + 1;
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<minSteps(n)<<endl;

//     return 0;
// }




#include <iostream>
using namespace std;

int minStepsHelper(int n, int *ans)
{
    if (n <= 1)
    {
        return 0;
    }
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int x = minStepsHelper(n - 1, ans);
    int y = INT_MAX;
    int z = INT_MAX;
    if (n % 2 == 0)
    {
        y = minStepsHelper(n / 2, ans);
    }
    if (n % 3 == 0)
    {
        z = minStepsHelper(n / 3, ans);
    }
    int output = min(x, min(y, z)) + 1;
    ans[n] = output;
    return output;
}

int minSteps_2(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }

    return minStepsHelper(n, ans);
}

int minSteps(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    int x = minSteps(n - 1);
    int y = INT_MAX;
    int z = INT_MAX;
    if (n % 2 == 0)
    {
        y = minSteps(n / 2);
    }
    if (n % 3 == 0)
    {
        z = minSteps(n / 3);
    }
    int ans = min(x, min(y, z)) + 1;
    return ans;
}
int minSteps_3(int n)
{
    int *ans = new int[n + 1];
    ans[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int x = ans[i - 1];
        int y = INT_MAX;
        int z = INT_MAX;
        if (i % 2 == 0)
        {
            y = ans[i / 2];
        }
        if (i % 3 == 0)
        {
            z = ans[i / 3];
        }
        ans[i] = min(x, min(y, z)) + 1;
    }
    int output = ans[n];
    delete[] ans;
    return output;
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << endl;
    cout << minSteps_2(n) << endl;
    cout << minSteps_3(n) << endl;
    return 0;
}





