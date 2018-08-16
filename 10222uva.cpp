#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
    map<char,char>m;
    m[']']='p';
    m['[']='o';
    m['p']='i';
    m['o']='u';
    m['i']='y';
    m['u']='t';
    m['y']='r';
    m['t']='e';
    m['r']='w';
    m['e']='q';

    m['\\']=';';
    m['\'']='l';
    m[';']='k';
    m['l']='j';
    m['k']='h';
    m['j']='g';
    m['h']='f';
    m['g']='d';
    m['f']='s';
    m['d']='a';

    m['/']=',';
    m['.']='m';
    m[',']='n';
    m['m']='b';
    m['n']='v';
    m['b']='c';
    m['v']='x';
    m['c']='z';

    string str,str1="";
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
            if(str[i]==' ')
                str1+=' ';
            else
            str1+=m[tolower(str[i])];
    }
    cout<<str1<<endl;
    return 0;
}
