#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    //freopen("10812uva.txt","w",stdout);
    long long t, a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int x = (a+b)/2;
        int y = abs(a-b)/2;
       // cout<<x<<" "<<y<<endl;
            if(x+y==a && abs(x-y)==b)
                cout<<max(x,y)<<" "<<min(x,y)<<endl;
            else
                cout<<"impossible"<<endl;
    }
    return 0;
}
