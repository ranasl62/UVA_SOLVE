#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("10921uva.txt","w",stdout);
    string Str; // no need to use extra String
    while(getline(cin,Str))
    {
        int i=0;
        while(Str[i]!='\0')
        {
            if(Str[i]=='A'||Str[i]=='B'||Str[i]=='C')
                Str[i++]='2';
            else if(Str[i]=='D'||Str[i]=='E'||Str[i]=='F')
                Str[i++]='3';
            else if(Str[i]=='G'||Str[i]=='H'||Str[i]=='I')
                Str[i++]='4';
            else if(Str[i]=='J'||Str[i]=='K'||Str[i]=='L')
                Str[i++]='5';
            else if(Str[i]=='M'||Str[i]=='N'||Str[i]=='O')
                Str[i++]='6';
            else if(Str[i]=='P'||Str[i]=='Q'||Str[i]=='R'||Str[i]=='S')
                Str[i++]='7';
            else if(Str[i]=='T'||Str[i]=='U'||Str[i]=='V')
                Str[i++]='8';
            else if(Str[i]=='W'||Str[i]=='X'||Str[i]=='Y'||Str[i]=='Z')
                Str[i++]='9';
                else
                    i++;
        }
        cout<<Str<<endl;

    }

    return 0;

}
