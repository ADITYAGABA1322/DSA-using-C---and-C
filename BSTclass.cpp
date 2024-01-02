// #include <iostream>
// #include <queue>
// using namespace std;
// template <typename T>
// class BinaryTreeNode
// {
// public:
//     int data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;
//     BinaryTreeNode(int data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
//     ~BinaryTreeNode()
//     {
//         delete left;
//         delete right;
//     }
// };

// class BST
// {
//     BinaryTreeNode<int> *root;

// public:
//     BST()
//     {
//         root = NULL;
//     }
//     ~BST()
//     {
//         delete root;
//     }

// private:
//     BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node)
//     {
//         if (node == NULL)
//         {
//             return NULL;
//         }
//         if (data > node->data)
//         {
//             node->right = deleteData(data, node->right);
//             return node;
//         }
//         else if (data < node->data)
//         {
//             node->left = deleteData(data, node->left);
//             return node;
//         }
//         else
//         {
//             if (node->left == NULL && node->right == NULL)
//             {
//                 delete node;
//                 return NULL;
//             }
//             else if (node->left == NULL)
//             {
//                 BinaryTreeNode<int> *temp = node->right;
//                 node->right = NULL;
//                 delete node;
//                 return temp;
//             }
//             else if (node->right == NULL)
//             {
//                 BinaryTreeNode<int> *temp = node->left;
//                 node->left = NULL;
//                 delete node;
//                 return temp;
//             }
//             else
//             {
//                 BinaryTreeNode<int> *minNode = node->right;
//                 while (minNode->left != NULL)
//                 {
//                     minNode = minNode->left;
//                 }
//                 int rightMin = minNode->data;
//                 node->data = rightMin;
//                 node->right = deleteData(rightMin, node->right);
//                 return node;
//             }
//         }
//     }
//     void printTree(BinaryTreeNode<int> *root)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         cout << root->data << ":";
//         if (root->left != NULL)
//         {
//             cout << "L" << root->left->data;
//         }
//         if (root->right != NULL)
//         {
//             cout << "R" << root->right->data;
//         }
//         cout << endl;
//         printTree(root->left);
//         printTree(root->right);
//     }

// public:
//     void deleteData(int data)
//     {
//         this->root = deleteData(data, root);
//     }
//     void printTree()
//     {
//         printTree(root);
//     }

// private:
//     BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *node)
//     {
//         if (node == NULL)
//         {
//             BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
//             return newNode;
//         }
//         if (data < node->data)
//         {
//             node->left = insert(data, node->left);
//         }
//         else
//         {
//             node->right = insert(data, node->right);
//         }
//         return node;
//     }

// public:
//     void insert(int data)
//     {
//         this->root = insert(data, this->root);
//     }

// private:
//     bool hasData(int data, BinaryTreeNode<int> *node)
//     {
//         if (node == NULL)
//         {
//             return false;
//         }
//         if (node->data == data)
//         {
//             return true;
//         }
//         else if (data < node->data)
//         {
//             return hasData(data, node->left);
//         }
//         else
//         {
//             return hasData(data, node->right);
//         }
//     }

// public:
//     bool hasData(int data)
//     {
//         return hasData(data, root);
//     }
// };

// int main()
// {
//     BST b;
//     b.insert(10);
//     b.insert(5);
//     b.insert(20);
//     b.insert(7);
//     b.insert(3);
//     b.insert(15);
//     b.printTree();
//     b.deleteData(10);
//     b.deleteData(100);
//     b.printTree();
// }

// #include <iostream>
// #include <queue>
// using namespace std;
// template <typename T>
// class BinaryTreeNode
// {
// public:
//     int data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;
//     BinaryTreeNode(int data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
//     ~BinaryTreeNode()
//     {
//         delete left;
//         delete right;
//     }
// };

// class BST
// {
//     BinaryTreeNode<int> *root;

// public:
//     BST()
//     {
//         root = NULL;
//     }
//     ~BST()
//     {
//         delete root;
//     }

// private:
//     BinaryTreeNode<int> *remove(int data, BinaryTreeNode<int> *node)
//     {
//         if (node == NULL)
//         {
//             return NULL;
//         }
//         if (data > node->data)
//         {
//             node->right = remove(data, node->right);
//             return node;
//         }
//         else if (data < node->data)
//         {
//             node->left = remove(data, node->left);
//             return node;
//         }
//         else
//         {
//             if (node->left == NULL && node->right == NULL)
//             {
//                 delete node;
//                 return NULL;
//             }
//             else if (node->left == NULL)
//             {
//                 BinaryTreeNode<int> *temp = node->right;
//                 node->right = NULL;
//                 delete node;
//                 return temp;
//             }
//             else if (node->right == NULL)
//             {
//                 BinaryTreeNode<int> *temp = node->left;
//                 node->left = NULL;
//                 delete node;
//                 return temp;
//             }
//             else
//             {
//                 BinaryTreeNode<int> *minNode = node->right;
//                 while (minNode->left != NULL)

//                 {
//                     minNode = minNode->left;
//                 }
//                 int rightMin = minNode->data;
//                 node->data = rightMin;
//                 node->right = remove(rightMin, node->right);
//                 return node;
//             }
//         }
//     }
//     void print(BinaryTreeNode<int> *root)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         cout << root->data << ":";
//         if (root->left != NULL)
//         {
//             cout << "L:" << root->left->data << ",";
//         }
//         if (root->right != NULL)
//         {
//             cout << "R:" << root->right->data;
//         }
//         cout << endl;
//         print(root->left);
//         print(root->right);
//     }

// public:
//     void remove(int data)
//     {
//         root = remove(data, root);
//     }
//     void print()
//     {
//         print(root);
//     }

// private:
//     BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *node)
//     {
//         if (node == NULL)
//         {
//             BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
//             return newNode;
//         }
//         if (data <= node->data)
//         {
//             node->left = insert(data, node->left);
//         }
//         else
//         {
//             node->right = insert(data, node->right);
//         }
//         return node;
//     }

// public:
//     void insert(int data)
//     {
//         this->root = insert(data, this->root);
//     }

// private:
//     bool search(int data, BinaryTreeNode<int> *node)
//     {
//         if (node == NULL)
//         {
//             return false;
//         }
//         if (node->data == data)
//         {
//             return true;
//         }
//         else if (data < node->data)
//         {
//             return search(data, node->left);
//         }

//         return search(data, node->right);
//     }

// public:
//     bool search(int data)
//     {
//         return search(data, root);
//     }
// };

// int main()
// {
//     BST b;
//     b.insert(10);
//     b.insert(5);
//     b.insert(20);
//     b.insert(7);
//     b.insert(3);
//     b.insert(15);
//     b.print();
//     b.remove(10);
//     b.remove(100);
//     b.print();
// }

#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }

    
};
class BST
{
    BinaryTreeNode<int> *root;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    private:
    BinaryTreeNode<int> *remove(int data ,BinaryTreeNode<int>* node){
        if (node==NULL)
        {
           return NULL;
        }
        if (data>node->data)
        {
          node->right = remove(data,node->right);
          return node;
        }
        else if (data<node->data)
        {
            node->left=remove(data,node->left);
            return node;
            
        }
        else
        {
            if (node->left==NULL && node->right==NULL)
            {
                delete node;
                return NULL;
            }
            else if (node->left == NULL)
            {
                BinaryTreeNode<int> *temp = node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
            else if (node->right == NULL)
            {
                BinaryTreeNode<int>* temp = node->left;
                node->left =NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int> *minNode= node->right;
                while (minNode->left != NULL)
                {
                    minNode=minNode->left;
                }
                int rightMin = minNode->data;
                node->data = rightMin;
                node->right = remove(rightMin , node->right);
                return node;
                
            }
            
            
            
            
        }
        
        
        
        
    }
    void print(BinaryTreeNode<int>* root){
        if (root==NULL)
        {
            return;
        }
        cout<<root->data<<":";
        if (root->left != NULL)
        {
            cout<<"L:"<<root->left->data<<":";
        }
        if (root->right != NULL)
        {
            cout<<"R:"<<root->right->data<<":";
        }
        cout<<endl;
        print(root->left);
        print(root->right);
        
        
        
    }
    public:
    void remove(int data){
        root =remove(data,root);
    }
    void print(){
        print(root);
    }
    private:
    BinaryTreeNode<int> *insert(int data , BinaryTreeNode<int>* node){
        if (node==NULL)
        {
           BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
           return newNode;
        }
        if (data<=node->data)
        {
            node->left  =insert(data , node->left);
        }
        else
        {
            node->right = insert(data,node->right);
        }
        return node;
        
        
        
        
    }
    public:
    void insert(int data){
        this->root = insert(data,this->root);
    }
    private:
    bool search(int data , BinaryTreeNode<int>* node){
        if (node==NULL)
        {
            return false;
        }
        if (node->data == data)
        {
            return true;
        }
        else if (data<node->data)
        {
            return search(data , node->left);
        }
        return search(data,node->right);
        
        
        
    }
    public:
    bool search(int data){
        return search(data,root);
    }

};

int main(){
    BST b;
    b.insert(10);
    b.insert(5);
    b.insert(20);
    b.insert(7);
    b.insert(3);
    b.insert(15);
    b.print();
    b.remove(10);
    b.remove(100);
    b.print();
    
    return 0;
}



