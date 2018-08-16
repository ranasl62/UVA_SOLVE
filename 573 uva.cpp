#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("573uva.txt","w",stdout);
    double H,U,D,F,sum;
    int day;
    while(cin>>H>>U>>D>>F&&H)
    {
        sum=0;
        day=0;
        F=F*U/100;
        while(1)
        {
            day++;
            if(U>0)
                sum+=U;
            U-=F;
            if(sum>H) break;
            sum-=D;
            if(sum<0)break;
        }
        if(H<=sum)cout<<"success on day "<<day<<endl;
        else cout<<"failure on day "<<day<<endl;
    }
    return 0;
}
