#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int n,i,t,k;
    cin>>t;
    k=t;
    while(t--)
    {
        if(k==t+1)
        getchar();
        gets(a);

        n=strlen(a);
        i=n/2-1;
        while(i!=-1)
        {
            printf("%c",a[i--]);
        }
        i=n-1;
        while(i!=n/2-1)
        {
            printf("%c",a[i--]);
        }
        printf("\n");
    }
    return 0;
}
