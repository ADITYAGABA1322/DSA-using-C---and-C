// #include<iostream>
// #include<queue>
// using namespace std;


// void kSortedArray(int input[] , int n , int k ){   // Time complexity for this part = n
//     priority_queue<int> pq; 
//     for (int i = 0; i < k; i++)         // Time complexity for this part =  klogk
//     {
//         pq.push(input[i]);
//     }
//     int j=0;
//     for ( int i = k; i < n; i++)
//     {
//         input[j] = pq.top();
//         pq.pop();                    // Time complexity for this part =   (n-k)logk
//         pq.push(input[i]);
//         j++;

//     }
     
//     while (!pq.empty())
//     {
//         input[j] = pq.top();                 // Time complexity for this part =  klogk

//         pq.pop();
//     }
    
    


// }
// int main(){
//     int input[] = {10 ,12 , 6 , 7 , 9};
//     int k =3;
//     kSortedArray(input , 5 , k);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<input[i]<<" ";                   //     Total Time complexity for this part =  klogk + nlogk - klogk + klogk
//                                              //     Total Time complexity for this part =  (n+k)logk = n>>>k = nlogk = logk is very small;
//     }                                           //  Total Time complexity for this part = O(n)
    
                                     
    
//     return 0;
// }


#include<iostream>
#include<queue>
using namespace std;


void ksortedArray(int input[] , int n , int k){
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
       pq.push(input[i]);
    }
    int j=0;
    for (int i = k; i < n; i++)
    {
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }
    while (!pq.empty())
    {
       input[j] = pq.top();
       pq.pop();
    }
    
    
    
}

int main(){

    int input[] = {10 , 12 , 6 ,7 ,9};
    int k=3;
    ksortedArray(input , 5 , k);
    for (int i = 0; i < 5; i++)
    {
        cout<<input[i]<<" ";
    }
    
    
    return 0;
}