#include<iostream>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a;
        cout<<"Case #"<<i<<": "<<a*2-1<<endl;
    }
    return 0;
}
