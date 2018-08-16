#include<iostream>
using namespace std;
int main()
{
    int n,temp,t,i;
    cin>>n;
    while(n--)
    {
        cin>>t;
        int a[t];
        for( i=0;i<t;i++)
            cin>>a[i];
            for( i=0;i<t;i++)
            {
            for(int j=0+i;j<t;j++)
                if(a[i]>i[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
    }
    return 0;
}
