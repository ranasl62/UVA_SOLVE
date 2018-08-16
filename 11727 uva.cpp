#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,i=0;
    cin>>t;
    while(i!=t)
    {
        cin>>a>>b>>c;
        i++;
        if((a>b&&a<c)||(c<a&&a<b))
            cout<<"Case "<<i<<": "<<a<<endl;
        if((b>a&&b<c)||(c<b&&b<a))
            cout<<"Case "<<i<<": "<<b<<endl;
        if((c>a&&b>c)||(c>b&&a>c))
            cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}
