#include<iostream>
using namespace std;
int main()
{
    int t,n,l,limitOfMe;
    int arr[10];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int flag=0;
        int sum=0;
        cin>>n>>l;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            sum+=arr[j];

        }
        if(sum>l)flag=1;
        for(int k=0;k<n;k++)
        {
            cin>>limitOfMe;
            if(limitOfMe<arr[k])
               flag=1;
        }
        if(flag)
        cout<<"Case "<<i<<": "<<"No"<<endl;
        else
        cout<<"Case "<<i<<": "<<"Yes"<<endl;


    }

}
