// #write a program to delete position using array
// #include<iostream>
// using namespace std;
// void deletePosition(int arr[], int n, int pos){
//     for(int i=pos;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
// }
// int main(){
//     int arr[10];
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int pos;
//     cout<<"Enter the position to be deleted: ";
//     cin>>pos;
//     deletePosition(arr,n,pos);
//     cout<<"The array after deletion is: ";
//     for(int i=0;i<n-1;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #write a program to delete a particular element using array
// #include<iostream>
// using namespace std;
// void deleteElement(int arr[], int n, int ele){
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele){
//             for(int j=i;j<n-1;j++){
//                 arr[j]=arr[j+1];
//             }
//         }
//     }
// }
// int main(){
//     int arr[10];
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ele;
//     cout<<"Enter the element to be deleted: ";
//     cin>>ele;
//     deleteElement(arr,n,ele);
//     cout<<"The array after deletion is: ";
//     for(int i=0;i<n-1;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void insert(int arr[], int n, int pos, int ele){
//     for(int i=n-1;i>=pos;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[pos]=ele;
// }
// int main(){
//     int arr[10];
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int pos;
//     cout<<"Enter the position to be inserted: ";
//     cin>>pos;
//     int ele;
//     cout<<"Enter the element to be inserted: ";
//     cin>>ele;
//     insert(arr,n,pos,ele);
//     cout<<"The array after insertion is: ";
//     for(int i=0;i<n+1;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     string fullName;
//     cout<<"Type your full name: ";
//     getline(cin,fullName);
//     cout<<"Your full name is: "<<fullName<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// bool ships[4][4]={
//     {0, 1, 1, 0},
//     {0, 0, 0, 0},
//     {0, 0, 1, 0},
//     {0, 0, 1, 0}
//     };

// int hits = 0;
// int numberofTurns = 0;

// while (hits < 4)
// {
//   int row, column;
//   cout << "Selecting the co-ordinates" << endl;
//   cout << "chosse a row number between 0 and 3: " << endl;
//   cin >> row;
//   cout << "choose a column number between 0 and 3: " << endl;
//   cin >> column;
//   if (ships[row][column])
//   {
//     ships[row][column] = 0;
//     hits++;
//     cout<<" Hit! "<<(4-hits)<<" ships left to sink"<<endl;
//   }
//   else
//   {
//     cout << "Miss" << endl;
//   }
//   numberofTurns++;
// }
// cout << "Victory!\n";
// cout << "You won in " << numberofTurns << " turns";
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   // We put "1" to indicate there is a ship.
//   bool ships[4][4] = {
//     { 0, 1, 1, 0 },
//     { 0, 0, 0, 0 },
//     { 0, 0, 1, 0 },
//     { 0, 0, 1, 0 }
//   };

//   // Keep track of how many hits the player has and how many turns they have played in these variables
//   int hits = 0;
//   int numberOfTurns = 0;

//   // Allow the player to keep going until they have hit all four ships
//   while (hits < 4) {
//     int row, column;

//     cout << "Selecting coordinates\n";

//     // Ask the player for a row
//     cout << "Choose a row number between 0 and 3: ";
//     cin >> row;

//     // Ask the player for a column
//     cout << "Choose a column number between 0 and 3: ";
//     cin >> column;

//     // Check if a ship exists in those coordinates
//     if (ships[row][column]) {
//       // If the player hit a ship, remove it by setting the value to zero.
//       ships[row][column] = 0;

//       // Increase the hit counter
//       hits++;

//       // Tell the player that they have hit a ship and how many ships are left
//       cout << "Hit! " << (4-hits) << " left.\n\n";
//     } else {
//       // Tell the player that they missed
//       cout << "Miss\n\n";
//     }

//     // Count how many turns the player has taken
//     numberOfTurns++;
//   }

//   cout << "Victory!\n";
//   cout << "You won in " << numberOfTurns << " turns";

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   bool ships[4][4] = {
//       {0, 1, 1, 0},
//       {0, 0, 0, 0},
//       {0, 0, 1, 0},
//       {0, 0, 1, 0}

//   };
//   int hits = 0;
//   int numberofTurns = 0;
//   while (hits < 4)
//   {
//     cout << "Selecting the co=ordinates"<<endl;
//     int row, column;
//     cout << "choose a row number between 0 and 3: ";
//     cin >> row;
//     cout << "Choose a column number between 0 and 3: ";
//     cin >> column;
//     if (ships[row][column])
//     {
//       ships[row][column] = 0;
//       hits++;
//       cout << "Hits! " << (4 - hits) << " ships left to sink" << endl;
//     }
//     else
//     {
//       cout << "Miss" << endl;
//     }
//   }
//   cout << "Victory" << endl;
//   cout << "You Won is" << numberofTurns << "turns";
// }
// # write a program prints a prime number and its sum of digits
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int sum=0;
//     for(int i=2;i<=n;i++)
//     {
//         int flag=0;
//         for(int j=2;j<=i/2;j++)
//         {
//             if(i%j==0)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0)
//         {
//             cout<<i<<" ";
//             sum=sum+i;
//         }
//     }
//     cout<<"\nThe sum of digits of prime numbers is: "<<sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter number of elements: ";
//   cin >> n;
//   int sum = 0;
//   for (int i = 2; i <= n; i++)
//   {
//     int flag = 0;
//     for (int j = 2; j<=i/2; j++)
//     {
//       if(i%j==0){
//       flag = 1;
//       break;
//     }
//     }
//     if (flag == 0)
//     {
//       cout<<i<<" ";
//       sum = sum + i;
//     }
//   }
//   cout << "Your Sum of Prime Number is: " << sum;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// void Insert(int arr[], int n, int pos, int ele)
// {
//   for (int i = n - 1; i >= pos; i--)
//   {
//     arr[i + 1] = arr[i];
//   }
//   arr[pos] = ele;
// }
// int main()
// {
//   int arr[10];
//   int n, pos;
//   cout << "Enter the number of element in this array: ";
//   cin >> n;
//   cout << "Enter the element of this array: ";
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   cout << "Enter the position of element to be inserted: ";
//   cin >> pos;

//   cout << "Enter the element to be inserted: ";
//   int ele;
//   cin >> ele;
//   Insert(arr, n, pos, ele);
//   for (int i = 0; i < n + 1; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     int*arr = new int[n];
//     cout<<" enter the element of array "<<endl;
//     for (int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int num;
//     int pos;
//     cout<<"enter element to be inserted"<<endl;
//     cin>>num;
//     cout<<"enter position of element to be inserted"<<endl;
//     cin>>pos;

//     for ( int i=n;i>=pos;i--)
//     {
//         arr[i] = arr[i-1];

//     }
//     arr[pos] = num;

//     for(int i = 0;i<n+1;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include<string>
// #include<list>
// using namespace std;
// int main(){
//     list<string> l;
//     string s;
//     cout<<"enter the number of elements"<<endl;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>s;
//         l.push_back(s);
//     }
//     cout<<"enter the element to be searched"<<endl;
//     string s1;
//     cin>>s1;
//     for(auto it=l.begin();it!=l.end();it++)
//     {
//         if(*it==s1)
//         {
//             cout<<"element found"<<endl;
//             break;
//         }
//         else
//         {
//             cout<<"element not found"<<endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// #include<string>
// #include<list>
// using namespace std;
// int main(){
//     list<string> l;
//     string s;
//     cout<<"enter the number of elements"<<endl;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>s;
//         l.push_back(s);
//     }
//     cout<<"enter the element to be searched"<<endl;
//     string s1;
//     cin>>s1;
//     for(auto it=l.begin();it!=l.end();it++)
//     {
//         if(*it==s1)
//         {
//             cout<<"element found"<<endl;
//             break;
//         }
//         else
//         {
//             cout<<"element not found"<<endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<list>
// using namespace std;
// int main(){
//   list<string>l;
//   string s;
//   cout<<"Enter the size of this array: ";
//   int n;
//   cin>>n;
//   for (int i = 0; i < n; i++)
//   {
//     cin>>s;
//     l.push_back(s);

//   }
//   cout<<"Enter the element to be searched: ";
//   string s1;
//   cin>>s1;
//   for (auto it = l.begin(); it!=l.end() ; it++)
//   {
//     if (*it==s1)
//     {
//        cout<<"element found "<<endl;
//        break;
//     }
//     else
//     {
//       cout<<"element not found"<<endl;
//     }

//   }
//   return 0;

// }

// #include <iostream>
// #include <string>
// #include <list>
// using namespace std;
// int main()
// {
//   list<string> l;
//   string s;
//   cout << "Enter the size of array: ";
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> s;
//     l.push_back(s);
//   }
//   cout << "Enter the element to be searched: ";
//   string s1;
//   cin >> s1;
//   for (auto it = l.begin(); it != l.end(); it++)
//   {
//     if (*it == s1)
//     {
//       cout << "Element found"<<endl;
//       break;
//     }
//     else
//     {
//       cout << "Element not found"<<endl;
//     }
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,k,ans=-1;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of array"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter element to be searched"<<endl;
//     cin>>k;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==k)
//         {
//             ans=i;
//             break;
//         }
//     }
//     if(ans!=-1)
//     cout<<"The element "<<k<<" is present at index "<<ans;
//     else
//     cout<<"The element "<<k<<" is not there in the array";
//     return 0;
// }

// # write a program to find the element in the array and return the index of the element

// # write a pragram to find the sum of all the elements of an array

// Calculate remainder multiplicof array m 0<m<20 after division with number in the range 0<n<20
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int n,m,ans=0;
//      cout<<"Enter the number of elements in the array"<<endl;
//      cin>>n;
//      int arr[n];
//      cout<<"Enter the elements of the array"<<endl;
//      for(int i=0;i<n;i++)
//      {
//          cin>>arr[i];
//      }
//      cout<<"Enter the number to be divided with"<<endl;
//      cin>>m;
//      for(int i=0;i<n;i++)
//      {
//          ans=ans+arr[i];
//      }
//      cout<<"The sum of all the elements of the array is "<<ans;
//      return 0;
//  }
//  C++ program to find
//  remainder when all
//  array elements are
//  multiplied.

 //Calculate remainder multiplicof array m 0<m<20 after division with number in the range 0<n<20
    #include<iostream>
    using namespace std;
    int main()
    {
        int n,m,ans=0;
        cout<<"Enter the number of elements in the array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the number to be divided with"<<endl;
        cin>>m;
        for(int i=0;i<n;i++)
        {
            ans=ans+arr[i];
        }
        cout<<"The sum of all the elements of the array is "<<ans;
        return 0;
    }