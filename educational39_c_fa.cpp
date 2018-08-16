#include<bits/stdc++.h>
using namespace std;
int main()
{
    int C,B;
    int n,a;
    cin>>n;
    B=C=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>0)B+=a;
        else C+=a;
    }
    cout<<B-C<<endl;
    return 0;
}
