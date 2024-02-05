#include <iostream>
using namespace std;

int lcs_DP(string s, string t){     
    int m = s.length();         // Time Complexity : O(m*n) and Space Complexity : O(m*n)
    int n = t.length();
    int **output = new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i] = new int[n+1];
    }

    // Fill 1st row
    for(int j=0 ; j<=n ; j++){
        output[0][j] = 0;
    }
    // Fill 1st column
    for(int i=1; i<=m ; i++){
        output[i][0] = 0;
    }
    // Fill the remaining cells
    for(int i=1 ; i<=m ; i++){
        for(int j=1 ; j<=n ; j++){
            // Check if 1st characters match
            if(s[m-i] == t[n-j]){
                output[i][j] = 1 + output[i-1][j-1];
            }
            else{
                int a = output[i-1][j];
                int b = output[i][j-1];
                int c = output[i-1][j-1];
                output[i][j] = max(a,max(b,c));
            }
        }
    }
    return output[m][n];
}

int lcs_mem(string s , string t , int **output){    //Time Complexity : O(m*n) and space complexity : O(m*n)
    int m = s.size();
    int n = t.size();
    // Base Case
    if(s.size()==0 || t.size()==0){
        return 0;
    }
    // Check if output already exists
    if(output[m][n]!=-1){
        return output[m][n];
    }
    // Recursive Case
    int ans;
    if(s[0]==t[0]){
    ans = 1 + lcs_mem(s.substr(1),t.substr(1),output);
    }
    else{
        int a = lcs_mem(s.substr(1),t,output);
        int b = lcs_mem(s,t.substr(1),output);
        int c = lcs_mem(s.substr(1),t.substr(1),output);
        ans = max(a,max(b,c));
    }
    // Save the output for future use
    output[m][n] = ans;
    return ans;
}
int lcs_mem(string s , string t){
    int m = s.length();
    int n = t.length();
    int **output = new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i] = new int[n+1];
        for(int j=0;j<=n;j++){
            output[i][j] = -1;
        }
    }
    return lcs_mem(s , t , output);

}
int lcs(string s, string t)
{
    // Base Case
    if (s.size() == 0 || t.size() == 0)   // Time Complexity: O(2^n)
    {
        return 0;
    }
  
    // Recursive Case
    if (s[0] == t[0])
    {
        return 1 + lcs(s.substr(1), t.substr(1));
    }
    else
    {
        int a = lcs(s.substr(1), t);
        int b = lcs(s, t.substr(1));
        int c = lcs(s.substr(1), t.substr(1));
        return max(a, max(b, c));
    }


}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << lcs(s, t) << endl;
    cout << lcs_mem(s, t) << endl;
    cout << lcs_DP(s, t) << endl;
    return 0;
}

// Input:
// xyz
// zxay

// abcd
// badce