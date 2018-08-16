#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
void decode(string str)
{
    int number=0;

    for(int i=str.size()-1;i>=-1;i--)
    {
        if(number>31){
            cout<<(char)number;
            number=0;
        }
        if(i==-1)break;
            number=number*10+str[i]-'0';
    }
    cout<<endl;
}
void Reverse(char a)
{
    int number=(int)a;

    while(number)
    {
        cout<<number%10;
        number/=10;
    }
}
void encode(string str)
{
   int number=0;

    for(int i=str.size()-1;i>=0;i--)
    {
       Reverse(str[i]);
    }
    cout<<endl;
}
int  main()
{
    //freopen("444text.txt","r",stdin);
    string str;
    while(getline(cin,str))
    {
        if(isdigit(str[0]))
            decode(str);
        else
            encode(str);
    }
    return 0;
}
