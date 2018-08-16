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
void Remove_duplicate(node *h)
{
    node *cur =h;
    while(h!=NULL)
    {

         if(cur->data!=h->data)
        {
            cur->next=h;
            cur=h;
        }
        else if (h->next==NULL)
        {
            cur->next=NULL;
            break;
        }
        else
             h=h->next;
    }

}
int main()
{
    cout<<"How many number you insert in Linked list......  ";
    int n;
    cin>>n;
    Insert(n);
    print(head);
    cout<<endl;
    Remove_duplicate(head);
    print(head);
    return 0;
}
