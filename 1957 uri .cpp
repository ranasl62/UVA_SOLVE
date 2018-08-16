#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b[100],m,n,i;
    i=0;
    cin>>a;
    while(a)
    {
        m=a%16;
        if(m==10)
            m='A';
        if(m==11)
            m='B';
        if(m==12)
            m='C';
        if(m==13)
            m='D';
        if(m==14)
            m='E';
        if(m==15)
            m='F';
        b[i]=m;
        a/=16;
        i++;
    }
    while(i--)
    {
        if(b[i]>=65)
            printf("%c",b[i]);
        else
            cout<<b[i];

    }
    cout<<endl;
    return 0;
}

