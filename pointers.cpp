// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     int *p = 0;
//     cout<<p<<endl;

//     cout<<*p<<endl;
//     (*p)++;
//     cout<<*p<<endl;
    
//     return 0;
// }

// array pointer
 
// a[i] = *(a+i) = *(i+a) = i[a]




// #include<iostream>
// using namespace std;

// int main(){
//     int a[10];
//     cout << a << endl;

//     cout<<&a[0]<<endl;

//     a[0] = 5;
//     a[1] = 10;

//     cout<<*a<<endl;
//     cout<<*(a+1)<<endl;

//     int *p = &a[0];
//     cout << a << endl;

//     cout << p << endl;

//     cout << &p << endl;

//     cout << &a << endl;

//     cout << sizeof(a) << endl;

//     cout << sizeof(p) << endl;

//     p=p+1;
//     p=a+1;




//     return 0;
// }

// differnece in pointer in case of array and pointer

 // 1.) Size of array pointer is 8 bytes and size of pointer is 4 bytes
    // 2.) Array pointer is pointing to the first element of the array and pointer is pointing to the address of the pointer variable
// 3.) & operator precedence is different in case of array and pointer


// function pointer

// #include<iostream>
// using namespace std;

// void print(int *p){
//     cout << *p << endl;
    
// }
// void incrementpointer(int *p){
//    p=p+1;
// }
// void increment(int *p){
//     (*p)++;
// }

// int main(){
//     int i = 10;
//     int *p = &i;
//     print(p);
//     cout<<p<<endl;
//     incrementpointer(p);
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     increment(p);
//     cout<<*p<<endl;
// }


// double pointer

// #include<iostream>
// using namespace std;

// void increment1(int** p){
//     p = p+1;

// }

// void increment2(int** p){
//     *p = *p+1;
// }

// void increment3(int** p){
//     **p = **p+1;
// }

// int main(){
//     int i = 10;
//     int *p = &i;
    
//     int **p2 = &p;
//     cout<<p2<<endl;

//     cout<<&p<<endl;
//     cout<<*p2<<endl;

//     cout<<&i<<endl;

//     cout<<i<<endl;
//     cout<<*p<<endl;
//     cout<<**p2<<endl;


// }


// Reference and pass by reference

// #include<iostream>
// using namespace std;

// void increment(int &i){
//     i++;
// }

// // bad practice
// int& f(int n){
//     int a = n;
//     return a;
// }

// // bad practice

// int* f2(int n){
//     int i= 10;
//     return &i;
    
// }

// int main(){
//     int *p = f2(10);

//     int i; 
//     i = 10;
//     int &k1 = f(i);

//     increment(i);
//     cout<<i<<endl;

//     int j =  i ;
    
//     i++;



// }

// Inline and default arguments

// #include<iostream>
// using namespace std;


// inline int max(int a , int b){
//     return a>b?a:b;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int c = max(a,b);

//     int x = 10;
//     int y = 20;
//     int z = max(x,y);



// }

// Default arguments

// #include<iostream>
// using namespace std;

// int sum(int a[] , int size , int si){
//     int ans = 0;
//     for(int i = 0 ; i < size ; i++){
//         ans += a[i];
//     }
//     return ans;
// }

// int sum2(int a, int b , int c = 0 , int d = 0){
//     return a+b+c+d;
// }

// int main(){
//     int a[20];
//     // Input code for a

//     cout<<sum(a,20,0)<<endl;
// }

// constant variables

// #include<iostream>
// using namespace std;

// int main(){

//     // constant int 
//     const int i = 10;
//     int const i2 = 10;

//     // constant refernece from a non constant int 
//     int j =12;
//     const int &k = j;
//     j++;

//     // constant refernece from a constant int 
//     int const j2 = 12;
//     int const &k2 = j2;

//     //refernece from a constant int
//     int const j3 = 123;
//     int &k3 = j3;
//     k3++;
// }


// constant pointer

// #include<iostream>
// using namespace std;

// void g(int const &a){
//     a++;
// }
// void f(const int *p){
    
// }


// int main(){
//     int const i = 10;
//     int const *p = &i;
//     int j = 12;
//     int *p3 = &j;
//     f(p3);
//     g(j);
//     int const *p2 = &j; 
//     cout<<*p2<<endl;
    
//     j++;
//     cout<<*p2<<endl;
    

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i = 10;
//     int j = 21;

//     int const *p = &i;

//     p = &j;

//     int * const p2 = &i;
//     (*p2)++;
//     //p2 = &j;

//     int const * const p3 = &i;
//     //p3 = &j;
//     //(*p3)++;
    


//     return 0;
// }



// Recursion and Arrays

// #include<iostream>
// using namespace std;

// bool is_sorted2(int a[] , int size){
//     if(size == 0 || size == 1){
//         return true;
//     }
// bool isSmallerOutput = is_sorted2(a+1,size-1);
// if(!isSmallerOutput){
//     return false;
// }
// if(a[0] > a[1]){
//     return false;
// }
// else{
//     return true;
// }

// }

// bool is_sorted(int a[] , int size){
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(a[0] > a[1]){
//         return false;
//     }
//     bool isSmallerOutput = is_sorted(a+1,size-1);
//     return isSmallerOutput;
// }

// int main(){
//     int a[20];
//     // Input code for a

//     cout<<is_sorted(a,20)<<endl;
//     cout<<is_sorted2(a,20)<<endl;
// }

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumOperations(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> groupCounts(4, 0); // To store the counts of elements in groups 1, 2, and 3
        
        for (int num : nums) {
            groupCounts[num]++;
        }
        
        // Calculate the total number of elements in the array that need to be moved
        int totalToMove = n - groupCounts[1] - groupCounts[2] - groupCounts[3];
        
        // Calculate the minimum number of operations needed
        int operations = totalToMove + std::min(groupCounts[1], std::min(groupCounts[2], groupCounts[3]));
        
        return operations;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {3, 1, 3, 3, 2, 3, 2, 2, 1};
    
    int result = solution.minimumOperations(nums);
    std::cout << "Minimum Operations: " << result << std::endl;
    
    return 0;
}
