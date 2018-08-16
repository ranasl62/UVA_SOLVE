#include<iostream>
using namespace std;
int main()
{
    int r,c,t;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        cout<<(r/3)*(c/3)<<endl;
    }
    return 0;
}
