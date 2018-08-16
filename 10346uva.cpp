#include<iostream>
using namespace std;
int butts(int n,int k)
{
    int temp=0;
    int t = n;
    while(n>=k && k>1)
    {
        temp += n/k;
        n=n/k+n%k;
    }
    return temp;
}
int main()
{
    int n,k;
    while(cin>>n>>k)
        cout<<n+butts(n,k)<<endl;
    return 0;
}
