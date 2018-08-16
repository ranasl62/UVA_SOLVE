#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,k;
    int s,e;
    int flag =1,p=0;
    cin>>n>>k;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='T')
            e=i;
        if(str[i]=='G')
            s=i;
    }
    if(s>e)
    {
        for(int i=s; i>=e; i-=k){
            if(str[i]=='#')
            {
                flag=0;
            }
        }
    }
    else
    {

        for(int i=s; i<=e; i+=k)
        {
            if(str[i]=='#')
            {
                flag=0;
            }

        }
    }
    if(flag && abs(s-e)>=k )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
