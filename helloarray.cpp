// #Program to print an array.
// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printArray(arr, n);
//     return 0;
// }

// int main(){
//     int arr[10];
//     int n;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"The array is: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// Program to print an array in reverse order.
// #include <iostream>
// using namespace std;
// void printreverseArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[10];
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The array is: ";
//     for (int i = n-1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }

// Program to calculate sum of an array.

// #include<iostream>
// using namespace std;

// int main(){
//         int arr[10];
//     int n;
//     int sum=0;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//         sum=sum+i;
//     }
//     cout<<"The Sum of the array is: "<<sum;
//     return 0;

// }
//# Program to calculate average of an array.

// #include<iostream>
// using namespace std;
// int main(){
//         int arr[10];
//     int n;
//     int sum=0;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//         sum=sum+i;
//     }
//     cout<<"The Sum of the array is : "<<sum<<endl;
//     cout<<"The Average of the array is : "<<sum/n;
//     return 0;

// }

// Program to find the largest element of an array.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[10];
//     int max = 0;
//     cout << "Enter the number of elements int this array: ";
//     cin >> n;
//     cout << "Enter the elements of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<"The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//         if (arr[i]>max)
//         {
//             max=arr[i];
//         }
        
//     }
//     cout<<"The largest element of the array: "<<max;
    
    

//     return 0;
// }

//Program to find the second largest element of an array.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int arr[10];
//     int max = 0;
//     int secondmax = 0;
//     cout << "Enter the number of elements int this array: ";
//     cin >> n;
//     cout << "Enter the elements of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<"The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//         if (arr[i]>max)
//         {
//             secondmax=max;
//             max=arr[i];
//         }
//         else if(arr[i]>secondmax)
//         {
//             secondmax=arr[i];
//         }
//     }
//     cout<<"The second largest element of the array: "<<secondmax;
    
    

//     return 0;
// }






















// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[10];
//     int min = 0;
//     cout << "Enter the number of elements int this array: ";
//     cin >> n;
//     cout << "Enter the elements of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<"The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//         if (arr[i]<min)
//         {
//            arr[i]=min;
//         }
        
//     }
//     cout<<"The smallest element of the array: "<<min;
    
    

//     return 0;
// }

//# Program to find the smallest element of an array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[10];
    int min = 0;
    cout << "Enter the number of elements int this array: ";
    cin >> n;
    cout << "Enter the elements of this array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<"The smallest element of the array: "<<min;
    
    

    return 0;
}
