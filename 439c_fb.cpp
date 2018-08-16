#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,N,out;
    scanf("%I64d%I64d",&A,&N);
    out=A+1;
    if(N-A>10 || N%10==0)cout<<0<<endl;
    else
    {
        for(int i=A+2;i<=N;i++)
        {

           out=(out%10)*(i%10);
        }
        cout<<out%10<<endl;
    }
    return 0;
}
