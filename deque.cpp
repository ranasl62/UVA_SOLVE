#include<iostream>
#include<deque>
using namespace std;
int arr[100];
int b,f;
class Deque
{
private :
    int arr[100];
    int fronts,backs;
public:
    Deque()
    {
        fronts=50;
        backs=50;
    }
    void push_back(int data)
    {
        arr[backs++]=data;
    }
    void push_front(int data)
    {
        arr[--fronts]=data;
    }
    void pop_back()
    {
        backs--;
    }
    void pop_front()
    {
        fronts++;
    }
    int front()
    {
        return arr[fronts];
    }
    int back()
    {
        return arr[backs-1];
    }
};
struct node
{
    int data;
    node *next ,*prev;
}*Front=NULL,*Back=NULL;
void push_front(int data)
{
    if(Front==NULL)
    {
        Front=new node();
        Back=new node();
        Front->next=NULL;
        Front->prev=NULL;
        Front->data=data;
        Back=Front;
    }
    else
    {
        node *temp=new node();
        temp->data=data;
        temp->next=Front;
        Front->prev=temp;
        temp->prev=NULL;
        Front=temp;

    }
}
void push_back(int data)
{
    if(Front==NULL)
    {
        Front=new node();
        Back=new node();
        Front->next=NULL;
        Front->prev=NULL;
        Front->data=data;
        Back=Front;
    }
    else
    {
        node *temp=new node();
        temp->data=data;
        temp->prev=Back;
        Back->next=temp;
        temp->next=NULL;
        Back=temp;
    }
}
int Fronts()
{
    return Front->data;
}
int Backs()
{
    return Back->data;
}
void pop_front()
{
    Front=Front->next;
    Front->prev=NULL;
}
void pop_back()
{
    Back=Back->prev;
    Back->next=NULL;
}
void deque_linked_list()
{
    push_front(10);
    push_back(20);
    cout<<Backs()<<" ";
    cout<<Fronts()<<" ";
    pop_front();
    push_front(5);
    cout<<Fronts()<<" ";
    push_back(25);
    push_front(0);
    pop_front();
    cout<<Fronts()<<" ";
    pop_front();
    cout<<Backs()<<" ";
    cout<<Fronts()<<" ";
    pop_back();
    push_back(30);
}
void built_in_dequeue()
{
    deque<int>d;
    d.push_front(10);
    d.push_back(20);
    cout<<d.back()<<" ";
    cout<<d.front()<<" ";
    d.pop_front();
    d.push_front(5);
    cout<<d.front()<<" ";
    d.push_back(25);
    d.push_front(0);
    d.pop_front();
    cout<<d.front()<<" ";
    d.pop_front();
    cout<<d.back()<<" ";
    cout<<d.front()<<" ";
    d.pop_back();
    d.push_back(30);
}
void  deque_class()
{
    Deque D;
    D.push_front(10);
    D.push_back(20);
    cout<<D.back()<<" ";
    cout<<D.front()<<" ";
    D.pop_front();
    D.push_front(5);
    cout<<D.front()<<" ";
    D.push_back(25);
    D.push_front(0);
    D.pop_front();
    cout<<D.front()<<" ";
    D.pop_front();
    cout<<D.back()<<" ";
    cout<<D.front()<<" ";
    D.pop_back();
    D.push_back(30);
}
void n_push_back(int data)
{
    arr[b++]=data;
}
void n_push_front(int data)
{
    arr[--f]=data;
}
void n_pop_back()
{
    b--;
}
void n_pop_front()
{
    f++;
}
int n_front ()
{
    return arr[f];
}
int n_back()
{
    return arr[b-1];
}
void deque_normal()
{
    b=f=50;     //half of array size
    n_push_front(10);
    n_push_back(20);
    cout<<n_back()<<" ";
    cout<<n_front()<<" ";
    n_pop_front();
    n_push_front(5);
    cout<<n_front()<<" ";
    n_push_back(25);
    n_push_front(0);
    n_pop_front();
    cout<<n_front()<<" ";
    n_pop_front();
    cout<<n_back()<<" ";
    cout<<n_front()<<" ";
    n_pop_back();
    n_push_back(30);
}
int main()
{
    deque_linked_list();
    cout<<endl;
    built_in_dequeue();
    cout<<endl;
    deque_class();
    cout<<endl;
    deque_normal();
    cout<<endl;
    return 0;
}
