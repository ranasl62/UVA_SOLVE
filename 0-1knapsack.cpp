#include<bits/stdc++.h>
using namespace std;
int weight[100];
int cost[100];
int dp[100][100];
int cap,n;
int Knapsack(int i,int w)
{
    if(n<=i)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    if(w<weight[i])return Knapsack(i+1,w);
    int ret=Knapsack(i+1,w);
    int ret1=cost[i]+Knapsack(i+1,w-weight[i]);
    dp[i][w]=max(ret,ret1);
    return dp[i][w];

}
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>weight[i]>>cost[i];
    cin>>cap;
    cout<<Knapsack(0,cap)<<endl;
    return 0;
}
