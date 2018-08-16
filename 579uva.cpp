#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double h,m;
    while(1)
    {
        scanf("%lf:%lf",&h,&m);
        if(h==0&&m==0)
            break;
           h=h*30+(m/60)*30-m*6;
            cout<<fixed<<setprecision(3);
            if(h<0)
                h*=-1;
            if(h>180)
            cout<<360-h<<endl;
            else
                cout<<h<<endl;
    }
    return 0;
}
