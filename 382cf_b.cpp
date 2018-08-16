#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,n1,n2;
    cin>>n>>n1>>n2;
    double sum1=0;
    double sum2=0;
    int arr[100000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+(int)n);
   int p = n-(n1+n2);
   for(int i=p;i<n1+p;i++)
   {

       sum1+=arr[i];
   }
   for(int i=n1+p;i<n;i++)
    sum2+=arr[i];
   cout<<fixed;
    cout<<setprecision(6)<<sum1/n1 +sum2/n2 <<endl;
    return 0;
}
