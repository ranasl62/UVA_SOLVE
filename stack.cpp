#include<iostream>
#include<stack>
using namespace std;
int arr[100];
int t=0;
void pushs (int data)
{
    if(t==100) cout<<"stack is Full"<<endl;
    else
        arr[t++]=data;
}
void pops()
{
    if(t==0) cout<<"Stack is Underflow"<<endl;
    else t--;
}
int tops()
{
    if(t==0)cout<<"Stack is empty"<<endl;
    else return arr[t-1];
}
void normal_stack()
{
    pushs(20);
    pushs(10);
    pops();
    cout<<tops()<< " ";
    pushs(12);
    cout<<tops()<< " ";
    pops();
    pushs(5);
    cout<<tops()<< " ";
}
class Stack
{
private :
    int arr[100];
    int t;
public:
    Stack()
    {
        t=0;
    }
    void push(int data)
    {
        arr[t++]=data;
    }
    void pop()
    {
        t--;
    }
    int top()
    {
        return arr[t-1];
    }
};
void class_stack()
{
    Stack a;
    a.push(10); // default input
    a.push(15);
    a.push(16);
    cout<<a.top()<<" ";
    a.pop();
    a.push(1);
    cout<<a.top()<<" ";
    a.pop();
    cout<<a.top()<<" ";
}
struct node
{
    char data;
    node* next;
}*top=NULL;
void pushl(char a)
{
    if(top==NULL)
    {
        top=new  node();
        top->data=a;
        top->next=NULL;
    }
    else
    {
        node *temp = new node();
        temp->data=a;
        temp->next=top;
        top=temp;
    }
}
void popl()
{
    top=top->next;
}
char topl()
{
    return top->data;
}
void built_in_stack()
{
    stack <int> s; // built in stack to use this stack need a header file like #include<stack>
    s.push(5);      // default value set on stack
    s.push(10);
    cout<<s.top()<<" ";
    s.push(15);
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
}
void linkedlist_stack()
{
    pushl('a');
    pushl('v');
    pushl('l');
   cout<<topl()<<" ";
   popl();
    pushl('p');
    cout<<topl()<<" ";
    pushl('p');
    popl();
   cout<<topl()<<" ";
}

int main ()
{
again :
    cout<<"Use Normal stack press      1"<<endl;
    cout<<"Use class stack press       2"<<endl;
    cout<<"Use Linked list stack press 3"<<endl;
    cout<<"Use built in stack press    4"<<endl;

    int n;
    cin>>n;
    switch (n)
    {
    case 1 :
        normal_stack();
        break;
    case 2:
        class_stack();
        break;
    case 3:
        linkedlist_stack();
        break;
    case 4:
       built_in_stack();
       break;
    default:
        goto again;
    }
    return 0;
}
