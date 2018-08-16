#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int n,k;
    int arr[205];
    char str[205],str1[205];
    while(scanf("%d",&n) and n)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        while(scanf("%d",&k) and k)
        {
            scanf("%[^\n]",&str);
            for(int j=0;j<k;j++){
            for(int i=0;i<n;i++)
            {
                char a = str[i];
                str1[arr[i]]=a;
            }

           for(int i=0;i<n;i++)
            str[i]=str1[i];
            }
            cout<<str<<endl;
        }
    }
    return 0;
}
