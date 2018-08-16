#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%I64d",&n);
    long long k;
    vector<long long >a;
    for(int i=0;i<n;i++){
     scanf("%I64d",&k);
     a.push_back(k);
    }
    sort(a.begin(),a.end());
    int c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])c++;
        else {
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<c<<endl;
    return 0;
}
