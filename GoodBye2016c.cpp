#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m=0;
    int d,c;
    cin>>n;
    n--;
    int a=0;
    cin>>c>>d;
    if(1==d)
        m=1901+c;
    else
        m=1899+c;
    if(n==0 && c<0 && d==1)
    {
        a=2;
    }
    while(n--)
    {
        cin>>c>>d;
        if(1==d && m>=1901)
        {
            m+=c;
        }
        else if(2==d && m<=1899)
        {
            m+=c;
        }
        else if((d==1 &&m<=1899) ||(2==d && m>=1901))
        {
            a=1;
            break;
        }
        else
        {
            a=2;
            break;
        }
    }

    for(int i=0; i<n; i++)
        cin>>c>>d;

    if(a==0)cout<<m<<endl;
    else if(a==1)cout<<"Impossible"<<endl;
    else cout<<"Infinity"<<endl;

    return 0;

}
