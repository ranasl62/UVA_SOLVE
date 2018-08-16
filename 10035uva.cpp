#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen ("10035uva.txt","w",stdout);
    int a,b,c,t;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        c = 0;
        if(a<b)
            swap(a,b);
        t=0;
        while(a)
        {
            t+=a%10+b%10;
            if(t>=10)
            {
                c++;
                t/=10;
            }
            else
            {
                t=0;
            }
            a/=10;
            b/=10;
        }
        if(c==0)
            cout<<"No carry operation."<<endl;
        else if(c==1)
            cout<<c<<" carry operation."<<endl;
        else
            cout<<c<<" carry operations."<<endl;
    }
    return 0;
}
