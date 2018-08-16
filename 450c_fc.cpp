#include<bits/stdc++.h>
using namespace std;
int k;
int arr[10000];
long long sb(int n, int i)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    // means coins over and n>0 so no solution
    if (i == k && n > 0)
    {
        return 0;
    }
    return sb(n - arr[i], i) + sb(n, i + 1)%(long long )(10e9)+7;

}
int main()
{
    long long x,y,z=0;
    cin>>x>>y;
    int i=0;
    z=x;
    arr[0]=z;
    if(z==y)
    {
        cout<<y<<endl;
        return 0;
    }
    while(1)
    {
        if(z>y){}
        arr[i+1]=arr[i]+x;
        z+=arr[i+1];
        i++;
    }
    k=i;
    cout<<sb(y,0)<<endl;

    return 0;
}
