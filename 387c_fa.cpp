#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    int a=0;
    int b=0;
    a=ceil( (int) sqrt(n));
    while(true)
    {
        b=n/a;
        if(n%a==0)break;
        else a--;

    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
