#include<bits/stdc++.h>
using namespace std;
#define mx INT_MAX
int main()
{
    int nn,si,di;
    cin>>nn;
    int res=0;
    for(int i=0;i<nn;i++)
    {
        cin>>si>>di;
        int k=0;
        while(true)
        {
            if(res<si+di*k)
            {
                res=si+di*k;
                break;

            }
            k++;
        }
    }
    cout<<res<<endl;
    return 0;
}
