// // #write a program for selection sort using class and function
// #include<iostream>
// using namespace std;
// class selection
// {
//     int arr[10];
//     int n;
//     public:
//     void getdata()
//     {
//         cout<<"Enter the number of elements in the array: ";
//         cin>>n;
//         cout<<"Enter the elements of the array: ";
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//     }
//     void display()
//     {
//         cout<<"The array is: ";
//         for(int i=0;i<n;i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
//     void selectionSort()
//     {
//         int min,temp;
//         for(int i=0;i<n-1;i++)
//         {
//             min=i;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[j]<arr[min])
//                 {
//                     min=j;
//                 }
//             }
//             temp=arr[i];
//             arr[i]=arr[min];
//             arr[min]=temp;
//         }
//     }
// };
// int main()
// {
//     selection s;
//     s.getdata();
//     s.display();
//     s.selectionSort();
//     s.display();
//     return 0;
// }
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1 ; j<n; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr[minIndex],arr [i]);
            
        }
        
    }
    
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"The array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}