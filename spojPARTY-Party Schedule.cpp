#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,W;
    scanf("%d%d",&W,&n);
    while(W && n)
    {
        int fun[n],cost[n];

        for(int i=0; i<n ; ++i)
            scanf("%d%d",&cost[i],&fun[i]);

        int dp[n+1][W+1];

        for(int i=0; i<=n; ++i)
            for(int w=0; w<=W ; ++w)
                if(i==0 || w==0)dp[i][w]=0;
                else if(cost[i-1]>w)dp[i][w]=dp[i-1][w];
                else dp[i][w]=max(fun[i-1]+dp[i-1][w-cost[i-1]],dp[i-1][w]);



        int ans=0;

        for(int i=1; i<=W; ++i)
            if(dp[n][i]==dp[n][W]){
                ans=i;
                break;
            }
        printf("%d %d\n",ans,dp[n][W]);
        scanf("%d%d",&W,&n);
    }
    return 0;
}
