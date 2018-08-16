#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,arr[21];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cout<<(arr[n-1]-arr[0])*2<<endl;
    }
    return 0;
}
