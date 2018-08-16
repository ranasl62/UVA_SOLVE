#include<bits/stdc++.h>
using namespace std;
vector<long long >a;
int main()
{
    //freopen("text.txt","r",stdin);
    long long  n,k;
    scanf("%I64d %I64d",&n,&k);
    //cout<<n<<endl<<k<<endl;
    for(long long i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            a.push_back(n/i);
            if(n/i!=i)
                a.push_back(i);
               // if(a.size()>1000000001)break;
        }
    }
    sort(a.begin(),a.end());
        //for(int i=0;i<a.size();i++)cout<<a[i]<<endl;
    if(a.size()>=k)printf("%I64d\n",a[k-1]);
    else cout<<-1<<endl;

    return 0;
}
