#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int>m;
    map <string,string>input;
    map <string,string>::iterator it;
    freopen("test.txt","r",stdin);
    int n;
    string str,str2;
    scanf("%d",&n);
    int i;
    while(n--)
    {
        i=1;
        while(cin>>str && str[0]!='*')
            m[str]=i++;
       while(cin>>str>>str2)
           cout<<m[str2]-m[str]<<endl;


    }
    return 0;
}
