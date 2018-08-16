#include<bits/stdc++.h>
using namespace std;
int arr[100+10][100+10];
int dp[100+10][100+10];
int dps(int i,int j)
{
    if(i<0)return dps(0,i-1);
    if(j>)return dps(0,i-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        for(int i=0;i<2*n-1;i++)
        {
            if(n/2+1>=i)
            for(int j=0;j<i;j++)
               cin>>arr[i][j];
            else
            for(int j=0;j<2*n-i;j++)
            cin>>arr[i][j];
        }
        cout<<"Case :"<<k<<" "<<dps(0,0)<<endl;

    }
    return 0;
}
