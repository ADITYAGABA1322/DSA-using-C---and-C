// #include<iostream>
// using namespace std;

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


#include<iostream>
using namespace std;

int minSteps(int n){
    if (n<=1)
    {
        return 0;
    }

    int x = minSteps(n-1);
    int y = INT_MAX;
    int z = INT_MAX;
    if (n%2==0)
    {
        y = minSteps(n/2);
    }
    if (n%3 == 0)
    {
       z = minSteps(n/3);
    }
    int ans = min(x,min(y,z))+1;
    return ans;
    
    
    
    
}

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n)<<endl;
    return 0;
}