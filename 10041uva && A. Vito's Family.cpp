#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("10041.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int r; cin>>r;
        int arr[r];
        for(int i=0;i<r;i++)
            cin>>arr[i];
        long long sum=0,tempSum=999999999999;

        for(int i=0;i<r;i++)
        {   sum=0;
            for(int j=0;j<r;j++)
            {
                sum+=abs(arr[i]-arr[j]);
            }
           // cout<<tempSum<<" ";
            tempSum=min(sum,tempSum);
    }
   // cout<<endl;
            cout<<tempSum<<endl;
    }
    return 0;
}
