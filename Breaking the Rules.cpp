#include<iostream>
using  namespace std;
int main()
{
    int a,n,b,i=0,t;
    cin>>n;
    while(n--)
    {
        i++;
        t=0;
        cin>>a>>b;
        if(a>b)
        {
            t=(a-b)*4;
            cout<<"Case "<<i<<": "<<19+(a)*4+t<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<19+b*4+t<<endl;
    }
    return 0;
}
