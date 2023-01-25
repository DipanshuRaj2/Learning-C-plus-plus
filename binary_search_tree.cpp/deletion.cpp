#include<bits/stdc++.h>
using namespace std;
int node;
void case_a(node *,node *);
void case_b(node *,node *);
void case_c(node *,node *);
void find(int, node **, node **);
void del(int item);
void del(int item)
{
node *parent, *location;
if (root == NULL)
{
cout<<"Tree empty"<<endl;
return;
}
find(item, &parent, &location); 
if (location == NULL)
{
cout<<"Item not present in tree"<<endl;
return;
}
if (location->left == NULL && location->right == NULL)
case_a(parent, location);
if (location->left != NULL && location->right == NULL)
case_b(parent, location);
if (location->left == NULL && location->right != NULL)
case_b(parent, location);
if (location->left != NULL && location->right != NULL)
case_c(parent, location);
//free(location);
}
void case_a(node *par, node *loc )
{
if (par == NULL)
{
root = NULL;
}
else
{
if (loc == par->left)
par->left = NULL;
else
par->right = NULL;
}
}void case_b(node *par, node *loc)
{
node *child;
if (loc->left != NULL)
child = loc->left;
else
child = loc->right;
if (par == NULL)
{
root = child;
}
else
{
if (loc == par->left)
par->left = child;
else
par->right = child;
}
}void case_c(node *par, node *loc)
{

node *ptr, *ptrsave, *suc, *parsuc;
ptrsave = loc;
ptr = loc->right;
while (ptr->left != NULL)
{
ptrsave = ptr;
ptr = ptr->left;
}
suc = ptr;
parsuc = ptrsave;
if (suc->left == NULL && suc->right == NULL)
case_a(parsuc, suc);
else
case_b(parsuc, suc);
if (par == NULL)
{
root = suc;
}
else
{
if (loc == par->left)
par->left = suc;
else
par->right = suc;
}
suc->left = loc->left;
suc->right = loc->right;
}
void find(int item, node **par, node **loc)

{ node *ptr, *ptrsave;
if (root == NULL)
{
*loc = NULL;
*par = NULL;
return;
}
if (item == root->info)
{
*loc = root;
*par = NULL;
return;
}
if (item < root->info)
ptr = root->left;
else
ptr = root->right;
ptrsave = root;
while (ptr != NULL)
{
if (item == ptr->info)
{
*loc = ptr;
*par = ptrsave;
return;
}
ptrsave = ptr;
if (item < ptr->info)
ptr = ptr->left;
else
ptr = ptr->right;
}
*loc = NULL;
*par = ptrsave;
}
void find(int item, node **par, node **loc)

{ node *ptr, *ptrsave;
if (root == NULL)
{
*loc = NULL;
*par = NULL;
return;
}
if (item == root->info)
{
*loc = root;
*par = NULL;
return;
}
if (item < root->info)
ptr = root->left;
else
ptr = root->right;
ptrsave = root;
while (ptr != NULL)
{
if (item == ptr->info)
{
*loc = ptr;
*par = ptrsave;
return;
}
ptrsave = ptr;
if (item < ptr->info)
ptr = ptr->left;
else
ptr = ptr->right;
}
*loc = NULL;
*par = ptrsave;
}