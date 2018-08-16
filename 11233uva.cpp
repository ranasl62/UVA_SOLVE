#include<bits/stdc++.h>
using namespace std;
string cheek(string str)
{
    int len =str.size();
    if(str[len-1]=='y'&&str[len-2]!='o'&&str[len-2]!='e'&&str[len-2]!='i'&&str[len-2]!='u'&&str[len-2]!='a')
    {
        str=str.substr(0,len-1)+"ies";
        return str;
    }
    if(str[len-1]=='o'||str[len-1]=='s'||str[len-1]=='x'||((str[len-1]=='h'&&(str[len-2]=='s'||str[len-2]=='c'))))
        return str+"es";
    else return str+"s";

}
int main()
{
   // freopen("11233uva.txt","w",stdout);
    map<string,string>m;
    vector<string>listOfWord;
    string str,str1;
    int l,n;
    cin>>l>>n;
    while(l--)
    {
        cin>>str>>str1;
        m[str]=str1;
    }
    while(n--)
    {
        cin>>str;
        if(m.find(str)!=m.end())
        {
            listOfWord.push_back(m[str]);
        }
        else
        {
            str=cheek(str);
            listOfWord.push_back(str);
        }

    }
    for(auto& x:listOfWord)
        cout<<x<<endl;

    return 0;
}
