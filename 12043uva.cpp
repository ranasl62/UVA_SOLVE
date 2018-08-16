#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int a,b,k,t;
vector<int>arr;
long long dNumber,dSum;
void makeDivisor(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            dSum+=i;
            dNumber++;
            if(i*i!=n)
            {
                dSum+=n/i;
                dNumber++;
            }
        }
    }
}
int main()
{
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
         dNumber=dSum=0;
        scanf("%d%d%d",&a,&b,&k);
        int x=min(a,b);
        int y=max(a,b);
        int p=0;
        for(int i=x;i<=y;i++){
            if(i%k==0){
                p=i;break;
            }
        }
        if(p)
        for(int i=p;i<=y;i+=k)
            arr.push_back(i);
        for(int i=0;i<arr.size();i++)
        {
            makeDivisor(arr[i]);

        }
        printf("%lld %lld\n",dNumber,dSum);
//        if(!t)
//        printf("\n");
        arr.clear();
    }
    return 0;
}
