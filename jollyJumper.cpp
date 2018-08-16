#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("std.txt","w",stdout);
    int n;
        int arr[3050];
    while(cin>>n)
    {
        int count = 1,i;
        for( i=0; i<n; i++)
            cin>>arr[i];
        for( i=0; i<n-1; i++)
        {
            arr[i]=abs(arr[i+1]-arr[i]);

        }
        sort(arr,arr+i);
        n=i;
        for( i = 0 ; i<n; i++)
            if(arr[i]!=i+1)
            {
                count=0;
                break;
            }
        if(count==0)
            cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;
    }
    return 0;
}
