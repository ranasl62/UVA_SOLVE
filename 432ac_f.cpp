#include<stdio.h>
using namespace std;
int main()
{
    long long k,n,t;
    scanf("%I64d%I64d%I64d",&n,&k,&t);
    //cout<<n<<k<<t;
    if(t<=k && n>t)
    {
      printf("%I64d",t);
    }
    else if(t>k && n>t)
    {
        printf("%I64d",n-k);
    }
    else
    {
        printf("%I64d",(n+k-t));
    }

    return 0;
}
