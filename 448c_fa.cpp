#include<bits/stdc++.h>
using namespace std;
int a[365];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]),a[i]+=a[i-1];
    }
   // for(int i=1;i<=n;i++){
       // cout<<a[i]<<" ";
  //  }
  //  cout<<endl;
    int res=360;
    for(int i=1;i<=n;i++)
        for(int j=0;j<=i;j++){
            res=min(res,abs(2*(a[i]-a[j])-a[n]));
            //printf("%4d %4d%4d %4d\n",a[i] ,a[j],abs(2*(a[i]-a[j])-a[n]),a[n]);
        }
    printf("%d\n",res);
    return 0;
}
