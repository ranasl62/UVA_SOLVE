#include<bits/stdc++.h>
using namespace std;
bool arr[210];
void reset()
{
    for(int i=0; i<210; i++)arr[i]=0;
    return;
}
int main()
{
    int t;
    int n,k;
    int a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<int>arr;
        int t=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>k;
            if(i==1){
            if(a<=i && i<=k){cout<<t;t++;}
            else cout<<0;
            }
            else if(a<=i && i<=k){cout<<" "<<t;t++;}
            else cout<<" "<<0;

        }
        cout<<endl;

    }



    return 0;
}
