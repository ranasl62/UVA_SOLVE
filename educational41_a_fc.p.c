#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[100000+10];
    bool arr2[100000+10];
    int index=0,sum=0,sum1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            cin>>arr2[i];
            if(arr2[i]==1)
                sum1+=arr[i];
             if(i<k && arr2[i]==0)sum+=arr[i];
    }
    for(int i=0;i<=n-k;i++){
            int x=sum;
            if(arr2[i]==0)sum-=arr[i];
            if(arr2[k+i]==0)sum+=arr[k+i];
      //  cout<<x<<" "<<sum<<endl;
        sum=max(x,sum);
    }
    //cout<<sum<<endl;
    cout<<sum+sum1<<endl;
    return 0;
}
