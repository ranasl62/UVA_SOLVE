#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[100];
    int k,m,s,e;
    int n;
    cin>>k;
    cin>>n;
    for(int i=0; i<n; i++)
        a[i]=rand()%10;
    sort(a,a+n);
    for(int i=1; i<n; i++)
        cout<<a[i]<<" ";

    s=0;
    e=(int)(sizeof(a)/sizeof(a[0]))-1;
    do
    {
        m=(int)(s+e)/2;
        if(k==a[m])
        {
            break;
        }
        else if (a[m]>k)
        {
            e=m-1;

        }
        else
        {
            s=m+1;

        }
    }
    while(s<=e);
    if(s>e)
        cout<<"NO " <<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}

