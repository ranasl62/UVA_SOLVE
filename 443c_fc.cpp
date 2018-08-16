#include<bits/stdc++.h>
using namespace std;
#define mx INT_MAX
int main()
{
    int a,b;
    long long n;
    string c;
    pair<string,int>l;
    vector< pair<string,int> >x;
    cin>>n;
    cin>>c>>b;
    l=make_pair(c,b);
    a=b;
    x.push_back(l);
    for( int i=1; i<n; i++)
    {
        cin>>c>>b;
        if(c[0]=='|' && (a|b)!=a)
        {
            l=make_pair(c,b);
            x.push_back(l);
            a=a|b;

        }
        else if(c[0]=='^' && (a^b)!=a)
        {
            l=make_pair(c,b);
            x.push_back(l);
            a=a^b;

        }
        else if (c[0]=='&' && (a&b)!=a)
        {
            l=make_pair(c,b);
            x.push_back(l);
            a=a&b;


        }
        if(a==0)
        {
            x.clear();
        }

    }
    cout<<x.size()<<endl;
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i].first<< " "<<x[i].second<<endl;
    }
    return 0;
}

