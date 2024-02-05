#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
           largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n){
  for(int i=n/2-1;i>=0;i--){
    heapify(arr,n,i);
  }
  for(int i=n-1;i>0;i--){
    swap(arr[0],arr[i]);
    heapify(arr,i,0);
  }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a,b;
    cout<<"Enter the number of elements"<<endl;
    cin>>a;
    int arr[a];
    cout<<"Enter the elements "<<endl;
    for(b=0;b<a;b++){
        cin>>arr[b];
    } 
    cout<<"The elements are"<<endl;
    for(b=0;b<a;b++){
        cout<<arr[b]<<endl;
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    display(arr,n);
}
