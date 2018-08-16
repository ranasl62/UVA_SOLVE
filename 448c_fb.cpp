#include<bits/stdc++.h>
using namespace std;
int arr[365];
int main()
{
    long long arr[100000+10];
    long long x,k;
    int n;
    cin>>n>>x>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(k==0){cout<<n<<endl; return 0;}
    int h=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int c=0;
            for(int p=arr[i];p<=arr[j];p++)
            {
                if(arr[j]<=arr[p])
                {
                    if(arr[p]%x==0)c++;
                }
            }
            if(c==k)h+=c;
        }
    }
    cout<<h<<endl;
    return 0;

}
