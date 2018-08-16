#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*head =NULL;
void Insert (int n)
{
    int data;
    while(n--)
    {
        cin>>data;
        if (head == NULL)
        {
            head = new node();
            head->data = data;
            head->next = NULL;
        }
        else
        {
            node *temp =new node();
            temp->data=data;
            temp->next=head;
            head =temp;

        }
    }
}
void print(node *head)
{
    if(head==NULL)return ;
    print(head->next);
    cout<<head->data<<" ";


}
void print()
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<< " ";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    cout<<"How many number you insert in Linked list......  ";
    int n;
    cin>>n;
    Insert(n);
    print(head);
    cout<<endl;
    print();
    return 0;
}
