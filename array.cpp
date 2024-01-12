// // //# write a program to difference sum of even and sum of odd numbers in an array

// #include<iostream>
// using namespace std;
// class difference
// {
//     int *a;
//     int n;
//     int evensum;
//     int oddsum;
//     public:
//      difference(int n)
//     {
//         this->n=n;
//         a=new int[n];
//     }
//         void getdata();
//         void search();
//         void display();
// };
// void difference::getdata()
// {
//     //cout<<"Enter the number of elements in the array: ";
//     //cin>>n;
//     //cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
// }
// void difference::search()
// {
//     evensum=0;
//     oddsum=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]%2==0)
//         {
//             evensum=evensum+a[i];
//         }
//         else
//         {
//             oddsum=oddsum+a[i];
//         }
//     }
//     cout<<"The difference between the sum of even and odd numbers is: "<<evensum-oddsum<<endl;
// }
// void difference::display()
// {
//     //cout<<"The array is: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     difference d(n);
//     d.getdata();
//     d.display();
//     d.search();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class difference
// {
//     int *a;
//     int n;
//     public:
//     difference(int n)
//     {
//         this->n=n;
//         a=new int[n];
//     }
//     void getdata()
//     {
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//     }
//     void display()
//     {
//         for(int i=0;i<n;i++)
//         {
//             cout<<a[i]<<" ";
//         }
//     }
//     void diff()
//     {
//         int sum1=0,sum2=0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]%2==0)
//             {
//                 sum1=sum1+a[i];
//             }
//             else
//             {
//                 sum2=sum2+a[i];
//             }
//         }
//         cout<<"difference is "<<sum1-sum2;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     difference d(n);
//     d.getdata();
//     d.display();
//     d.diff();
//     return 0;
// }

// #write a program to find min , second min , second max ,max

// #include<iostream>
// using namespace std;
// class difference
// {
//     int a[100];
//     int n;
//     int min;
//     int secondmin;
//     int secondmax;
//     int max;
//     public:
//         void getdata();
//         void search();
//         void display();
// };
// void difference::getdata()
// {
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
// }
// void difference::search()
// {
//     min=a[0];
//     max=a[0];
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]<min)
//         {
//             secondmin=min;
//             min=a[i];
//         }
//         else if(a[i]<secondmin)
//         {
//             secondmin=a[i];
//         }
//         if(a[i]>max)
//         {
//             secondmax=max;
//             max=a[i];
//         }
//         else if(a[i]>secondmax)
//         {
//             secondmax=a[i];
//         }
//     }
//     cout<<"The minimum element is: "<<min<<endl;
//     cout<<"The second minimum element is: "<<secondmin<<endl;
//     cout<<"The second maximum element is: "<<secondmax<<endl;
//     cout<<"The maximum element is: "<<max<<endl;
// }
// void difference::display()
// {
//     cout<<"The array is: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// int main()
// {
//     difference b;
//     b.getdata();
//     b.search();
//     b.display();
//     return 0;
// }

// # write a program to find the sum of all the elements of the array

// #include<iostream>
// using namespace std;
// void sum(){
//     int arr[100];
//     int n;
//     int sum=0;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         sum=sum+arr[i];
//     }
//     cout<<"The sum of all the elements of the array is: "<<sum<<endl;
// }

// int main(){

//     sum();

//     return 0;
// }

// reverse an integer
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int reverse(int x) {
//         long long int rev=0;
//         while(x!=0){
//             rev=rev*10+x%10;
//             x=x/10;
//         }
//         if(rev>INT_MAX || rev<INT_MIN){
//             return 0;
//         }
//         return rev;
//     }
// };

// int main(){
//     Solution s;
//     int x;
//     cin>>x;
//     cout<<s.reverse(x)<<endl;
//     return 0;
// }

// left rotate an array using vector
//  #include<iostream>
//  #include<vector>
//  using namespace std;

// class Solution {
// public:
//     vector<int> rotateLeft(vector<int> arr, int d) {
//         int n=arr.size();
//         vector<int> v;
//         for(int i=d;i<n;i++){
//             v.push_back(arr[i]);
//         }
//         for(int i=0;i<d;i++){
//             v.push_back(arr[i]);
//         }
//         return v;
//     }
// };

// int main(){
//     Solution s;
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int d;
//     cin>>d;
//     vector<int> v=s.rotateLeft(arr,d);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void leftrotate(int arr[],int n,int d){
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=0;i<d;i++){
//         arr[n-d+i]=temp[i];
//     }
// }

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[100];
//     int n;
//     int d;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter the number of elements to be rotated: ";
//     cin>>d;
//     leftrotate(arr,n,d);
//     printarray(arr,n);
//     return 0;
// }

// second largest element in an array
//  #include<iostream>
//  using namespace std;
//  void secondlargest(int arr[],int n){
//      int max=arr[0];
//      int secondmax=arr[0];
//      for(int i=0;i<n;i++){
//          if(arr[i]>max){
//              secondmax=max;
//              max=arr[i];
//          }
//          else if(arr[i]>secondmax){
//              secondmax=arr[i];
//          }
//      }
//      cout<<"The second largest element in the array is: "<<secondmax<<endl;
//  }
//  int main(){
//      int arr[100];
//      int n;
//      cout<<"Enter the number of elements in the array: ";
//      cin>>n;
//      cout<<"Enter the elements of the array: ";
//      for(int i=0;i<n;i++)
//      {
//          cin>>arr[i];
//      }
//      secondlargest(arr,n);
//      return 0;
// }

// check arrayrotation
//  #include<iostream>
//  using namespace std;
//  // void checkrotation(int arr[],int n){
//  //     int min=arr[0];
//  //     int minindex;
//  //     for(int i=0;i<n;i++){
//  //         if(arr[i]<min){
//  //             min=arr[i];
//  //             minindex=i;
//  //         }
//  //     }
//  //     cout<<"The array is rotated by: "<<minindex<<" times"<<endl;
//  // }
//  int checkrotation(int arr[],int n){
//      for (int i = 0; i < n-1; i++)
//      {
//          if (arr[i]>arr[i+1])
//          {
//              return i+1;
//          }

//     }
//     return 0;

// }
// int main(){
//     int arr[100];
//     int n;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<checkrotation(arr,n)<<endl;
//     return 0;
// }

// sort 0 1 2
//  #include<iostream>
//  using namespace std;
//  void sort012(int arr[],int n){
//      int low=0;
//      int mid=0;
//      int high=n-1;
//      while(mid<=high){
//          if(arr[mid]==0){
//              swap(arr[low],arr[mid]);
//              low++;
//              mid++;
//          }
//          else if(arr[mid]==1){
//              mid++;
//          }
//          else{
//              swap(arr[mid],arr[high]);
//              high--;
//          }
//      }
//  }

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[100];
//     int n;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sort012(arr,n);
//     printarray(arr,n);
//     return 0;
// }

// sum of two arrays
//  #include<iostream>
//  using namespace std;
//  void sumofarrays(int *arr , int n , int *arr2 , int m , int *ans){
//     int i = n-1;
//     int j = m-1;
//     int k = max(m,n);
//      int carry = 0;
//      while(i>=0 && j>=0){
//          int sum = arr[i]+arr2[j]+carry;
//          ans[k] = sum%10;
//          carry = sum/10;
//          i--;
//          j--;
//          k--;

//     }
//     while(i>=0){
//         int sum = arr[i]+carry;
//         ans[k] = sum%10;
//         carry = sum/10;
//         i--;
//         k--;
//     }
//     while(j>=0){
//         int sum = arr2[j]+carry;
//         ans[k] = sum%10;
//         carry = sum/10;
//         j--;
//         k--;
//     }
//     ans[0] = carry;
// }
// int main(){
//     int arr1[100];
//     int arr2[100];
//     int n;
//     int m;
//     cout<<"Enter the number of elements in the first array: ";
//     cin>>n;
//     cout<<"Enter the elements of the first array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr1[i];
//     }
//     cout<<"Enter the number of elements in the second array: ";
//     cin>>m;
//     cout<<"Enter the elements of the second array: ";
//     for(int i=0;i<m;i++)
//     {
//         cin>>arr2[i];
//     }
//     int ans[100];
//     sumofarrays(arr1,n,arr2,m,ans);
//     for(int i=0;i<max(n,m)+1;i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }

// push zeroes to end of array
// #include <iostream>
// using namespace std;

// int main()
// {

// 	int t;
// 	cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] != 0)
//             {
//                 swap(arr[i], arr[count]);
//                 count++;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

// // write your code here
// }

//  72 67 89 98 -1
//  98 89 67 72

// write a program in linked list in which reverse and and add data and pop function call in class LinkedList

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// class LinkedList
// {
//     Node *top;

// public:

//     void add(int data)
//     {
//         // Write your code here

//         Node *newNode = new Node(data);
//         if (top == NULL)
//         {
//             top = newNode;
//         }
//         else
//         {
//             Node *temp = top;
//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }

//     }

//     void pop(int pos)
//     {
//         // Write your code here
//     }
//     void reverse(Node *top)
//     {
//         if (top == NULL)
//             return;
//         reverse(top->next);
//         cout << top->data << " ";
//     }
//     void print()
//     {
//         Node *temp = top;
//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     LinkedList *s = new LinkedList();
//     int ele;
//     cin >> ele;
//     while (ele != -1)
//     {
//         s->add(ele);
//         cin >> ele;
//     }

//     s->reverse(0);
//      s->print();

//     return 0;
// }

// OUTPUT
//  1 2 5 7 8
//  23

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum += arr[i];
//     }

//     cout<<sum<<endl;

//     return 0;
// }

//  72 67 89 98 -1
//  98 89 67 72

// reverse using vector
//  #include <iostream>
//  #include <vector>
//  using namespace std;

// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     reverse(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     // for (int i = n - 1; i >= 0; i--)
//     // {
//     //     cout << v[i] << " ";
//     // }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n; i++){
//         cin>>arr[i];
//     }
//     int min = arr[0];
//     for(int i=0; i<n; i++){
//       if(arr[i] < min){

//         min = arr[i];
//       }

//     }
//     cout<<"Min element: "<<min;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n; i++){
//         cin>> arr[i];
//     }
//     int max = arr[0];
//     int sum = 0;
//     for(int i=1;i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];

//         }

//     }
//     cout<<"Max:"<<max<<endl;
//     for(int i=0 ; i<n; i++){
//         if(arr[i]!= max){
//             sum += arr[i];
//         }
//     }
//     cout<<"Sum is:" <<sum;

//     return 0;
// }

// #include<iostream>
// #include<math.h>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
// cin>>n;
// int swappednumber=0;
// vector<int> ans;
// while(n!=0){
//   ans.push_back(n%10);
//   n=n/10;
// }
// swap(ans[0],ans[ans.size()-1]);
// for(int i=0;i<ans.size();i++){
//     swappednumber+=ans[i]*(pow(10,i));
//     }
//     cout<<"swapped numbbbrr: "<<swappednumber<<endl;
//     return 0;
// }

//       1
//     2 3
//   3 4 5
// 4 5 6 7

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n-i){
//       cout<<" ";
//       j++;
//     }
//     int k = i;
//     while(k<=2*i-1){
//       cout<<k;
//       k++;
//     }
//     cout<<endl;
//     i++;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int linearSearch(int *arr ,int n , int x){
//   for(int i=1; i<n; i++){
//     if(arr[i] == x){
//       return i;
//     }
//   }
//   return -1;
// }

// int main(){

//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   int x;
//   cin>>x;
//   cout<<linearSearch(arr,n,x);

//   return 0;
// }

//  #include<iostream>
// using namespace std;

// void bubbleSort(int *arr , int n){
//   for(int i=0; i<n-1; i++){
//     for(int j=0; j<n-i-1; j++){
//       if(arr[j] > arr[j+1]){
//         swap(arr[j],arr[j+1]);
//       }
//     }
//   }
// }

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   bubbleSort(arr,n);
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// quick sort

// #include<iostream>
// using namespace std;

// int partition(int *arr , int s , int e){
//   int i = s-1;
//   int j = s;
//   int pivot = arr[e];
//   for(; j<e; j++){
//     if(arr[j] <= pivot){
//       i++;
//       swap(arr[i],arr[j]);
//     }
//   }
//   swap(arr[i+1],arr[e]);
//   return i+1;
// }

// void quickSort(int *arr , int s , int e){
//   if(s>=e){
//     return;
//   }
//   int p = partition(arr,s,e);
//   quickSort(arr,s,p-1);
//   quickSort(arr,p+1,e);
// }

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   quickSort(arr,0,n-1);
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// k reverse subarray

// input 1 2 3 4 5 and  k = 3

// ouput 3 2 1 5 4

// 5 3
// 1 2 3 4 5

// #include <iostream>
// // #include<array>
// using namespace std;
// int find(int arr[], int k, int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == k)
//       return i;
//   }
//   return -1;
// }
// void solve(int arr[], int k, int n)
// {
//   int index = find(arr, k, n);
//   if(index!=-1){
//   int s = 0;
//   int e = index;
//   while (s <= e)
//   {
//     swap(arr[s++], arr[e--]);
//   }
//   s = index + 1;
//   e = n - 1;
//   while (s <= e)
//   {
//     swap(arr[s++], arr[e--]);
//   }
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int k;
//   cin >> k;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   // for(int i=0;i<n;i++){
//   //   cout<<arr[i]<<" ";
//   // }
//   // cout<<endl;
//   solve(arr, k, n);
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int k;
//   cin >> k;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//    for (int i = k - 1; i >= 0; i--)
//   {

//     cout << arr[i] << " ";
//   }

//   for (int i = n - 1; i >= k; i--)
//   {

//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// there are 4 numbers and caluclate the max time in 24 hr format

// #include<iostream>
// using namespace std;

// int main(){
//   int a,b,c,d;
//   cin>>a>>b>>c>>d;
//   int arr[4] = {a,b,c,d};

//   sort(arr,arr+4);
//   int max = 0;
//   do{
//     int h1 = arr[0]*10 + arr[1];
//     int m1 = arr[2]*10 + arr[3];
//     if(h1<24 && m1<60){
//       int time = h1*60 + m1;
//       if(time>max){
//         max = time;
//       }
//     }
//   }while(next_permutation(arr , arr+4));
//   int h2 = max/60;
//   int m2 = max%60;
//   cout<<h2<<":"<<m2<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool getNextPermutation(int arr[], int n)
// {
//   // Find the largest index i such that arr[i] < arr[i+1]
//   int i = n - 2;
//   while (i >= 0 && arr[i] >= arr[i + 1])
//   {
//     i--;
//   }

//   // If no such index is found, all permutations have been generated
//   if (i < 0)
//   {
//     return false;
//   }

//   // Find the largest index j such that arr[j] > arr[i]
//   int j = n - 1;
//   while (arr[j] <= arr[i])
//   {
//     j--;
//   }

//   // Swap arr[i] and arr[j]
//   std::swap(arr[i], arr[j]);

//   // Reverse the elements from i+1 to the end
//   std::reverse(arr + i + 1, arr + n);

//   return true;
// }

// int main(){
//   int a,b,c,d;
//   cin>>a>>b>>c>>d;
//   int arr[4] = {a,b,c,d};
// Check if any input value is negative
//   if (a < 0 || b < 0 || c < 0 || d < 0)
//   {
//     cout << "Negative values are not valid for representing time in a 24-hour clock." << endl;
//     return 1; // Exit with an error code
//   }

//   sort(arr,arr+4);
//   int max = 0;
//   do{
//     int h1 = arr[0]*10 + arr[1];
//     int m1 = arr[2]*10 + arr[3];
//     if(h1<24 && m1<60){
//       int time = h1*60 + m1;
//       if(time>max){
//         max = time;
//       }
//     }
//   }while(getNextPermutation(arr , 4));
//   if(max == 0){
//     cout<<"NOT POSSIBLE"<<endl;
//   }
//   else{
//     int h2 = max/60;
//     int m2 = max%60;
//     cout<<h2<<":"<<m2<<endl;
//   }
//   return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//   int a, b, c, d;
//   cin >> a >> b >> c >> d;

//   // Check if any input value is negative
//   if (a < 0 || b < 0 || c < 0 || d < 0)
//   {
//     cout << "Negative values are not valid for representing time in a 24-hour clock." << endl;
//     return 1; // Exit with an error code
//   }

//   int arr[] = {a, b, c, d};

//   sort(arr, arr + 4);

//   int maxTime = -1; // Initialize with an invalid time

//   do
//   {
//     int hours = arr[0] * 10 + arr[1];
//     int minutes = arr[2] * 10 + arr[3];

//     if (hours < 24 && minutes < 60)
//     {
//       maxTime = max(maxTime, hours * 60 + minutes);
//     }
//   } while (next_permutation(arr, arr + 4));

//   if (maxTime == -1)
//   {
//     cout << "No valid time" << endl;
//   }
//   else
//   {
//     int maxHours = maxTime / 60;
//     int maxMinutes = maxTime % 60;
//     cout << maxHours << ":" << maxMinutes << endl;
//   }

//   return 0;
// }

#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a < 0 || b < 0 || c < 0 || d < 0)
  {
    cout << "Negative values are not valid for representing time in a 24-hour clock." << endl;
    return 1;
  }
  int arr[] = {a, b, c, d};
  int maxTime = -1;
  sort(arr, arr + 4);
  do
  {
    int h1 = arr[0] * 10 + arr[1];
    int m1 = arr[2] * 10 + arr[3];
    if (h1 < 24 && m1 < 60)
    {
      maxTime = max(maxTime, h1 * 60 + m1);
    }
  } while (next_permutation(arr, arr + 4));
  if (maxTime == -1)
  {
    cout << "NOT POSSIBLE" << endl;
  }
  else
  {
    int h2 = maxTime / 60;
    int m2 = maxTime % 60;
    cout << h2 << ":" << m2 << endl;
  }

  return 0;
}