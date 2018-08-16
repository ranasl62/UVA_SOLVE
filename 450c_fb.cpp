#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a,b,c;
    cin>>a>>b>>c;
    int i=1;
    while(i<1000)
    {
       a=a*10;
       if(a/b==c){cout<<i<<endl;return 0;}
       a=a%b;
       i++;
    }
    cout << -1<<endl;
    return 0;
}
