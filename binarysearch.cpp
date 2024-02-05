// // // # write a progran in binary search using class
// // # include <iostream>
// // # include <cmath>
// // using namespace std;
// // class binarysearch
// // {
// //     int a[100];
// //     int n;
// //     int key;
// //     int low;
// //     int high;
// //     int mid;
// //     public:
// //         void getdata();
// //         void search();
// //         void display();
// // };
// // void binarysearch::getdata()
// // {
// //     cout<<"Enter the number of elements in the array: ";
// //     cin>>n;
// //     cout<<"Enter the elements of the array: ";
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>a[i];
// //     }
// //     cout<<"Enter the key to be searched: ";
// //     cin>>key;
// // }
// // void binarysearch::search()
// // {
// //     low=0;
// //     high=n-1;
// //     while(low<=high)
// //     {
// //         mid=(low+high)/2;
// //         if(a[mid]==key)
// //         {
// //             cout<<"The key is found at index "<<mid<<endl;
// //             break;
// //         }
// //         else if(a[mid]<key)
// //         {
// //             low=mid+1;
// //         }
// //         else
// //         {
// //             high=mid-1;
// //         }
// //     }
// //     if(low>high)
// //     {
// //         cout<<"The key is not found in the array"<<endl;
// //     }
// // }
// // void binarysearch::display()
// // {
// //     cout<<"The array is: ";
// //     for(int i=0;i<n;i++)
// //     {
// //         cout<<a[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main()
// // {
// //     binarysearch b;
// //     b.getdata();
// //     b.search();
// //     b.display();
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// class binarySearch
// {
//     int a[100];
//     int n;
//     int key;
//     int low;
//     int mid;
//     int high;

//     public:
//     void getdata();
//     void search();
//     void display();

// };
// void binarySearch::getdata()
// {
//     cout<<"Enter a number of elements in this array: ";
//     cin>>n;
//     cout<<"Enter a elements of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"The Key is to be Search: ";
//     cin>>key;
    
// }
// void binarySearch::search()
// {
//     low=0;
//     high=n-1;
//     while (low<=high)
//     {
//         mid=low+high/2;
//         if (a[mid]==key)
//         {
//             cout<<"The Key is found at index "<<mid<<endl;
//             break;
           
//         }
//         else if (a[mid]<key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid -1;
    
//         }
        
        
//     }
//     if (low>high)
//     {
//         cout<<"The Key is not found in this array";
//     }
    
    

// };
// void binarySearch::display(){
//     cout<<"The array is: ";
//     for(int i = 0; i < n; i++)
//     {
//        cout<<a[i]<<" ";
//     }
//     cout<<endl;
    

// }



// int main(){
//     binarySearch b;
//     b.getdata();
//     b.search();
//     b.display();
    
//     return 0;
// }





// # write a program to difference sum of even and sum of odd numbers in an array
# include <iostream>
# include <cmath>
using namespace std;
class difference
{
    int a[100];
    int n;
    int evensum;
    int oddsum;
    public:
        void getdata();
        void search();
        void display();
};
void difference::getdata()
{
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void difference::search()
{
    evensum=0;
    oddsum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evensum=evensum+a[i];
        }
        else
        {
            oddsum=oddsum+a[i];
        }
    }
    cout<<"The difference between the sum of even and odd numbers is: "<<evensum-oddsum<<endl;
}
void difference::display()
{
    cout<<"The array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    difference d;
    d.getdata();
    d.search();
    d.display();
    return 0;
}
