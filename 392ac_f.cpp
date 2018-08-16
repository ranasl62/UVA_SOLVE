
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long sum=0,mx=-1;
    cin>>n;
    int arr[101];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
            mx=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=(mx-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
