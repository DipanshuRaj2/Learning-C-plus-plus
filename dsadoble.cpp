#include <bits/stdc++.h>   
using namespace std;   
   
class BST {  
    public: 
    int data;   
    BST *left, *right;   
   
public:   
    // Default constructor.   
    BST();   
   
    // Parameterized constructor.   
    BST(int);   
   
    // Insert function.   
    BST* Insert(BST*, int);   
   
    // Inorder traversal.   
    void Inorder(BST*);   
};   
   
// Default Constructor definition.   
BST ::BST()   
    : data(0)   
    , left(NULL)   
    , right(NULL)   
{   
}   
   
// Parameterized Constructor definition.   
BST ::BST(int value)   
{    
    data = value;   
    left = right = NULL;   
}   
   
   
BST* BST ::Insert(BST* root, int value)   
{   
    if (!root) {   
        // Insert the first node, if root is NULL.   
        return new BST(value);   
    }   
   
    // Insert data.   
    if (value > root->data) {   
        // Insert right node data, if the 'value'   
        // to be inserted is greater than 'root' node data.   
   
        // Process right nodes.   
        root->right = Insert(root->right, value);   
    }   
    else if (value < root->data){   
        // Insert left node data, if the 'value'   
        // to be inserted is smaller than 'root' node data.   
   
        // Process left nodes.   
        root->left = Insert(root->left, value);   
    }   
   
    // Return 'root' node, after insertion.   
    return root;   
}   
   
  
  
void printLeafNodes(BST *root) 
{ 
    if (!root) 
        return; 
      
  
    if (!root->left && !root->right) 
    { 
        cout << root->data << " "; 
        return; 
    } 
    printLeafNodes(root->right); 
    printLeafNodes(root->left); 
} 
   
int main()   
{   
    BST b, *root = NULL;   
    int n;   
    cin>>n;        
    for(int i=0;i<n;i++){   
        int no;   
       cin>>no; 
        if(i==0){ 
    root = b.Insert(root, no);  
    } 
        else{ 
    b.Insert(root, no);  
    } 
    } 
    printLeafNodes(root);   
   return 0;
}
