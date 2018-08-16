#include<iostream>
using namespace std;
int main()
{
    string oparation;
    long long sum = 0 ;
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>oparation;
        if(oparation=="donate")
        {
            cin>>a;
            sum+=a;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
