#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char a[10];
    int n;
    scanf("%s",a);
    n=strlen(a);
    while(n)
    {
        n--;
        printf("%c",a[n]);
    }
    printf("\n");
    return 0;
}
