#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>SS;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        SS.insert(c);
        mp[c]++;
    }
    if(n/2==mp[*(SS.begin())] && SS.size()==2){cout<<"YES"<<endl;
    set<int>::iterator it;
    for (it=SS.begin(); it!=SS.end(); ++it)
    cout << *it<<" ";
    cout<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
