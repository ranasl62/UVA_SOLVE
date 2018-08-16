#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    cin>>str;
    set<int>Sets;
    int s=0;
    for(int i=0; i<t; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            if(Sets.size()>s)s=Sets.size();
            Sets.clear();
        }
        if(str[i]>='a'&&str[i]<='z')

            Sets.insert(toascii(str[i]));


    }
    if(Sets.size()>s)s=Sets.size();
    cout<<s<<endl;

    return 0;
}
