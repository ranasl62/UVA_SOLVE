#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,c,Count=0;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
            if(arr[i]-arr[i-1]<=c)
                Count++;
                else
                    Count=0;
            if(n==1)
            cout<<1<<endl;
            else
                cout<<Count+1<<endl;

    return 0;
}
