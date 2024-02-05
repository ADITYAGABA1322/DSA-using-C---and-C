#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int fact=1;

 
    if(n<0){
        cout<<"Error Factorial of negative number is not possible";
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"Factorial of "<<n<<" is "<<fact;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// void insert(void){
//     int arr[10];
//     int i;
//     for(i=0;i<10;i++){
//         cout<<"Enter the element "<<i+1<<" : ";
//         cin>>arr[i];
//     }

// }
// void display(void){
//     int arr[10];
//     int i;
//     for(i=0;i<10;i++){
//         cout<<"Element "<<i+1<<" : "<<arr[i]<<endl;
//     }
// }

// int main(){
//     insert();
//     display();
    
    
    
//     return 0;
// }