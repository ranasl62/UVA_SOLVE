#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int data;
    node *next;
}*Front=NULL,*Back=NULL;
int arr[100],t,h;
void built_in_queue()
{
    queue<int>Q;
    Q.push(10);
    Q.push(12);
    cout<<Q.front()<<" ";
    Q.pop();
    cout<<Q.front()<<" ";
}
class Queue
{
private :
    int arr[100],t,h;
public:
    Queue()
    {
        t=h=0;
    }
    void push(int data)
    {
        arr[t++]=data;
    }
    void pop()
    {
        h++;
    }
    int Front ()
    {
        return arr[h];
    }
};
void Class_queue()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.Front()<<" ";
    q.pop();
    q.pop();
    q.push(4);
    cout<<q.Front()<<" ";

}
void push(int data)
{
    arr[t++]=data;
}
void pop()
{
    h++;
}
int front()
{
    return arr[h];
}
void Normal_queue()
{
    push(10);
    push(20);
    cout<<front()<<" ";
    pop();
    cout<<front()<<" ";
    push(30);

}
void Push_node(int data)
{
    if(Front==NULL)
    {
        Front = new node();
        Back = new node();
        Front->data=data;
        Front->next=NULL;
        Back=Front;
    }
    else
    {
        node *temp = new node();
        temp->next=NULL;
        temp->data=data;
        Back->next=temp;
        Back=temp;
    }
}
void pop_node()
{
    Front=Front->next;
}
int Front_node()
{
    return Front->data;
}
void queue_Linked_list()
{
    Push_node(10);
    Push_node(20);
    cout<<Front_node()<< " ";
    pop_node();
    cout<<Front_node()<< " ";
    Push_node(30);
    Push_node(40);
    pop_node();
    pop_node();
    Push_node(50);
    cout<<Front_node()<< " ";
    Push_node(60);
    Push_node(70);
    pop_node();
    cout<<Front_node()<< " ";
}

int main()
{
    built_in_queue();
    cout<<endl;
    Class_queue();
    cout<<endl;
    Normal_queue();
    cout<<endl;
    queue_Linked_list();
    cout<<endl;
    return 0;
}
