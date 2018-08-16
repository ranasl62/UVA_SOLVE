#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[4]= {"North", "South", "West", "East"};
    int t;
    int i;
    int n=0;
    int s=0;
    string str;
    cin>>t;
    int k=0;
    while(t--)
    {
        cin>>i>>str;
        if(n==0 && str!=a[1] )
            k=1;
        if(n==20000 && str!=a[0])
            k=1;
        if(n>20000 ||n<0)
            k=1;
        if(str==a[0])
            n-=i;
        if(str==a[1])
            n+=i;
//        n%=40000;
    }
    if(n==0 && k==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
