#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int minCostPath_DP(int **input, int m, int n){
    int **output = new int*[m];
    for(int i=0;i<m;i++){
        output[i] = new int[n];
    } 
    // Fill the last cell i.e destination cell
    output[m-1][n-1] = input[m-1][n-1];
    // Fill the last row (right to left)
    for(int j=n-2;j>=0;j--){
        output[m-1][j] = output[m-1][j+1] + input[m-1][j];
    }
    // Fill the last column (bottom to top)
    for(int i=m-2;i>=0;i--){
        output[i][n-1] = output[i+1][n-1] + input[i][n-1];
    }
    // Fill the remaining cells
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            output[i][j] = min(output[i+1][j+1],min(output[i+1][j],output[i][j+1])) + input[i][j];
        }
    }
    return output[0][0];
} 
int minCostPath_Memoization(int **input, int m, int n, int i, int j, int **output)
{
    if (i == m - 1 && j == n - 1)
    {
        return input[i][j];
    }
    if (i >= m || j >= n)
    {
        return INT_MAX;
    }
    // Check if output already exists
    if (output[i][j] != -1)
    {
        return output[i][j];
    }
    
    // Recursive Case
    int x = minCostPath_Memoization(input, m, n, i, j + 1, output);
    int y = minCostPath_Memoization(input, m, n, i + 1, j + 1, output);
    int z = minCostPath_Memoization(input, m, n, i + 1, j, output);
    // Calculate the final output
    int a = min(x, min(y, z)) + input[i][j];
    // Save the output for future use
    output[i][j] = a;
    return a;
}
int minCostPath_Memoization(int **input, int m, int n , int i , int j)
{
    int **output = new int*[m];
    for (int i = 0; i < m; i++)
    {
        output[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            output[i][j] = -1;
        }
    }
    return minCostPath_Memoization(input, m, n, i, j, output);
}
int minCostPath(int **input , int m , int n , int i , int j){
    // Base Case
    if(i==m-1 && j==n-1){
        return input[i][j];
    }
    if(i>=m || j>=n){
        return INT_MAX;
    }
    // Recursive Case
    int x = minCostPath(input , m , n , i , j+1);
    int y = minCostPath(input , m , n , i+1 , j+1);
    int z = minCostPath(input , m , n , i+1 , j);
    // Calculate the final output
    int ans = min(x,min(y,z)) + input[i][j];
    return ans;

}
int minCostPath(int **input , int m , int n){
    return minCostPath(input , m , n , 0 , 0);
}

int main(){
    int m,n;
    cin>>m>>n;
    int **input = new int*[m];
    for(int i=0;i<m;i++){
        input[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>input[i][j];
        }
    }
    cout<<minCostPath_Memoization(input , m , n , 0 , 0)<<endl;
    cout<<minCostPath(input , m , n)<<endl;
    cout<<minCostPath_DP(input , m , n)<<endl;

    
    return 0;
}


// INPUT
// 3 3
// 8 10 3
// 2 0 4
// 1 6 5 