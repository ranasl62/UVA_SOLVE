#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("11585uva.txt","w",stdout);
    long long t;
    long long mn;
    long long a;
    while(cin>>t)
    {
        mn=90000009;
        for(int i=0;i<t;i++)
        {
        cin>>a;
        long long c=abs(a-i);
        if(mn>c)
            mn=a;
        }
        cout<<mn<<endl;
    }
    return 0;
}
