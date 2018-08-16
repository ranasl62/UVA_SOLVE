#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        cout<<2;
        for(int i=4; i<=n; i+=2)
            cout<<" "<<2;
        cout<<endl;
    }
    else
    {

        cout<<n/2<<endl;
        cout<<3;
        n=n-3;
        for(int i=2; i<=n; i+=2)
            cout<<" "<<2;
        cout<<endl;
    }

    return 0;
}
