#include<iostream>
using namespace std;
int main()
{
    int a,b,c,mx;
    cin>>a>>b>>c;
    mx=a+b*c;
    if(mx<a*(b+c))
        mx=a*(b+c);
    if(mx<a*b*c)
        mx=a*b*c;
    if(mx<(a+b)*c)
        mx=(a+b)*c;
    cout<<mx<<endl;
    return 0;
}
