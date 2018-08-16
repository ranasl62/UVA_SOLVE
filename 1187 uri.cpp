#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,l=1;
    double s=0,n;
    char a;
    scanf("%c",&a);
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%lf",&n);
           if (j >= l && j <= 11 - l)
                s += n;
        }
        l++;
    }
    if(a=='S')
        printf("%.1lf\n",s);
    else
        printf("%.1lf\n",s/30);

    return 0;
}

