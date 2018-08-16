#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("test.txt","r",stdin);
    long long n,a,b;
    scanf("%I64d %I64d %I64d",&n,&a,&b);
    if(n%a==0||n%b==0)
    {
        puts("YES");
        if(n%a==0)printf("%I64d %I64d\n",n/a,0);
        else printf("%I64d %I64d\n",n/b,0);
        //cout<<"RANA"<<endl;
    }
    else
    {
        long long sum=0;
        while(1)
        {
            long long x=0;
            sum=sum+a;
            if(sum>n)break;
            while(1)
            {

               // cout<<sum<<" "<<x<<endl;
                if(x+sum==n){
                    puts("YES");
                    printf("%I64d %I64d\n",sum/a,x/b);
                    return 0;
                }
                else if(x+sum>n)break;
                else x=x+b;
            }
        }
        puts("NO");

    }
    return 0;
}
