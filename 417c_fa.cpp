#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool S[4],R[4],L[4],P[4];
    bool result=false;
    for(int i=0;i<4;i++)
    {
        cin>>L[i]>>S[i]>>R[i]>>P[i];
    }
    for(int i=0;i<4;i++)
    {
        if(P[i] && (L[i]|| S[i]||R[i]||L[(i+1)%4] || S[(i+2)%4] || R[(i+3)%4]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
