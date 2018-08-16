#include<bits/stdc++.h>
using namespace std;
vector <long long> x;
bool counts(int key,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x[mid]==key)return 1;
        else if(x[mid]<key)low=mid+1;
        else high = mid-1;
    }
    return 0;


}
int main()
{
    long long n,a1,b1,c=0,t;
    vector<long long>a;
    vector<long long>b;
    cin>>n;
    t=n;
    for(int i=0;i<n;i++)
    {
        cin>>a1;

        b.push_back(a1);
        x.push_back(a1);

    }
    for(int i=0;i<n;i++)
    {
        cin>>a1;
        a.push_back(a1);
        x.push_back(a1);

    }
    sort(x.begin(),x.end());
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)continue;
            if(counts(b[i]^b[j],0,n-1))c++;
            if(counts(a[i]^a[j],0,n-1))c++;
            if(counts(a[i]^b[j],0,n-1))c++;
        }
    }
    cout<<c<<" "<<x.size()<<endl;
    if(c%2==0)cout<<"Karen"<<endl;
    else cout<<"Koyomi"<<endl;
    return 0;
}
