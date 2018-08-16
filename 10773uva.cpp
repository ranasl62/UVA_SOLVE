#include<cstdio>
#include<cmath>
int main()
{

    int t;
    double d,u,v;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    scanf("%lf%lf%lf",&d,&v,&u);
    if(v==0||u==0||u<=v)
    printf("Case %d: can't determine\n",i);
    else
    printf("Case %d: %.3lf\n",i,(double)(fabs((d/u) - (d / sqrt(u*u - v*v)))));
    }
    return 0;
}
