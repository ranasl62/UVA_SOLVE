#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("test.txt","r",stdin)
    long long a,b;
    cin>>a>>b;
    while(a&&b)
    {
        if(a>=2*b)
        {
            a=a%(2*b);
            continue;
        }
        else
        {
            if(b>=2*a)
                b=b%(2*a);
            else
            {
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }


    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
