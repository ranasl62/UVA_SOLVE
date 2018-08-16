#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a;
    vector<int>arr[100000];
    cin>>n>>k>>m;
    for( int i=0; i<n; i++)
    {
        cin>>a;
        arr[a%m].push_back(a);
    }
    for(int i=0; i<m; i++)
    {
        if((int)arr[i].size()>=k)
        {
            cout<<"Yes"<<endl;


            for(int j=0; j<k; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
