#include<iostream>
using namespace std;
int fibo_3(int n){
   int *ans = new int[n+1];             // Dynamic Programming -> Bottom Up Approach(Iterative)
    ans[0] = 0;                         // n+1 size array                                        // 3.)    Best Approach
    ans[1] = 1;                        // Time Complexity : O(n)    
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}
int fibo(int n){
    if (n==0 || n==1)       // 2^n size array 
    {                       // Time Complexity : O(2^n) .                                    //1.)
        return n;           // Brute Force
    }
    int a  = fibo(n-1);
    int b = fibo(n-2);
    return a+b;
}
int fibo_helper(int n , int *ans){  // Memoization  -> Top Down Approach(Recursive)
    if(n<=1){                           // n+1 size array                                // 2.)
        return n;                   // Time Complexity change to O(2^n)-> O(n)
    }
    // Check if output already exists
    if(ans[n]!=-1){
        return ans[n];
    }
    // Calculate output
    int a = fibo_helper(n-1,ans);
    int b = fibo_helper(n-2,ans);
    // Save output for future use
    ans[n] = a+b;
    // Returm the final output
    return ans[n];

}
int fibo_2(int n){
    int *ans = new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i] = -1;
    }
    return fibo_helper(n , ans);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    cout<<fibo_2(n)<<endl;
    cout<<fibo_3(n)<<endl;
    return 0;
    
}

#include<iostream>
using namespace std;
int fibo(int n){
    if (n==0 || n==1)
    {
        return  n;
    }
    int a = fibo(n-1);
    int b = fibo(n-2);

    return a+b; 
    
}
int fibo_helper(int n , int *ans){
    if (n<=1)
    {
        return n;
    }
    int a = fibo_helper(n-1 ,ans);
    int b = fibo_helper(n-2 ,ans);
    ans[n] = a+b;
    return ans[n];
    
}
int fibo_2(int n){
    int *ans = new int[n+1];
    for (int i = 0; i <=n; i++)
    {
        ans[i] = -1;
    }
    return fibo_helper(n ,ans);
}
int fibo_3(int n){
    int *ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
    
    
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
   cout<<fibo_2(n)<<endl;
   cout<<fibo_3(n)<<endl;
    
    return 0;
}


