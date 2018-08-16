#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,c,f,t,k;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        e+=f;
        f=0;
        k=0;
        while(e>=c)
        {
            k+=e/c;
            f=e%c;
            e=e/c+f;
        }
        cout<<k<<endl;
    }
    return 0;
}
