#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    string c="Thor",d;
    while(n--)
    {
        cin>>d;
        cin>>a;
        if(c==d)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
