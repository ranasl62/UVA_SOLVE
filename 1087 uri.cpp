#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,x1,y,y1;
    while(cin>>x>>y>>x1>>y1&&x!=0&&y!=0&&y1!=0&&x1!=0)
    {
        if (x==x1&&y==y1)
            cout<<0<<endl;
        else if(x==x1||y1==y||(abs(y-y1))==(abs(x-x1)))
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
