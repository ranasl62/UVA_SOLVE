#include<iostream>
#include<vector>
using namespace std;
int arr[1000+5];
int arr2[1000+5];
int main()
{
    int n,m;
    int f=0,mx=99999999;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<(m-n)+1;i++)
    {
        int k=i;
        f=0;
        for(int j=0;j<n;j++)
        {
           if(s[j]!=t[k])
           {
               f++;
               arr[j+1]=1;
           }
           else arr[j+1]=0;
           k++;
        }
        if(f<mx)
        {
            mx=f;
            for(int p=0;p<=n;p++)
            {
                if(arr[p])
                {
                    arr2[p]=1;
                    arr[p]=0;
                }
            else arr2[p]=0;
            }

        }
    }
        cout<<mx<<endl;

        for(int i=0;i<=n;i++)
            if(arr2[i])
                cout<<i<<" ";

        cout<<endl;
    return 0;
}
