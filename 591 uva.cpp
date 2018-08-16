#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("591uva.txt","w",stdout);
    int n;
    int arr[101],sum,Count,p=0;
    while(cin>>n && n!=0)
    {
        sum=0;
        Count=0;
        p++;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(sum/n<arr[i])
                Count+=arr[i]-(sum/n);
        }
        cout<<"Set #"<<p<<endl;
        cout<<"The minimum number of moves is "<<Count<<"."<<endl<<endl;
    }
    return  0;
}
