#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char ch[64];
    int i=0;
    unsigned sum=0;
    while(gets(ch))
    {
        int bit=128;
        if(ch[i]!='|')continue;
        for(;ch[i];i++)
        {
            if(ch[i]==' ')
                bit>>=1;
            else if(ch[i]=='o')
            {
                sum+=bit;
                bit>>=1;
            }
        }
    }
    printf("%s",sum);
    return 0;
}
