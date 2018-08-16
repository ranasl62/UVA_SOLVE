#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,m;
    cin>>n>>m;
    cin>>str;
    int a,b;
    char x,y;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        cin>>x>>y;
        for(int i=a-1;i<b;i++)
        {
            if(str[i]==x)str[i]=y;
        }
    }
    cout<<str<<endl;
    return 0;
}
