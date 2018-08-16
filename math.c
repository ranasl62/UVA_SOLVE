#include<stdio.h>
#include<math.h>
int main()
{
    double pi=2*acos(0.0);
    double x,angle;
    scanf("%lf %lf",&x,&angle);
    printf("B = %lf\n",x*sin(angle*pi/180));
    printf("T = %lf\n",x*cos(angle*pi/180));
    printf("%lf",pow(5,2));
    return 0;
}
