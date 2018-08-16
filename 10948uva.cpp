#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int arr[1000000+5];
void make_prime()
{
    for(int i=0;i<=1000000;i+=2)arr[i]=1;
    arr[2]=0;
    arr[1]=1;
    for(int i=3;i*i<=1000000;i+=2)
    {
        if(!arr[i])
        {

            for(int j=i*2;j<=1000000;j+=i)
            {
                arr[j]=1;
            }
        }
    }
}
int main()
{

    make_prime();
    int n;
    while(scanf("%d",&n)==1)
    {
            if(n==0)return 0;
            printf("%d:\n",n);
            bool k=false;
            for(int i=2;i*i<=n;i++)
            {
                if(arr[i]==0 && arr[n-i]==0)
                {
                    k=true;
                    printf("%d+%d\n",i,n-i);
                    break;

                }
            }
            if(!k)puts("NO WAY!");

    }
}
