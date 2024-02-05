
// Max Priority Queue
// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     priority_queue<int> pq;
//     pq.push(16);
//     pq.push(1);
//     pq.push(167);
//     pq.push(7);
//     pq.push(45);
//     pq.push(32);

//     cout<< "Size: "<<pq.size()<<endl;
//     cout<< "Top: "<<pq.top()<<endl;

//     while (!pq.empty())
//     {
//         cout<< pq.top() <<endl;
//         pq.pop();
//     }
    
//     return 0;
// }


// Min Priority Queue
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int , vector<int> , greater<int>  > pq;
    pq.push(100);
    pq.push(21);
    pq.push(7);
    pq.push(165);
    pq.push(78);
    pq.push(4);

    cout<< "Size: "<<pq.size()<<endl;
    cout<< "Empty: "<<pq.empty()<<endl;
    cout<< "Top: "<<pq.top()<<endl;

    while (!pq.empty())
    {
        cout<< pq.top() <<endl;
        pq.pop();
    }
    
    return 0;
}



