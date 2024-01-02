#include<iostream>
#include<queue>
using namespace std;
// template<typename T>
// class BinaryTreeNode
// {
//     public:
//     int data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;
//     BinaryTreeNode(T data)
//     {
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
//     ~BinaryTreeNode()
//     {
//         delete left;
//         delete right;
//     }
// };

template<typename T>
class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(T data){
        this->data=data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter the root data "<<endl;
    cin>>rootData;
    if (rootData==-1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int leftChildData;
        cout<<"Enter a left child of "<<front->data<<endl;
        cin>>leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int>* child =  new   BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
            
        }
        int rightChildData;
        cout<<"Enter the right child of "<<front->data<<endl;
        cin>>rightChildData;
        if (rightChildData != -1)
        {
          BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
          front->right = child;
          pendingNodes.push(child);
        }
        
        
        
    }
    return root;
    

    
    
}


// BinaryTreeNode<int>* takeInputLevelWise()
// {
//     int rootData;
//     cout<<"Enter the root data "<<endl;
//     cin>>rootData;
//     if(rootData==-1)
//     {
//         return NULL;
//     }
//     BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootData);
//     queue<BinaryTreeNode<int>*> pendingNodes;
//     pendingNodes.push(root);
//     while(!pendingNodes.empty())
//     {
//         BinaryTreeNode<int> *front=pendingNodes.front();
//         pendingNodes.pop();
//         int leftChildData;
//         cout<<"Enter the left child of "<<front->data<<endl;
//         cin>>leftChildData;
//         if(leftChildData!=-1)
//         {
//             BinaryTreeNode<int> *child=new BinaryTreeNode<int>(leftChildData);
//             front->left=child;
//             pendingNodes.push(child);
//         }
//         int rightChildData;
//         cout<<"Enter the right child of "<<front->data<<endl;
//         cin>>rightChildData;
//         if(rightChildData!=-1)
//         {
//             BinaryTreeNode<int> *child=new BinaryTreeNode<int>(rightChildData);
//             front->right=child;
//             pendingNodes.push(child);
//         }
//     }
//     return root;
// }

void printTree(BinaryTreeNode<int>* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<";";
    if (root->left != NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if (root->right != NULL)
    {
        cout<<"R"<<root->right->data;
    }
    
    

    
}
// void printTree(BinaryTreeNode<int> *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<":";
//     if(root->left!=NULL)
//     {
//         cout<<"L"<<root->left->data;
//     }
//     if(root->right!=NULL)
//     {
//         cout<<"R"<<root->right->data;
//     }
//     cout<<endl;
//     printTree(root->left);
//     printTree(root->right);
// }


BinaryTreeNode<int> *findNode(BinaryTreeNode<int> *root , int data){
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data==data)
    {
        return root;
    }
    else if (root->data<data)
    {
        return findNode(root->right,data);
    }
    else
    {
        return findNode(root->left,data);
    }
    
    
    
}
// BinaryTreeNode<int>* findNode(BinaryTreeNode<int> *root,int data)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(root->data==data)
//     {
//         return root;
//     }
//    else if (root->data>data)
//     {
//         return findNode(root->left,data);
//     }
//     else
//     {
//         return findNode(root->right,data);
//     }

// }

// void printBetweenK1K2(BinaryTreeNode<int>* root , int k1 , int k2){
//     if (root==NULL)
//     {
//         return;
//     }
//     if (root->data>k1)
//     {
//         printBetweenK1K2(root->left,k1,k2);
//     }
//     if (root->data>=k1 && root->data<=k2)
//     {
//         cout<<root->data<<endl;
//     }
//     if (root->data<=k2)
//     {
//         printBetweenK1K2(root->right,k1,k2);
//     }
    
    
    
    
// }
void printBetweenK1K2(BinaryTreeNode<int>* root , int k1 , int k2){
    if (root==NULL)
    {
       return;
    }
    if (root->data>k1)
    {
        printBetweenK1K2(root->left,k1,k2);
    }
    if (root->data>k1 && root->data<=k2)
    {
        cout<<root->data<<endl;
    }
    if (root->data<=k2)
    {
        printBetweenK1K2(root->right,k1,k2);
    }
    
    
    
    

}
int maximum(BinaryTreeNode<int>* root){
    if (root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,max(maximum(root->left),maximum(root->right)));
    
}
int minimum(BinaryTreeNode<int> *root){
    if (root==NULL)
    {
        return INT_MAX;
    }
    return min(root->data , min(minimum(root->left),minimum(root->right)));
    
}

bool isBST(BinaryTreeNode<int>* root){
    if (root==NULL)
    {
        return true;
    }
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    bool output = (root->data>leftMax) && (root->data<=rightMin) && isBST(root->left) && isBST(root->right);
    return output;
    
}



// int maximum (BinaryTreeNode<int> *root)
// {
//     if(root==NULL)
//     {
//         return INT_MIN;
//     }
//     return max(root->data,max(maximum(root->left),maximum(root->right)));
// }

// int minimum (BinaryTreeNode<int> *root)
// {
//     if(root==NULL)
//     {
//         return INT_MAX;
//     }
//     return min(root->data,min(minimum(root->left),minimum(root->right)));
// }


// bool isBST(BinaryTreeNode<int> *root)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     int leftMax=maximum(root->left);
//     int rightMin=minimum(root->right);
//     bool output=(root->data>leftMax) && (root->data<=rightMin) && isBST(root->left) && isBST(root->right);
//     return output;
// }


class isBSTReturn{
    public:
    int maximum;
    int minimum;
    bool isBST;
};
isBSTReturn isBST2(BinaryTreeNode<int>* root){
    if (root==NULL)
    {
       isBSTReturn output;
       output.maximum=INT_MIN;
       output.minimum=INT_MAX;
       output.isBST = true;
       return output;
    }
    isBSTReturn leftOutput = isBST2(root->left);
    isBSTReturn rightOutput = isBST2(root->right);
    int maximum = max(root->data , max(leftOutput.maximum , rightOutput.maximum));
    int minimum = min(root->data , min(leftOutput.minimum , rightOutput.minimum));
    bool isBSTFinal = (root->data>leftOutput.maximum) && (root->data<=rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;
    isBSTReturn output;
    output.maximum=maximum;
    output.minimum = minimum;
    output.isBST=isBSTFinal;
    return output; 
    
    
    
}

// class IsBSTReturn
// {
//     public:
//     int maximum;
//     int minimum;
//     bool isBST;
// };
// IsBSTReturn isBST2(BinaryTreeNode<int> *root)
// {
//     if(root==NULL)
//     {
//         IsBSTReturn output;
//         output.maximum=INT_MIN;
//         output.minimum=INT_MAX;
//         output.isBST=true;
//         return output;
//     }
//     IsBSTReturn leftOutput=isBST2(root->left);
//     IsBSTReturn rightOutput=isBST2(root->right);
//     int maximum=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
//     int minimum=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
//     bool isBSTFinal=(root->data>leftOutput.maximum) && (root->data<=rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;
//     IsBSTReturn output;
//     output.maximum=maximum;
//     output.minimum=minimum;
//     output.isBST=isBSTFinal;
//     return output;
// }

bool isBST3(BinaryTreeNode<int>* root , int min = INT_MIN  , int max = INT_MAX){
    if (root==NULL)
    {
        return true;
    }
    if (root->data<min || root->data>max)
    {
        return false;
    }
    bool isLeftOk = isBST3(root->left,min,root->data-1);
    bool isRightOk = isBST3(root->right,root->data,max);
    return isLeftOk && isRightOk;
    
    
}

// bool isBST3(BinaryTreeNode<int> *root,int min=INT_MIN,int max=INT_MAX)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     if(root->data<min || root->data>max)
//     {
//         return false;
//     }
//     bool isLeftOk=isBST3(root->left,min,root->data-1);
//     bool isRightOk=isBST3(root->right,root->data,max);
//     return isLeftOk && isRightOk;
// }

vector<int>* getRootToNodePath(BinaryTreeNode<int> *root , int data){
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data==data)
    {
        vector<int> *output = new vector<int>();
        output->push_back(root->data);
        return output;

    }
    vector<int> *leftOutput=getRootToNodePath(root->left , data);
    if (leftOutput != NULL)
    { 
        leftOutput->push_back(root->data);
        return leftOutput;

    }
    vector<int> *rightOutput=getRootToNodePath(root->right, data);
    if (rightOutput != NULL)
    {
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else
    {
        return NULL;
    }
    
    
    
    
}
    
    
// }
// vector<int>* getRootToNodePath(BinaryTreeNode<int> *root,int data)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(root->data==data)
//     {
//         vector<int> *output=new vector<int>();
//         output->push_back(root->data);
//         return output;
//     }
//     vector<int> *leftOutput=getRootToNodePath(root->left,data);
//     if(leftOutput!=NULL)
//     {
//         leftOutput->push_back(root->data);
//         return leftOutput;
//     }
//     vector<int> *rightOutput=getRootToNodePath(root->right,data);
//     if(rightOutput!=NULL)
//     {
//         rightOutput->push_back(root->data);
//         return rightOutput;
//     }
//     else
//     {
//         return NULL;
//     }
// }

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1
int main(){
    BinaryTreeNode<int> *root=takeInputLevelWise();
    vector<int> *output=getRootToNodePath(root,8);
    for(int i=0;i<output->size();i++)
    {
        cout<<output->at(i)<<endl;
    }
    delete output;
    delete root;


    // cout<<isBST(root)<<endl;
    // cout<<isBST2(root).isBST<<endl;
    // cout<<isBST3(root)<<endl;
    // printTree(root);
    // printBetweenK1K2(root,2,6);
    // BinaryTreeNode<int>* search = findNode(root,3);
    // cout << search->data << endl;
    // delete root;
}








































































 //Binary Search Tree sum  of all nodes and inorder traversal using vector
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int v[n];
//     int sum =0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         sum+=v[i];
        
//     }
//     sort(v,v+n);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" "; 
//     }
//     cout<<endl<<sum;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
// 	int data;
// 	Node* left;
// 	Node* right;
// };

// //write your code here
// Node* insert(Node* root, int data)
// {
//     if (root == NULL)
//     {
//         Node* temp = new Node();
//         temp->data = data;
//         temp->left = NULL;
//         temp->right = NULL;
//         return temp;
//     }
//     else
//     {
//         if (data <= root->data)
//         {
//             root->left = insert(root->left, data);
//         }
//         else
//         {
//             root->right = insert(root->right, data);
//         }
//         return root;
//     }
// }
// void inorder(Node* root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else
//     {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
        
//     }

// }

// int sum(Node* root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return root->data + sum(root->left) + sum(root->right);
//     }
   
// }


// int main()
// {
//     Node* root = NULL;
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int data;
//         cin >> data;
//         root = insert(root, data);
//     }
//     inorder(root);
//     cout<<endl;
//     cout<<sum(root);
  
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// template<typename T>
// class BinaryTreeNode{
//     public:
//     int data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;
//     BinaryTreeNode(T data){
//       this->data =data;
//       left=NULL;
//       right=NULL;
//     }
//     ~BinaryTreeNode(){
//         delete right;
//         delete left;
//     }

// };
// BinaryTreeNode<int>* takeInputLevelWise(){
//     int rootData;
//     cout<<"Enter root data"<<endl;
//     cin>>rootData;
//     if (rootData==-1)
//     {
//         return NULL;
//     }
//     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
//     queue<BinaryTreeNode<int>*> pendingNodes;
//     pendingNodes.push(root);
//     while (!pendingNodes.empty())
//     {
//         BinaryTreeNode<int>* front = pendingNodes.front();
//         pendingNodes.pop();
//         int leftChildData;
//         cout<<"Enter the left child of "<<front->data<<endl;
//         cin>>leftChildData;
//         if (leftChildData != -1)
//         {
//             BinaryTreeNode<int>* child  = new BinaryTreeNode<int>(leftChildData);
//             front->left = child;
//             pendingNodes.push(child);


//         }
//         int rightChildData;
//         cout<<"Enter the right child of "<<front->data<<endl;
//         cin>>rightChildData;
//         if (rightChildData != -1)
//         {
//             BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
//             front->right=child;
//             pendingNodes.push(child);
//         }
        
        

//     }
//     return root;
    
// }

// void printTree(BinaryTreeNode<int>* root){
//     if (root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<":";
//     if (root->left!=NULL)
//     {
//         cout<<"L"<<root->left->data;
//     }
//     if (root->right!=NULL)
//     {
//          cout<<"R"<<root->right->data;
//     }
//     cout<<endl;
//     printTree(root->left);
//     printTree(root->right);
    
    
// }

// BinaryTreeNode<int>* findNode(BinaryTreeNode<int> *root , int data){
//     if (root==NULL)
//     {
//         return NULL;
//     }
//     if (root->data==data)
//     {
//         return root;
//     }
//     else if (root->data>data)
//     {
//         return findNode(root->left,data);
//     }
//     else
//     {
//         return findNode(root->right,data);
//     }
    
    
    
    
// }

// void printBetweenK1K2(BinaryTreeNode<int>* root , int k1 ,int k2){
//     if (root==NULL)
//     {
//          return;
//     }
//     if (root->data>k1)
//     {
//           printBetweenK1K2(root->left,k1,k2);
//     }
//     if (root->data>k1 && root->data<=k2)
//     {
//         cout<<root->data<<endl;
//     }
//     if (root->data<=k2)
//     {
//         printBetweenK1K2(root->right,k1,k2);
//     }
    
    
    
    
// }

// int maximum(BinaryTreeNode<int>* root){
//     if (root==NULL)
//     {
//         return INT_MIN;
//     }
//     return max(root->data,max(maximum(root->left),maximum(root->right)));
    
// }

// int minimum(BinaryTreeNode<int>* root){
//     if (root==NULL)
//     {
//         return INT_MAX;
//     }
//     return min(root->data,min(minimum(root->left),maximum(root->right)));
    
// }

// bool isBST(BinaryTreeNode<int> *root){
//     if (root==NULL)
//     {
//         return true;
//     }
//     int leftMax=maximum(root->left);
//     int rightMin=minimum(root->right);
//     bool output = (root->data>leftMax) && (root->data<=rightMin)  && isBST(root->left) && isBST(root->right);
//     return output;
    
// }
// class isBSTReturn{
//     public:
//     int maximum;
//     int minimum;
//     bool isBST;
// };
// isBSTReturn isBST2(BinaryTreeNode<int> *root){
//     if (root==NULL)
//     {
//         isBSTReturn output;
//         output.maximum = INT_MIN;
//         output.minimum = INT_MAX;
//         return output;

//     }
//     isBSTReturn leftOutput = isBST2(root->left);
//     isBSTReturn rightOutput = isBST2(root->right);
//     int maximum = max(root->data,max(leftOutput.maximum , rightOutput.maximum));
//     int minimum = min(root->data , min(leftOutput.minimum , rightOutput.minimum));
//     bool isBSTFinal=(root->data>leftOutput.maximum) && (root->data<=rightOutput.minimum) && leftOutput.isBST  && rightOutput.isBST;
//     isBSTReturn output;
//     output.maximum=maximum;
//     output.minimum=minimum;
//     output.isBST=isBSTFinal;
//     return output;
// }

// bool isBST3(BinaryTreeNode<int>* root , int min = INT_MIN , int max = INT_MAX){
//     if (root==NULL)
//     {
//     return true;
//     }
//     if (root->data<min || root->data>max)
//     {
//         return false;
//     }
//     bool isLeftOk=isBST3(root->left,min,root->data-1);
//     bool isRightOk=isBST3(root->right,root->data,max);
//     return isLeftOk && isRightOk;
    
    
// }
// vector<int> *getRootToNodePath(BinaryTreeNode<int> *root , int data){
//     if (root==NULL)
//     {
//         return NULL;
//     }
//     if (root->data==data)
//     {
//         vector<int> *output = new vector<int>();
//         output->push_back(root->data);
//         return output;
//     }
//     vector<int> *leftOutput = getRootToNodePath(root->left,data);
//     if (leftOutput != NULL)
//     {
//         leftOutput->push_back(root->data);
//         return leftOutput;
//     }
//     vector<int> *rightOutput = getRootToNodePath(root->right,data);
//     if (rightOutput != NULL)
//     {
//         rightOutput->push_back(root->data);
//         return rightOutput;
//     }
//     else{
//         return NULL;
//     }
    
    
    
    
// }
// int main(){
//         BinaryTreeNode<int> *root = takeInputLevelWise();
//         vector<int> *output=getRootToNodePath(root,8);
//         for (int i = 0; i < output->size(); i++)
//         {
//             cout<<output->at(i)<<endl;
//         }
//         delete output;
//         delete root;
        
    
    
//     return 0;
// }