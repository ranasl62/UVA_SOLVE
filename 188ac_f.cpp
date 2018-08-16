#include<cstdio>
#include<cctype>
#include<cmath>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(n%2)n++;
    if(n/2>=k)
        printf("%d\n",k*2-1);
    else if(n%2)
        printf("%d\n",(k-(n-1)/2)*2);
    else
        printf("%d\n",(k-(n )/2)*2);
    return 0;
}
