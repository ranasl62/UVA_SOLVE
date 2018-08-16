#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double x,y,r,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>r;
        cout<<fixed;
        cout<<setprecision(2)<<r-sqrt(x*x+y*y)<<" "<<r+sqrt(x*x+y*y)<<endl;
    }
    return 0;
}
