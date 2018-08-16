#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,n;
    cin>>n;
    while(n--)
    {
    cin>>a;
    a-=2015;
    if(a<0)
        cout<<abs(a)<<" D.C."<<endl;
    else
        cout<<a+1<<" A.C."<<endl;
    }
    return 0;
}
