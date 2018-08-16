#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++){
       cout<<min(n-i+1,i)<<endl;
    }
    //cout<<a<<endl;
    return 0;
}
