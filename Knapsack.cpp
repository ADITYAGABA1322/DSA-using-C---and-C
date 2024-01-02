#include<iostream>
using namespace std;
int knapsack_DP(int *weight , int *value , int n , int maxWeight){   // Time Complexity : O(n*maxWeight) , Space Complexity : O(n*maxWeight)
    int **ans = new int*[n+1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = new int[maxWeight+1];
    }
    for (int i = 0; i <= n; i++)
    {
        ans[i][0] = 0;
    }
    for (int i = 0; i <= maxWeight; i++)
    {
        ans[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxWeight; j++)
        {
            ans[i][j] = ans[i-1][j];
            if (weight[i-1]<=j)
            {
                int val = value[i-1] + ans[i-1][j-weight[i-1]];
                if (val>ans[i][j])
                {
                    ans[i][j] = val;
                }
                
            }
            
        }
        
    }
    return ans[n][maxWeight];
    
}
int knapsack_mem(int *weights , int *values , int n , int maxWeight , int **output){ // Time Complexity : O(n*maxWeight) , Space Complexity : O(n*maxWeight)
    if (n==0 || maxWeight==0)
    {
        return 0;
    }
    if (output[n][maxWeight] != -1)
    {
        return output[n][maxWeight];
    }
    int ans;
    if (weights[0]>maxWeight)
    {
        ans = knapsack_mem(weights+1 , values+1 , n-1 , maxWeight , output);
    }
    else{
        int x = knapsack_mem(weights+1 , values+1 , n-1 , maxWeight , output);
        int y = values[0] + knapsack_mem(weights+1 , values+1 , n-1 , maxWeight-weights[0] , output);
        ans = max(x , y);
    }
    output[n][maxWeight] = ans;
    return ans;
}
int knapsack_mem(int *weights , int *values , int n , int maxWeight){
    int **output = new int*[n+1];
    for (int i = 0; i <= n; i++)
    {
        output[i] = new int[maxWeight+1];
        for (int j = 0; j <= maxWeight; j++)
        {
            output[i][j] = -1;
        }
        
    }
    return knapsack_mem(weights , values , n , maxWeight , output);
}

int knapsack(int *weights , int *values , int n , int maxWeight){   // Timr Complexity = O(2^n) , Space Complexity = O(n)
    // Base Case
    if (n==0 || maxWeight == 0)
    {
        return 0;
    }
    
    if (weights[0]>maxWeight)
    {
        return knapsack(weights+1 , values+1 , n-1 , maxWeight);
    }
    // Recursive Case
    int x = knapsack(weights+1 , values+1 , n-1 , maxWeight-weights[0]) + values[0];
    int y = knapsack(weights+1 , values+1 , n-1 , maxWeight);
    
    return max(x,y);

    
    
}

int main(){
    int n;
    int weights[] = {5 , 1 , 8 , 9 , 2};
    int values[] = {4 , 10 , 2 , 3 , 1};
    int W = 15;
    cout<<knapsack(weights , values , 5 , W)<<endl;
    cout<<knapsack_mem(weights , values , 5 , W)<<endl;
    cout<<knapsack_DP(weights , values , 5 , W)<<endl;
    return 0;
}