#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j;
    double s=0,n;
    char a;
    scanf("%c",&a);
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%lf",&n);
            if (j+i <=10)
                s += n;
        }
    }
    if(a=='S')
        printf("%.1lf\n",s);
    else
        printf("%.1lf\n",s/66);

    return 0;
}
