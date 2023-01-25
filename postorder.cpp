#include <bits/stdc++.h>
using namespace std;

struct node
{
int key;
struct node *left, *right;
};

struct node *newNode(int item)
{
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->key = item;
temp->left = temp->right = NULL;
return temp;
}

void inorder(struct node *root)
{
if (root != NULL)
{
inorder(root->left);

cout << root->key << " -> ";

inorder(root->right);
}
}

struct node *insert(struct node *node, int key)
{
if (node == NULL)
return newNode(key);

if (key < node->key)
node->left = insert(node->left, key);
else
node->right = insert(node->right, key);

return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node)
{
struct node *current = node;

// Find the leftmost leaf
while (current && current->left != NULL)
current = current->left;

return current;
}

int main()
{
int item;
struct node *root = NULL;
root = insert(root, 8);
root = insert(root, 3);
root = insert(root, 1);
root = insert(root, 6);
root = insert(root, 7);
root = insert(root, 10);
root = insert(root, 14);
root = insert(root, 4);

cout << "Inorder traversal: ";
inorder(root);

cout << "\nEnter the item: ";
cin >> item;
cout << "\nAfter interting item\n";
root = insert(root, item);
cout << "Inorder traversal: ";
inorder(root);
}