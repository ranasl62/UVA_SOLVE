#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>prime;
bool arr[10000000];
void Prime()
{
    prime.push_back(2);
    for(int i=3;i<1000099;i+=2)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(int j=i+i;j<=1000099;j+=i)
                arr[i]=1;
        }
    }
}
int main()
{
    int t;
    Prime();
    //for(int i=0;i<10000;i++)
       // cout<<prime[i]<<" ";
    scanf("%d",&t);
    while(t--)
    {
        vector<int>::iterator L,U;
        int l,u;
        scanf("%d%d",&l,&u);
        L=upper_bound(prime.begin(),prime.end(),l);
        U=upper_bound(prime.begin(),prime.end(),u);
        int low=L-prime.begin();
        int up=U-prime.begin();
       // cout<<low<<" "<<up<<endl;
    }
    return 0;
}
