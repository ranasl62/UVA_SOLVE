#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,n,l,k;
    while(cin>>n)
    {
        char newch[101],ch[101];
        j=0;
        i=0;
        l=0;
        k=0;
        cin>>ch;
        if(n==0&&ch[0]=='0')
            break;
        for(i=0; ch[i]!='\0'; i++)
        {
            if(ch[i]==n+48)
                continue;
            else
            {
                newch[j]=ch[i];
                j++;
            }
            newch[j]='\0';
        }

        for(i=0; newch[i]!='\0'; i++)
            if(newch[i]=='0')
                l++;
            else
            {
                k++;
                break;
            }
        if(j==0||k==0)
            cout<<0<<endl;
        else
        {
            for(i=l; newch[i]!='\0'; i++)
                cout<<newch[i];
            cout<<endl;
        }

    }
    return 0;
}
