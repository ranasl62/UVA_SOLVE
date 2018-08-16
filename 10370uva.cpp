#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int Count,sum,av,n,t;
    cin>>t;
    while(t--)
    {
        sum=0;
        Count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        av=sum/n;
        for(int i=0;i<n;i++)
            if(av<arr[i])
            Count++;
            double result = Count /double(n)*100.00;
             cout<<fixed;
        cout<<setprecision(3)<<result<<"%"<<endl;
    }

    return 0;
}
