#include<iostream>
using namespace std;
int main()
{
    int k,m,n,x,y;
    while(cin>>k)
    {
        if(k==0)break;
        cin>>m>>n;
        while(k--){
                cin>>x>>y;
        x=x-m;
        y=y-n;
        if(x==0||y==0)
            cout<<"divisa"<<endl;
        else if(x>0&&y>0)
            cout<<"NE"<<endl;
        else if(x<0&&y>0)
            cout<<"NO"<<endl;
        else if(x<0&&y<0)
            cout<<"SO"<<endl;
        else
            cout<<"SE"<<endl;
    }
    }
    return 0;
}
