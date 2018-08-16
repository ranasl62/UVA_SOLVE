#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
//    freopen("text.txt","r",stdin);
//    freopen("test.txt","w",stdout);
    int t;
    char a;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
    char str[210];
        gets(str);
        int sum=0;
        printf("Case %d: ",i);
        for(int j=0;j<strlen(str);j++)
        {
            if(isalpha(str[j])){
                for(int y=0;y<sum;y++)printf("%c",a);
                a=str[j];
                sum=0;
            }
            else
            {
                sum=sum*10+((int)str[j]-48);
            }
        }
        for(int y=0;y<sum;y++)printf("%c",a);
        puts("");
    }
    return 0;
}
