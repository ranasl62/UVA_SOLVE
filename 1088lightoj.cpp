#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,q;
    vector<int>arr;
    vector<int>::iterator low ,up;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&q);
        for(int j=0;j<n;j++)
        {
            int a;
            scanf("%d",&a);
            arr.push_back(a);

        }
        printf("Case %d:\n",i);
        for(int k=0;k<q;k++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if(a>b)swap(a,b);
            low = lower_bound(arr.begin(),arr.end(),a);
            up = upper_bound(arr.begin(),arr.end(),b);
            int L=low-arr.begin();
            int U=up-arr.begin();
            printf("%d\n",U-L);
        }
        arr.clear();
    }
    return 0;
}
