#include <iostream>
using namespace std;
int editDistance_DP(string s , string t){  // Time Complexity : O(m*n) , Space Complexity : O(m*n)
    int m = s.size();
    int n = t.size();
    int **output = new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i] = new int[n+1];
    }
    // Fill 1st row
    for(int j=0 ; j<=n ; j++){
        output[0][j] = j;
    }
    // Fill 1st column
    for(int i=1; i<=m ; i++){
        output[i][0] = i;
    }
    // Fill the remaining cells
    for(int i=1 ; i<=m ; i++){
        for(int j=1 ; j<=n ; j++){
            // Check if 1st characters match
            if(s[m-i] == t[n-j]){
                output[i][j] = output[i-1][j-1];
            }
            else{
                int a = output[i-1][j];
                int b = output[i][j-1];
                int c = output[i-1][j-1];
                output[i][j] = 1 + min(a,min(b,c));
            }
        }
    }
    return output[m][n];

}

int editDistance_mem(string s, string t, int **output)   // Time Complexity : O(m*n) , Space Complexity : O(m*n)
{   
    int m = s.size();
    int n = t.size();
    // Base Case
    if (s.size() == 0 || t.size() == 0)
    {
        return max(s.size(), t.size());
    }
    // Check if output already exists
    if (output[m][n] != -1)
    {
        return output[m][n];
    }
    // Recursive Case
    int ans;

    if (s[0] == t[0])
    {
        ans = editDistance_mem(s.substr(1), t.substr(1), output);
    }
    else
    {
        int x = editDistance_mem(s.substr(1), t, output) + 1;
        int y = editDistance_mem(s,  t.substr(1), output) + 1;
        int z = editDistance_mem(s.substr(1), t.substr(1), output) + 1;
        ans = min(x, min(y, z));
    }

    // Save the output for future use
    output[m][n] = ans;
    return ans;
}
int editDistance_mem(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int **output = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n + 1];
        for (int j = 0; j <= n; j++)
        {
            output[i][j] = -1;
        }
    }
    return editDistance_mem(s, t, output);
}
int editDistance(string s, string t) 
{                                       //  Time Complexity : O(3^(m+n)) , Space Complexity : O(m+n)
    // Base Case
    if (s.size() == 0 || t.size() == 0)
    {
        return max(s.size(), t.size());
    }
    // Recursive Case
    if (s[0] == t[0])
    {
        return editDistance(s.substr(1), t.substr(1));
    }
    else
    {
        int x = editDistance(s.substr(1), t) + 1;
        int y = editDistance(s, t.substr(1)) + 1;
        int z = editDistance(s.substr(1), t.substr(1)) + 1;
        return min(x, min(y, z));
    }
}
int main()
{
    // string s = "abcdf";
    // string t = "afd";
    string s = "abcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdf";
    string t = "afdafdafdafd";
    cout << editDistance(s, t) << endl;
    cout << editDistance_mem(s, t) << endl;
    cout << editDistance_DP(s, t) << endl;
    return 0;

}