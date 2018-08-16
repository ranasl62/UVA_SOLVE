#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        long long sum=0;
        scanf("%d%d",&n,&k);
        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i%k!=0)
                    sum+=i;
                int a=n/i;
                if(a%k!=0 && n!=i*i)
                    sum+=a;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
