#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("rana.txt","r",stdin);
   // freopen("rana2.txt","w",stdout);
    int n,c,m,a;
    int u=1;
    while(cin>>n>>m>>c && (c||m||n)){
    int arr[n+1];
    bool arr2[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=0;i<=n;i++)arr2[i]=false;
    int s=0;
    int x=0;
    //bool t=false;
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        if(arr2[a])
        {
            s=s-arr[a];
            arr2[a]=false;

        }
        else
        {
            s+=arr[a];
            arr2[a]=true;
             //if(c<s)t=true;
             x=max(x,s);
        }
    }
    if(c>=x)cout<<"Sequence "<<u<<endl<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<x<<" amperes."<<endl;
    else cout<<"Sequence "<<u<<endl<<"Fuse was blown."<<endl;
    cout<<endl;
    u++;
    }
    return 0;
}
