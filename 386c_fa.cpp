#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    while(a>=1&&b>=2&&c>=4)
    {
        sum+=7;
        a=a-1;
        b=b-2;
        c=c-4;
    }
    cout<<sum<<endl;
    return 0;
}
