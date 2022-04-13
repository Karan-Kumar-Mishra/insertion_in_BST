#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class node
{
public:
    int info;
    node *left;
    node *right;
};
node* create(int data)
{
    node *ptr= new node;
    ptr->info=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

void inorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    else
    {
        inorder(root->left);
        cout<<root->info<<" ";
        inorder(root->right);
    }
}
void search(node *root,int key)
{
  while(root->info!=key)
{ 
  if(key>root->info)
   {
     root=root->right;
   }
  else 
   {
     root=root->left;
   }
}
   cout<<"info= "<<root->info;
}
void insertinBST(node *root,int data)
{
  while(root->left || root->right !=NULL)
{  
  if(data>root->info)
   {
     root=root->right;
   }
  else 
   {
     root=root->left;
   }
  
}
  node *p1=create(data);
 if(data>root->info)
   {
     root=root->right=p1;
   }
  else 
   {
     root=root->left=p1;
   }
  
}
int main()
{
    clrscr();
    node *root,*p1,*p2,*p3,*p4;
    root=create(40);
    p1=create(20);
    p2=create(50);
    p3=create(10);
    p4=create(30);
   
    root->left=p1;
    root->right=p2;
  
    p1->left=p3;
    p1->right=p4;
    
    inorder(root);
    cout<<endl<<endl;
    insertinBST(root,60);
    cout<<endl<<endl;
    inorder(root);
  
    return 0;
}