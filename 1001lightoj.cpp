#include<iostream>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a>=10)
            cout<<10<<" "<<a-10<<endl;
        else
            cout<<a<<" "<<0<<endl;
    }
    return 0;
}
