#include<bits/stdc++.h>
using namespace std;
int makeResult(int n, int digit)
{
    int i=1;
    int sum=digit;
    while(sum%n!=0)
    {
        sum=sum*10+digit;
        sum=sum%n;
        i++;
    }
    return i;
}
int main()
{
    int t,n,digit;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>digit;
        cout<<"Case "<<i<<": "<<makeResult(n,digit)<<endl;
    }
    return 0;
}
