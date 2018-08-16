#include<iostream>
using namespace std;
int main()
{
    long long a,b,sum=0,i;
   cin>>a>>b;
    for( i=a;i<=b;i++)
    {
        sum+=i;
        if(sum>=b)
            break;
    }
        cout<<i<<endl;

    return 0;
}
