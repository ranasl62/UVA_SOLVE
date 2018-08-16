#include<cstdio>
int main()
{
        int n,r;
        int i=1;
        while(scanf("%d%d",&n,&r) and r){
        if((n-1)/r >26)
        printf("Case %d: impossible\n",i);
        else
        printf("Case %d: %d\n",i,(n-1)/r);
        i++;
        }
    return 0;
}
