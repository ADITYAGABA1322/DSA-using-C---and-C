//  Stack using Array

// #include <iostream>
// #include <climits>
// using namespace std;
// class StackUsingArray
// {
//     int *data;
//     int nextIndex;
//     int capacity;

// public:
//     StackUsingArray(int totalSize)
//     {
//         data = new int[totalSize];
//         nextIndex = 0;
//         capacity = totalSize;
//     }
//     // return the number of elements present in my stack
//     int size()
//     {
//         return nextIndex;
//     }
//     bool isEmpty()
//     {
//         if (nextIndex == 0)
//             return true;
//         else
//             return false;
//         return nextIndex == 0;
//     }
//     // insert element
//     void push(int element)
//     {
//         if (nextIndex == capacity)
//         {
//             cout << "Stack full" << endl;
//             return;
//         }
//         data[nextIndex] = element;
//         nextIndex++;
//     }
//     // delete element
//     int pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty" << endl;
//             return INT_MIN;
//         }
//         nextIndex--;
//         return data[nextIndex];
//     }
//     int top()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty" << endl;
//             return INT_MIN;
//         }
//         return data[nextIndex - 1];
//     }
// };

// int main()
// {
//     StackUsingArray s(4);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     cout << s.top() << endl;
//     cout << s.pop() << endl;
//     cout << s.pop() << endl;

//     cout << s.pop() << endl;
//     cout << s.size() << endl;
//     cout << s.isEmpty() << endl;
// }

// Dynamic Stack

#include<iostream>
using namespace std;
// class StackUsingArray{
//     int *data;
//     int nextIndex;
//     int capacity;

//     public:
//     StackUsingArray(){
//         data = new int[4];
//         nextIndex=0;
//         capacity=4 ;
//     }

//     int size(){
//         return nextIndex;
//     }
//     bool isEmpty(){
//         if (nextIndex==0)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//         return nextIndex==0;

//     }
//     void push(int element){
//         if (nextIndex == capacity)
//         {
//             int *newData = new int[2 * capacity];
//              for (int i = 0; i < capacity; i++)
//              {
//                  newData[i] = data[i];
//              }
//              capacity *= 2;
//              delete[] data;
//              data =newData;

//         //    cout<<"Stack is full"<<endl;
//         //    return;
//         }
//         data[nextIndex] =element;
//         nextIndex++;

//     }
//     int pop(){
//         if (isEmpty())
//         {
//            cout<<"Stack is Empty"<<endl;
//            return INT_MIN;
//         }
//         nextIndex--;
//         return data[nextIndex];
//     }
//     int top(){
//         if (isEmpty())
//         {
//          cout<<"Stack is Empty"<<endl;
//          return INT_MIN;
//         }
//         return data[nextIndex-1];

//     }

// };

class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
    StackUsingArray(){
        data = new int[4];
        nextIndex = 0;
        capacity = 4;

    }

    int size(){
        return nextIndex == 0;
    }
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }
        else
        return false;
        return nextIndex == 0;

    }
    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *=2;
            delete[] data;
            data = newData;

            

        }
        data[nextIndex] = element;
        nextIndex++;

    }

    int pop(){
        if (isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
        

    }
    int top(){
        if (isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
        

    }
};
int main(){

    StackUsingArray s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}

// StackUsing Template
// #include <iostream>
// using namespace std;
// template<typename T>
// class StackUsingArray
// {

//     T *data;
//     int nextIndex;
//     int capacity;

//     public:
//     StackUsingArray(){
//         data = new T[4];
//         nextIndex = 0;
//         capacity = 4;
//     }

//     int size(){
//         return nextIndex;
//     }

//     bool isEmpty(){
//         if (nextIndex==0)
//         {
//            return true;
//         }
//         else
//         {
//             return false;
//         }
//         return nextIndex==0;

//     }

//     void push(T element){
//         if (nextIndex == capacity)
//         {
//             T *newData = new T[2 *capacity];
//             for (int i = 0; i < capacity; i++)
//             {
//                newData[i] = data[i];
//             }
//             capacity *= 2;
//             delete[] data;
//             data =newData;

//         }
//         data[nextIndex] = element;
//         nextIndex++;
//     }

//     // T pop(){
//     //     if (isEmpty())
//     //     {
//     //        cout<<"Stack is Empty"<<endl;
//     //        return INT_MIN;
//     //     }
//     //     nextIndex--;
//     //     return data[nextIndex];

//     // }
//     // T top(){
//     //     if(isEmpty()){
//     //         cout<<"Stack is Empty"<<endl;
//     //         return INT_MIN;
//     //     }
//     //     return data[nextIndex-1];
//     // }
//    T pop(){
//     if (isEmpty())
//     {
//         cout<<"Stack is Empty"<<endl;
//         return 0;
//     }
//     nextIndex--;
//     return data[nextIndex];

//    }
//    T top(){
//     if (isEmpty())
//     {
//        cout<<"Stack is Empty"<<endl;
//        return 0;
//     }
//     return data[nextIndex-1];
//    }
// };

// int main()
// {
//     StackUsingArray<char> s;
//     // s.push(10);
//     // s.push(20);
//     // s.push(30);
//     // s.push(40);
//     // s.push(50);
//     s.push(100);
//     s.push(101);
//     s.push(102);
//     s.push(103);
//     s.push(104);

//     cout<<s.top()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.isEmpty()<<endl;

//     return 0;
// }

// reverse a stack using recursion
//  #include <iostream>
//  #include <stack>
//  using namespace std;
//  void insertAtBottom(stack<int> &s, int element){
//      if (s.empty())
//      {
//          s.push(element);
//          return;
//      }
//      int topElement = s.top();
//      s.pop();
//      insertAtBottom(s,element);
//      s.push(topElement);
//  }
//  void reverseStack(stack<int> &s){
//      if (s.empty())
//      {
//          return;
//      }
//      int topElement = s.top();
//      s.pop();
//      reverseStack(s);
//      insertAtBottom(s,topElement);
//  }
//  int main()
//  {
//      stack<int> s;
//      s.push(1);
//      s.push(2);
//      s.push(3);
//      s.push(4);
//      s.push(5);
//      reverseStack(s);
//      while (!s.empty())
//      {
//          cout<<s.top()<<endl;
//          s.pop();
//      }

//     return 0;
// }

// reverse a stack
//  #include <iostream>
//  #include <stack>
//  using namespace std;
//  void reverseStack(stack<int> &s){
//      if (s.empty())
//      {
//          return;
//      }
//      int topElement = s.top();
//      s.pop();
//      reverseStack(s);
//      s.push(topElement);
//  }
//  int main()
//  {
//      stack<int> s;
//      s.push(1);
//      s.push(2);
//      s.push(3);
//      s.push(4);
//      s.push(5);
//      reverseStack(s);
//      while (!s.empty())
//      {
//          cout<<s.top()<<endl;
//          s.pop();
//      }

//     return 0;
// }
