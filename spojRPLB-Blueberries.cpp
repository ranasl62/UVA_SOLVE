#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[1010];
int dp[1010][1010];
int solve(int i,int k)
{
    if(i>=n)return 0;
    if(dp[i][k]!=-1)return dp[i][k];
    if(k<arr[i]) return solve(i+1,k);
    else
    {
        dp[i][k] = max(arr[i]+solve(i+2,k-arr[i]),solve(i+1,k));
        return dp[i][k];
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&k);
        for(int j=0; j<n; j++)
            scanf("%d",&arr[j]);
        memset(dp,-1,sizeof(dp));
        printf("Scenario #%d: %d\n",i,solve(0,k));
    }
    return 0;
}
