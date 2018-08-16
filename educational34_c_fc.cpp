#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int x;
    vector<long long>a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int c=1;
    int mx=0;
    for(int i=1; i<n; i++)
    {
        if(a[i-1]==a[i])
        {
            c=c+1;
            //cout<<c<<endl;
        }
        else
        {
             mx=max(c,mx);
            //cout<<c<<endl;
            c=1;
        }
        // cout<<a[i-1]<<endl;
    }
    mx=max(c,mx);
    cout<<mx<<endl;
    return 0;
}
