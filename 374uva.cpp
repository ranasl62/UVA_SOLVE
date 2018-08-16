#include<iostream>
using namespace std;
long long Mod (int b, unsigned p , int m)
{
    long long mod = 1;
    while(p>0)
    {
        if(p%2==1)
            mod = (mod*b)%m;
        p=p>>1;
        b = (b*b)%m;
    }
    return mod;
}
int main()
{
    int a,m;
    unsigned p;
    while(cin>>a>>p>>m)
        cout<<Mod(a,p,m)<<endl;
    return 0;
}
