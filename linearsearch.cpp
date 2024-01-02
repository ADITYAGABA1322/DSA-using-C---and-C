// // # write a program in linear search
// #include <iostream>
// #include <cmath>
// using namespace std;
// class linearsearch
// {
//     int a[100];
//     int n;
//     int key;
//     int pos;

// public:
//     void getdata();
//     void search();
//     void display();
// };
// void linearsearch::getdata()
// {
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter the key to be searched: ";
//     cin >> key;
// }
// void linearsearch::search()
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             pos = i;
//             break;
//         }
//     }
//     if (pos == -1)
//     {
//         cout << "The key is not found in the array" << endl;
//     }
//     else
//     {
//         cout << "The key is found at index " << pos << endl;
//     }
// }
// void linearsearch::display()
// {
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// class binarysearch
// {
//     int a[100];
//     int n;
//     int key;
//     int low;
//     int high;
//     int mid;

// public:
//     void getdata();
//     void search();
//     void display();
// };
// void binarysearch::getdata()
// {
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter the key to be searched: ";
//     cin >> key;
// }
// void binarysearch::search()
// {
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (a[mid] == key)
//         {
//             cout << "The key is found at index " << mid << endl;
//             break;
//         }
//         else if (a[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     if (low > high)
//     {
//         cout << "The key is not found in the array" << endl;
//     }
// }
// void binarysearch::display()
// {
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     linearsearch l;
//     binarysearch b;
//     int ch;
//     cout << "Enter 1 for linear search and 2 for binary search: ";
//
//     if (ch == 1)
//     {
//         l.getdata();
//         l.search();
//         l.display();
//     }
//     else if (ch == 2)
//     {
//         b.getdata();
//         b.search();
//         b.display();
//     }
//     else
//     {
//         cout << "Invalid choice" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class linearSearch
// {
//     int a[100];
//     int n;
//     int key;
//     int pos;

// public:
//     void getdata();
//     void search();
//     void dispaly();
// };
// void linearSearch::getdata()
// {
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elments of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter the Key is to be searched: ";
//     cin >> key;
// }
// void linearSearch::search()
// {

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             pos = i;
//             break;
//         }
//     }
//     if (pos == -1)
//     {
//         cout << "The key is not found in this array " << endl;
//     }
//     else
//     {
//         cout << "The Key is found at index " << pos << endl;
//     }
// }
// void linearSearch::dispaly()
// {
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// class binarySearch
// {
//     int a[100];
//     int n;
//     int mid;
//     int low;
//     int high;
//     int key;

// public:
//     void getdata();
//     void search();
//     void dispaly();
// };
// void binarySearch::getdata()
// {
//     cout << "Enter the number of element in this array: ";
//     cin >> n;
//     cout << "Enter the element of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter the key is to be searched: ";
//     cin >> key;
// }
// void binarySearch::search()
// {
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (a[mid] == key)
//         {
//             cout << "The key is found at index " << mid << endl;
//             break;
//         }
//         else if (a[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     if (low > high)
//     {
//         cout << "The key is not found in the array" << endl;
//     }
// }
// void binarySearch::dispaly()
// {
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int ch;
//     cout << "Enter 1 for linear search and 2 for binary search: ";
//     cin >> ch;
//     switch (ch)

//     {
//     case 1:
//     {
//         linearSearch l;
//         l.getdata();
//         l.search();
//         l.dispaly();
//         break;
//     }
//     case 2:
//     {
//         binarySearch b;
//         b.getdata();
//         b.search();
//         b.dispaly();
//         break;
//     }

//     default:
//         cout << "Invalid choice" << endl;

//         break;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class linearSearch
// {
//     int a[100];
//     int n;
//     int key;
//     int pos;

// public:
//     void getdata();
//     void search();
//     void display();
// };
// void linearSearch::getdata()
// {
//     cout << "Enter a number of elements in this array: ";
//     cin >> n;
//     cout << "Enter a elements of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter a Key to be Searched: ";
//     cin >> key;
// }
// void linearSearch::search()
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             pos = i;
//             break;
//         }
//     }

//     if (pos == -1)
//     {
//         cout << "The Key is not found in this array ";
//     }
//     else
//     {
//         cout << "The Key is found at index " << pos << endl;
//     }
// }
// void linearSearch::display()
// {
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// class binarySearch
// {
//     int a[100];
//     int n;
//     int key;
//     int low;
//     int mid;
//     int high;

// public:
//     void getdata();
//     void search();
//     void display();
// };
// void binarySearch::getdata()
// {
//     cout << "Enter the number of elements of this array: ";
//     cin >> n;
//     cout << "Enter a elements of this array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter the Key is to be Searched: ";
//     cin >> key;
// }
// void binarySearch::search()
// {
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         mid = low + high / 2;
//         if (a[mid] == key)
//         {
//             cout << "The Key is found at index " << mid << endl;
//             break;
//         }
//         else if (a[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid + 1;
//         }
//     }
//     if (low > high)
//     {
//         cout << "The key is not found in this array";
//     }
// }
// void binarySearch::display()
// {
//     cout << "The array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// // int main()
// // {
// //     int ch;
// //     cout << "Enter 1 for linear Search and 2 for binary Search: ";
// //     cin >> ch;
// //     switch (ch)
// //     {

// //     case 1:
// //     {
// //         linearSearch l;
// //         l.getdata();
// //         l.search();
// //         l.display();
// //         break;
// //     }
// //     case 2:
// //     {
// //         binarySearch b;
// //         b.getdata();
// //         b.search();
// //         b.display();
// //         break;
// //     }

// //     default:
// //         break;
// //     }
// //     return 0;
// // }
// int main()
// {
//     linearSearch l;
//     binarySearch b;
//     int ch;
//     cout << "Enter 1 for linear Search and 2 for binary Search: ";
//     cin >> ch;
//     if (ch == 1)
//     {

//         l.getdata();
//         l.search();
//         l.display();
//     }
//     else if (ch == 2)
//     {

//         b.getdata();
//         b.search();
//         b.display();
//     }
//     else
//     {
//         cout << "Invalid choice" << endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class linearSearch{
//     int a[100];
//     int n;
//     int key;
//     int pos;
// public:
//     void getdata();
//     void search();
//     void display();
// };

// void linearSearch::getdata(){
//     cout<<"Enter a number of elements in this array: ";
//     cin>>n;
//     cout<<"Enter a elements of this array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter a Key to be Searched: ";
//     cin>>key;
// }
// void linearSearch::search(){
//     for(int i=0;i<n;i++){
//         if(a[i]==key){
//             pos=i;
//             break;
//         }
//     }
//     if(pos==-1){
//         cout<<"The Key is not found in this array ";
//     }
//     else{
//         cout<<"The Key is found at index "<<pos<<endl;
//     }
// }
// void linearSearch::display(){
//     cout<<"The array is: ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// class binarySearch{
//     int a[100];
//     int n;
//     int key;
//     int low;
//     int mid;
//     int high;
// public:
//     void getdata();
//     void search();
//     void display();
// };
// void binarySearch::getdata(){
//     cout<<"Enter the number of elements of this array: ";
//     cin>>n;
//     cout<<"Enter a elements of this array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the Key is to be Searched: ";
//     cin>>key;
// }
// void binarySearch::search(){
//     low=0;
//     high=n-1;
//     while(low<=high){
//         mid=low+high/2;
//         if(a[mid]==key){
//             cout<<"The Key is found at index "<<mid<<endl;
//             break;
//         }
//         else if(a[mid]<key){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     if(low>high){
//         cout<<"The key is not found in this array";
//     }
// }
// void binarySearch::display(){
//     cout<<"The array is: ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     linearSearch l;
//     binarySearch b;
//     int ch;
//     cout<<"Enter 1 for linear Search and 2 for binary Search: ";
//     cin>>ch;
//     if(ch==1){
//         l.getdata();
//         l.search();
//         l.display();
//     }
//     else if(ch==2){
//         b.getdata();
//         b.search();
//         b.display();
//     }
//     else{
//         cout<<"Invalid choice";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
class linearSearch
{
    int a[100];
    int n;
    int pos;
    int key;

public:
    void getdata();
    void search();
    void display();
};
void linearSearch::getdata()
{
    cout << "Enter the number of elements in this array: ";
    cin >> n;
    cout << "Enter the elements in this array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Key to be Searched: ";
    cin >> key;
}
void linearSearch::search()
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "The key is not found in this array";
    }
    else
    {
        cout << "The key is found at index: " << pos << endl;
    }
}
void linearSearch::display()
{
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
class binarySearch
{
    int a[100];
    int mid;
    int n;
    int low;
    int high;
    int key;

public:
    void getdata();
    void search();
    void display();
};
void binarySearch::getdata()
{
    cout << "Enter the number of elements in this array: ";
    cin >> n;
    cout << "Enter the elemnts of this array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Key to be searched: ";
    cin >> key;
}
void binarySearch::search()
{
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + high / 2;
        if (a[mid] == key)
        {
            cout << "The Key is found at index: " << mid << endl;
            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        cout << "The Key is not found in this array" << endl;
    }
}
void binarySearch::display()
{
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int ch;
    cout << "Enter 1 for linear Search or 2 for binary Search: ";
    linearSearch l;
    binarySearch b;
    cin >> ch;
    // switch (ch)
    // {
    // case 1:{
    //     linearSearch l;
    //     l.getdata();
    //     l.search();
    //     l.display();

    // }
    //  case 2:{
    //     binarySearch b;
    //     b.getdata();
    //     b.search();
    //     b.display();
    //  }

    // default:

    //     break;
    // }
    if (ch == 1)
    {
        l.getdata();
        l.search();
        l.display();
    }
    else if (ch == 2)
    {
        b.getdata();
        b.search();
        b.display();
    }
    else
    {
        std::cout << "Invalid Choice" << std::endl;
    }
    

    return 0;
}