#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int m,a,r,g,ii,tt,cnt;
    m=a=r=g=ii=tt=cnt=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='M') m++;
        else if(str[i]=='A')a++;
        else if(str[i]=='R')r++;
        else if(str[i]=='G')g++;
        else if(str[i]=='I')ii++;
        else if(str[i]=='T')tt++;
    }
    while(m&&a>=3&&r>=2&&g&&ii&&tt)
    {
        m--,a-=3,r-=2,g--,ii--,tt--;
        cnt++;
    }
    printf("%d\n",cnt);
    }
    return 0;
}
