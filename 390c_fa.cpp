#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    long long sum1=0,sum=0;
    int flag=0;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
    if(n==1 && arr[0]==0)cout<<"NO"<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            sum1+=arr[i];
            if(sum1!=0 && (sum-sum1)!=0)
            {
                a=i;
                break;
            }

        }
        if(a==0 && sum==0)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;

            if(sum1!=0 && (sum-sum1)!=0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<a<<endl;
                cout<<a+1<<" "<<n<<endl;
            }

            else
            {
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
            }
        }
    }

        return 0;
    }
