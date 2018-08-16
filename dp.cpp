#include<bits/stdc++.h>
using namespace std;
long long dp[1000000];
int F( int n ) {
if( n == 0 ) return 0;
if( n == 1 ) return 1;
if( dp[n]!=-1) return dp[n];
else
{
dp[n] = F( n-1 ) + F( n-2 );
return dp[n];
}
}
int main()
{
    long long n;
    //cin>>n;
    n=40;
    memset(dp,-1,sizeof(dp));
    cout<<F(n)<<endl;
    return 0;
}
