#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,l=2;
    double s=0,n;
    char a;
    scanf("%c",&a);
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%lf",&n);
           if (i>=7 && j >= i-l && j <=i-1)
                s += n;
        }
        if(i>=7)
        l+=2;
    }
    if(a=='S')
        printf("%.1lf\n",s);
    else
        printf("%.1lf\n",s/30);

    return 0;
}

