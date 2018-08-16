#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string str;
    cin>>n;
    cin>>str;
    int a,b;
    a=b=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='D')
            a++;
            else b++;
    }
    if(a*2==b)cout<<"R"<<endl;
    else cout<<"D"<<endl;
    return 0;
}

