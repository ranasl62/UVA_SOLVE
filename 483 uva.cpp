
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

string ReverseWord(string str)
{
    for(int i=0; i<str.size()/2; i++)
        swap(str[i],str[str.size()-i-1]);
    return str;
}
int main()
{
    //freopen("483uva.txt","w",stdout);
    string old , New,Temp;
    while(getline(cin,old))
    {
        New="";
        Temp="";
        for(int i=0; i<=old.size(); i++)
        {
            if(old[i]==' ')
            {
                Temp=Temp+ReverseWord(New)+" ";
                New="";
            }
            else if (old[i]=='\0')
            {
                Temp=Temp+ReverseWord(New);
                New="";
            }
            if(old[i]!=' ')
            New+=old[i];
        }
        cout<<Temp<<endl;

    }

    return 0;
}
