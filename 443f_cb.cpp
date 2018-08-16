#include<bits/stdc++.h>
using namespace std;
    int a[500+10];
    int b[500+10];
#define mx INT_MAX
int main()
{
    long long t;
    int n;
    //scanf("%I64d%I64d",&n,&t);
    cin>>n>>t;
    int m =0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m=max(m,a[i]);

    }
    int k=a[0];
    for(int i=1; i<n; i++)
    {
        if(k<a[i])
        {
            b[a[i]]++;
            k=a[i];
            if(b[a[i]]>=t)
            {
                cout<<k<<endl;
                return 0;
            }
        }
        else
        {
            b[k]++;
            if(b[k]>=t)
            {
                cout<<k<<endl;
                return 0;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}
