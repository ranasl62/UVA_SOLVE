#include<bits/stdc++.h>
using namespace std;
#define mx 100
int main()
{
    int n,i;
    string st;
    cin>>n;
    cin>>st;
    int a=0;
    int b=0;
    for( i=0; i<n; i++)
    {
        if(st[i]=='S'&&st[i+1]=='F'&&i<n)
            a++;
        if(st[i]=='F'&&st[i+1]=='S'&&i<n)
            b++;

    }
    if(a>b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
