#include<iostream>
using namespace std;
void myFunction(int count)
{
    if(count==0)
        return;
    else
    {
        cout<<count<<" ";
        myFunction(--count);
        cout<<count<<" ";
        cout<<"Rana"<<" ";
        return;
    }
}
int main()
{
    myFunction(4);
    return 0;
}
