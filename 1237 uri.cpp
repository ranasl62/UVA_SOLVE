#include<bits/stdc++.h>
using namespace std;
char a[51],b[51];
bool c[128];
void finalresult(void)
{
    int k=0;
    for(int i=0;i<128;i++)
        if(c[i]==1)
        k++;
    cout<<k<<endl;
}
void print(int n , int m)
{
    if(m<n)
        swap(m,n);
    if(strlen(a)<strlen(b))
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]==32)
                    continue;
                else
                {
                    if(a[i]==b[j])
                        c[b[j]]=1;
                }

            }
        }
    else
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {

                if(b[i]==32)
                    continue;
                else
                {
                    if(b[i]==a[j])
                        c[a[j]]=1;
                }
            }

}
        finalresult();
}
int main()
{
    int n,i,t,k,m;

    while( gets(a))
    {


        getchar();
        gets(b);

        n=strlen(a);
        m=strlen(b);
        print(n,m);

        return 0;
    }
}
