#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void reverse (char ch[] ,int len)
{
    char r_ch[len];
    for(int i=0;i<len;i++)
        r_ch[i]=ch[len-i-1];
      for(int i=0;i<len;i++)
        ch[i]=r_ch[i];
}
int main()
{
    int len,i,n;
    char ch[1001];
    cin>>n;
    while(n--)
    {
        getchar();
        scanf("%[^\n]",ch);
        for(i=0;ch[i]!='\0';i++)
            if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
            ch[i]+=3;
            len=strlen(ch);
        reverse(ch,len);
        for(i=len/2;ch[i]!='\0';i++)
            ch[i]--;
        printf("%s\n",ch);
    }
    return 0;
}
