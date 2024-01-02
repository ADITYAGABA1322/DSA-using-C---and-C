// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     // constructor
//     Node(int data)
//     {
//         this->data = data;       
//         this->next = NULL;
//     }
// };

// void insertAthead(Node *&head, int d)
// {
//     // new node create
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node *&tail, int d)
// {
//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void insertAtPosition(Node *&tail, Node *&head, int position, int d)
// {

//     // insert  at start
//     if (position == 1)
//     {
//         insertAthead(head, d);
//         return;
//     }

//     Node *temp = head;
//     int cnt = 1;
//     while (cnt < position)
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     // inserting at last position

//     if (temp->next == NULL)
//     {
//         insertAtTail(tail, d);
//         return;
//     }

//     // creating a node for d

//     Node *nodetoInsert = new Node(d);
//     nodetoInsert->next = temp->next;

//     temp->next = nodetoInsert;
// }

// int main()
// {
//     // created a new node
//     Node *node1 = new Node(10);
//     cout << node1->data << endl;
//     cout << node1->next << endl;

//     // head pointed to node1
//     Node *head = node1;
//     Node *tail = node1;
//     print(head);

//     insertAtTail(tail, 12);
//     print(head);

//     insertAtTail(tail, 15);
//     print(head);

//     insertAtPosition(tail, head, 3, 22);
//     print(head);

//     cout << "head " << head->data << endl;
//     cout << "tail " << tail->data << endl;

//     return 0;
// }

//


// CODING NINJA NOTES

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};


// Node*  takeInput(){

//     int data;
//     cin>>data;
//     Node *head = NULL;

//     while (data != -1)
//     {
//     Node *newNode = new Node(data); 
//     if (head == NULL)
//     {
//        head=newNode;  
//     }
//     else{
//         Node *temp =head;
//         while (temp -> next != NULL)
//         {
//             temp = temp -> next;

//         }
//          temp->next = newNode; 
        
 
//     }
//     cin>>data;
    
   
//     }
//     return head;
    
// }
Node*  takeInput_Better(){

    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
    Node *newNode = new Node(data); 
    if (head == NULL)
    {
       head=newNode;  
       tail=newNode;  
    }
    else{
        tail->next = newNode; 
        tail = tail -> next;
        // OR
        // tail = newNode;
        
 
    }
    cin>>data;
    
   
    }
    return head;
    
}

Node *insertAtHead(Node *head , int i , int data){
   Node *newNode = new Node(data);
   int count = 0;
   Node *temp =head;
   if (i==0)
   {
    newNode->next=head;
    head = newNode;
    return head;
   }
   
   while (temp != NULL && count<i-1)
   {
    temp =temp->next;
    count ++;
   }
   if (temp != NULL)
   {
   Node *a  = temp ->next;
   temp->next =newNode; 
   newNode->next =a; 
    
   } 
   return head;


    
}
 



void print(Node *head){
    
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head =head ->next;
        
    }
    
    //    temp =head;
    //     while (temp != NULL)
    //     {
    //        cout<<temp->data<<" ";
    //        temp =temp ->next;
    //     }
}

// void increment(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         temp->data++;
//         temp=temp->next;
//     }
    
// }

int main()
{
    Node *head = takeInput_Better(); 
    print(head);
    int  i ,data;
    cin>>i>>data;
    head = insertAtHead( head , i ,data);
    print(head);
    // Statistically
    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);
    // n1.next =&n2;
    // Node n3(3); 
    // n2.next=&n3;
    // Node n4(4);
    // n3.next=&n4;
    // Node n5(5);
    // n4.next=&n5;


   
    // print(head);
    
    // Dynamically
    // Node *n3 =new Node(10); 
    // Node *head = &n3;
    // Node *n4 = new Node(20);
    // n3->next = n4;

    return 0;
} 







