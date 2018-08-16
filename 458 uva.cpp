#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
   char a[1000];
   int i=0;
    while(gets(a)){
        i=strlen(a);
        for(int l=0;l<i;l++)
        cout<<(char)(a[l]-7);
        cout<<endl;
    }

    return 0;
}
