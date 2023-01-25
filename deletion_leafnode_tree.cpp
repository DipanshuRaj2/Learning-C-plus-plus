
// CPP code to delete all leaves with given
// value.
#include <bits/stdc++.h>
using namespace std;
  
// A binary tree node
struct Node {
    int data;
    struct Node *left, *right;
};
  
// A utility function to allocate a new node
struct Node* newNode(int data)
{
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return (newNode);
}
  
Node* deleteLeaves(Node* root, int x)
{
    if (root == NULL)
        return nullptr;
    root->left = deleteLeaves(root->left, x);
    root->right = deleteLeaves(root->right, x);
  
    if (root->data == x && root->left == NULL && 
                          root->right == NULL) {
         
        return nullptr;
    }
    return root;
}
  
void inorder(Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
  
// Driver program
int main(void)
{
    struct Node* root = newNode(10);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(3);
    root->left->right = newNode(1);
    root->right->right = newNode(3);
    root->right->right->left = newNode(3);
    root->right->right->right = newNode(3);
    deleteLeaves(root, 3);
    cout << "Inorder traversal after deletion : ";
    inorder(root);
    return 0;
}