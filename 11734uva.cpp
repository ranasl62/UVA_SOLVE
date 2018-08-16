#include<bits/stdc++.h>
using namespace std;
string cheek(string str)
{
    string s="";
    int len=str.size();
    for(int i=0; i<len; i++)
    {
        if(str[i]!=' '&&str[i]!='\n')
            s+=str[i];
    }
    //cout<<s<<endl;
    return s;
}
int main()
{
    string str,str1;
    int t;
    cin>>t;
    getchar();
    for(int i=1; i<=t; i++)
    {
        getline(cin,str);
        cin>>str1;
        getchar();
        // cout<<str<<" "<<str1<<endl;
        if(str==str1)
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        else if (str1==cheek(str))//just remove the space of str string
            cout<<"Case "<<i<<": "<<"Output Format Error"<<endl;
        else
            cout<<"Case "<<i<<": "<<"Wrong Answer"<<endl;
    }
    return 0;
}
