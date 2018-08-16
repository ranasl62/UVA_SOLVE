#include<iostream>
using namespace std;
int main()
{
    int x,y,z,xx,yy,zz,n;
    xx=yy=zz=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        xx+=x;
        yy+=y;
        zz+=z;
    }
    if(xx==zz&&zz==yy)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
