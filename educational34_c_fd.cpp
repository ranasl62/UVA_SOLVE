#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long x;
    long long sum=0;
    map<long long,int>a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(map<long long,int>::iterator it = a.begin();it!=a.end();it++){

        //cout<<it->first<<" "<<it->second<<endl;
        for(map<long long,int>::iterator p = it ;p!=a.end();p++){
                if(abs(it->first-p->first)>1)sum+=(p->first-it->first)*it->second*p->second;

    }

    }

    cout<<sum<<endl;
    return 0;
}
