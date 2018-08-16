#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int speed=0;
    double distrance=0;
    int lastTime=0;
    int time=0;
    int h,m,s,newSpeed;
    char str[1000];
    while(cin.getline(str,sizeof(str)))
    {
        int n = sscanf(str,"%d:%d:%d %d",&h,&m,&s,&newSpeed);
       // cout<<n<<endl;
        lastTime = (h*3600 + m*60 +s);
        distrance+=(double)(lastTime-time)*speed;
        time=lastTime;
        if(n==3)
            printf("%02d:%02d:%02d %.2lf km\n",h,m,s,(double)(distrance/3600));
        else
            speed=newSpeed;

    }
    return 0;
}
