#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,d;
    int M[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>m>>d;
    if(d==1&&M[m]==28)cout<<4<<endl;
    else if(d<=5||M[m]==28 ||(d==6&&M[m]==30))cout<<5<<endl;
    else cout<<6<<endl;
    return 0;
}
