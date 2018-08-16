#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long T,N,B,K,a,r,r1;
    cin>>T;
    while(T--)
    {
        cin>>N>>B;
        r1=0;
        while(B--)
        {
            r=1;
            cin>>K;
            while(K--)
            {
                cin>>a;
                r*=a%N;
                r=r%N;
            }
            r1+=r;
        }
        cout<<r1%N<<endl;
    }
    return 0;
}
