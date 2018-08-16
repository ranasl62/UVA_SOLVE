#include<iostream>
using namespace std;

bool a[28];
string s;
int k,i;
int main ()
{
    int cnt=0;
    cin>>s>>k;
    for(i=0; i<s.size(); i++)
    {
        a[s[i]-97]=1;
    }
    for(i=0; i<28; i++)
    {
        if(a[i])cnt++;
    }
    if(s.size()<k)
    {
        cout<<"impossible"<<endl;
        return 0;
    }
        cout<<k-cnt<<endl;
    return 0;
}
