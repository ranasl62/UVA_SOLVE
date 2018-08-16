#include<iostream>
using namespace std;
int main()
{
    int n,b,h,w,sum,a,p,t;
    while(cin>>n>>b>>h>>w)
    {
        sum=9999999999;
        t=0;
        for(int i=0; i<h; i++)
        {
            cin>>p;

            for(int j=0; j<w; j++)
            {
                cin>>a;
                if(a>=n && p*n<=b)
                {
                    if(sum>p*n)
                        sum=p*n;
                    t=1;
                }
            }
        }
        if(!t && sum>b)
            cout<<"stay home"<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
