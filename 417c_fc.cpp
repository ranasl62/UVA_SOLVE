#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long sum,k,t,n,S,ns=0,sm=0;
    vector<long long> a;
    sum=k=0;
    cin>>n>>S;
    bool y=true;
    for(int i=0;i<n;i++)
    {
    long long x;
    cin>>x;
    a.push_back(x);
    }
    //sort(a.begin(),a.end());
    int j=0;
    for(int i=1;i<=n;i++)
    {

    sum+=a[j++];
    if (y && sum + (i*(i*(i+1)/2)) <= S) k = i,ns =(i*((i*(i+1))/2)),sm=sum;
    else y=1;
    }

    if(k)cout<<k<<" "<<sm+ns<<endl;
    else cout<<0<<" "<<0<<endl;
    return 0;
}
