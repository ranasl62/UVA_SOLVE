#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL;
void push(int data)
{
    if(head==NULL)
    {
        head=new node();
        head->data=data;
        head->next=NULL;
    }
    else
    {
        node *temp=new node();
        temp->data=data;
        temp->next=head;
        head=temp;
    }
}
void Reverse()
{
    node *p=head;
    head = NULL;
    while(p!=NULL)
    {
        push(p->data);
        p=p->next;
    }
}
void print(node *h)
{
    if(h==NULL)return ;
    print(h->next);
    cout<<h->data<<" ";
}
int main()
{
    int n,data; cin>>n;
    while(n--){
        cin>>data;
        push(data);
    }
     print(head);
     cout<<endl;
    Reverse();
    //Reverse(head);
    print(head);
    cout<<endl;

    return 0;
}
