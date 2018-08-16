#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    char a;
    while(cin>>a)
    {
        if(isalnum(a))
            cout<<"is alnam"<<endl;
        if(isalpha(a))
            cout<<"is alpha"<<endl;
        if(isblank(a))
            cout<<"is blank"<<endl;
        if(iscntrl(a))
            cout<<"is cntrl"<<endl;
        if(isdigit(a))
            cout<<"is digit"<<endl;
        if(isgraph(a))
            cout<<"is graph"<<endl;
        if(islower(a))
            cout<<"is lower"<<endl;
        if(isprint(a))
            cout<<"is print"<<endl;
        if(ispunct(a))
            cout<<"is punct"<<endl;
        if(isspace(a))
            cout<<"is space"<<endl;
        if(isupper(a))
            cout<<"is upper"<<endl;
        if(isxdigit(a))
            cout<<"is xdigit"<<endl;
        cout<<tolower(a)<<endl;
        cout<<toupper(a)<<endl;
    }

    return 0;
}
