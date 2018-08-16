#include<bits/stdc++.h>
using namespace std;
#define mx 240
int main()
{
    int n,k;
    cin>>n>>k;
    k=mx-k;
    int i=0;
    int t=0;
    while(k>=t && n>i)
    {
        i++;
        t+=i*5;
    }
    if((i*(i+1)/2)*5<=k)
    cout<<i<<endl;
    else
        cout<<--i<<endl;
    return 0;
}
