#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("621uva.txt","w",stdout);
    string Str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>Str;
        int len =Str.length();
        if(Str=="78"||Str=="4"||Str=="1")
            cout<<"+"<<endl;
        else if(Str[len-1]=='5'&&Str[len-2]=='3')
            cout<<"-"<<endl;
        else if(Str[0]=='9'&&Str[len-1]=='4')
            cout<<"*"<<endl;
        else
            cout<<"?"<<endl;
    }
    return 0;
}
