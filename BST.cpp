#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
}*root=NULL;
node* Insert (node *root ,int data)
{
    if(root==NULL)
    {
        node *bstnode =new node();
        bstnode->data=data;
        bstnode->left=bstnode->right=NULL;
    }
    else if(data>root->data)
    {
       root->right= Insert(root->right,data);

    }
    else{
        root->left=Insert(root->left,data);

    }
}
void serach(node *h)
{
    if(h==NULL)return;
    cout<<h->data<<" ";
    serach(h->left);
    serach(h->right);
}
int main()
{
int n,data;
cin>>n;
while(n--)
{
    cin>>data;

    if(root==NULL)
    {
        root=new node();
        root->data=data;
        root->left=root->right=NULL;
    }
    else
        Insert(root,data);
}
serach(root);

    return 0;
}
