#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
vector<int>arr;
int main()
{

    int n,m;
    rana :
    while(scanf("%d%d",&n,&m)==2)
    {
        if(m>n || n<=1 || m<=1 )puts("Boring!");
        else
        {
            while(n>1)
            {
                if(n%m==0)arr.push_back(n);
                else
                {
                    arr.clear();
                    puts("Boring!");
                    goto rana;
                }
                n=n/m;
                //cout<<n<<endl;25 5
            }
           printf("%d",arr[0]);
           for(int i=1;i<arr.size();i++)
                printf(" %d",arr[i]);
                puts(" 1");
            arr.clear();
        }
    }
    return 0;
}
