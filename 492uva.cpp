#include<iostream>
#include<cstdio>
using namespace std;
bool isVowel(char a)
{
    a=tolower(a);
    //cout<<a<<endl;
    if(a=='a'||a=='i'||a=='o'||a=='u'||a=='e')return true;
    else return false;
}
void makeOutput(string str)
{
//    cout<<str<<"."<<endl;;
   // cout<<str[0]<<endl;

    if(isVowel(str[0]))
    {
        for(int i=0; i<str.size(); i++)
        {
            cout<<str[i];
        }
        cout<<"ay";
    }
    else
    {
        for(int i=1; i<str.size(); i++)
            cout<<str[i];
        cout<<str[0]<<"ay";

    }
}
int main()
{
//    freopen("444text.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string str;
    while(getline(cin,str))
    {
       if(isalpha(str[str.size()-1]))str+=" ";
        string temp="";
        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i]))
                temp+=str[i];
            else
            {
                char a = str[i];
                if(isalpha(temp[0]))
                makeOutput(temp);
               // cout<<temp<<endl;
                if(i!=str.size()-1 && a==' ')cout<<" ";
                else if(a!=' ')cout<<a;
                temp="";
            }
        }
        cout<<endl;
        //getchar();
    }
    return 0;
}
