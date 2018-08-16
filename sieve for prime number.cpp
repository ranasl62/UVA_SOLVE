#include<bits/stdc++.h>
using namespace std;
int arr[1000010];
int main()
{
   freopen("out.txt","r",stdin);
  freopen("test2.txt","w",stdout);
    memset(arr,0,sizeof(arr));
    for(int i=2; i<=1000000; i+=2) arr[i]=1;
    arr[2]=0;
    for(int i=3; i*i<=1000000; i+=2)
    {
        if(!arr[i])
        {
              //  if(i==100)break;
            for(int j=i+i; j<=1000000; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int p;
        scanf("%d",&p);
        if(arr[p])printf("Case: %d  Composite\n",i);
        else printf("Case: %d  Prime\n",i);
   }
    return 0;
}
