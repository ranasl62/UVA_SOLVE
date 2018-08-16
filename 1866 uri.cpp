#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a%2!=0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
