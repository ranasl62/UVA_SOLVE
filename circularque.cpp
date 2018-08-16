#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
}*front=NULL,*back=NULL;
void push(int data)
{
    if(front==NULL)
    {
        front = new node();
        front->data=data;
        front->next=NULL;
        back=front;
    }
    else
    {
        node *temp=new node();
        temp->data =data;
        back->next=temp;
        temp->next=front;
        back=temp;
    }
}
void pop()
{
    front=front->next;
    back->next=front;
}
int fronts()
{
    return front->data;
}
void circular_queue_link()
{
    push(10);
    cout<<fronts()<<" ";
    push(20);
    pop();
    cout<<fronts()<<" ";
    push(30);
    pop();
    cout<<fronts()<<" ";
    push(40);
    push(50);
    cout<<fronts()<<" ";
}
class c_que
{
private:
    int arr[100],f,b,Size;
public:
    c_que(){f=b=0;Size=100;}
    void push (int data ) {arr[b++]=data;b%=Size;}
    void pop(){if(f==b)cout<<"Queue is Underflow"<<endl;else {f++;f%=Size;}}
    int front(){return arr[f];}
};
void class_circuler_queue()
{
    c_que Q;
     Q.push(10);
    cout<<Q.front()<<" ";
    Q.push(20);
    Q.pop();
    cout<<Q.front()<<" ";
    Q.push(30);
    Q.pop();
    cout<<Q.front()<<" ";
    Q.push(40);
    Q.push(50);
    cout<<Q.front()<<" ";
}
int main()
{
    circular_queue_link();
    cout<<endl;
    class_circuler_queue();
    cout<<endl;

    return 0;

}
