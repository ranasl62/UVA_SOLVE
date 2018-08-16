#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,co=0,k;
    cin>>n;
    int arr[n+1];
    cin>>k;
    while(n--){
    char c;
    cin>>c>>p;
    if(c =='+')
    {
        k=k+p;

    }
    else if(c=='-' && (k-p)>0)
    {
        k=k-p;
    }
    else if (c=='-'&& (k-p)<0)
        co++;}
    cout<<k<<" "<<co<<endl;

    return 0;
}
