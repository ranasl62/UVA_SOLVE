#include<bits/stdc++.h>
using namespace std;
long long peli(long long l)
{
    long long temp=l;
    while(l)
    {
        temp=temp*10+l%10;
        l=l/10;
    }
    return temp;
}
int main()
{
    long long n,k,s=0;
    scanf("%I64d %I64d",&n,&k);
   for(int i=1;i<=n;i++)
    s=(s+peli(i))%k;
    printf("%I64d\n",s);
    return 0;
}
