#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int arr[2110];
vector<int>prime;
void makePrime()
{
    memset(arr,0,sizeof(arr));
    arr[1]=1;
    for(int i=0;i<2100;i+=2)arr[i]=1;
    arr[2]=0;
    for(int i=3;i*i<=2100;i+=2)
    {
        if(!arr[i])
        {
            for(int j=i+i;j<=2100;j+=i)
            {
                arr[j]=1;
              // cout<<j<<endl;
            }
        }
    }
}
int main()
{
    makePrime();
    int t;
    string str;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        cin>>str;
        int arr2[150];
        memset(arr2,0,sizeof(arr2));
        for(int j=0;str[j];j++)
        {
            int a=(int)str[j];
            arr2[a]+=1;
        }

        printf("Case %d: ",i);
        int emp=0;
        for(int k=0;k<150;k++)
        {
            if(arr[arr2[k]]==0){
                    printf("%c",k);
                    emp=1;
            }
        }
        if(emp)
        printf("\n");
        else
            printf("empty\n");
    }

    return 0;
}
