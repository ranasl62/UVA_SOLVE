#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
    ll t;
    scanf("%lld",&t);
    for(ll i=1;i<=t;i++)
    {
        ll a;
        scanf("%lld",&a);
        printf("%lld\n",(ll)(sqrt(1+8*a)-1)/2);
    }
    return 0;
}
