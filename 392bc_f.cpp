
#include<bits/stdc++.h>
using namespace std;
struct text{
int a;
char c;
};
int main()
{
    string str;
    text a[4];
    cin>>str;
    int j=0,y,r,b,g;
    y=r=g=b=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='!')
        {
            a[i%4].a=i%4;
            a[i%4].c=str[i];
        }

    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='!')
        {
            if(a[i%4].c=='Y' && a[i%4].a==i%4)
            {
                y++;
            }if(a[i%4].c=='B'&& a[i%4].a==i%4)
            {
                b++;
            }if(a[i%4].c=='G'&& a[i%4].a==i%4)
            {
                g++;
            }if(a[i%4].c=='R'&& a[i%4].a==i%4)
            {
                r++;
            }
        }
    }
    cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
    return 0;
}
