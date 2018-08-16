#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a,b;
    int c=0,c1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<0)c1++;
        else c++;
    }
    if(c<=1||c1<=1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
