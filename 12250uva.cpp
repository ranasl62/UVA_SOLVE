#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string Str;
    int p=1;
    while (cin>>Str)
    {
        if(Str=="#")break;
        for(int i=0; i<Str.length(); i++)
            Str[i]=toupper(Str[i]);
        if("HELLO"==Str)
            cout<<"Case "<<p++<<": ENGLISH"<<endl;
             else if ("HOLA"==Str)
            cout<<"Case "<<p++<<": SPANISH"<<endl;
            else if("HALLO"==Str)
            cout<<"Case "<<p++<<": GERMAN"<<endl;
            else if("BONJOUR"==Str)
            cout<<"Case "<<p++<<": FRENCH"<<endl;
            else if("CIAO"==Str)
            cout<<"Case "<<p++<<": ITALIAN"<<endl;
            else if("ZDRAVSTVUJTE"==Str)
            cout<<"Case "<<p++<<": RUSSIAN"<<endl;
            else
            cout<<"Case "<<p++<<": UNKNOWN"<<endl;
    }
    return 0;
}
