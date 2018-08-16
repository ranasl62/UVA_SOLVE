#include<iostream>
using namespace std;
int main()
{
    int n,t,a,b,c,budget;
    cin>>n;
    while(n--)
    {
        budget=0;
        cin>>t;
        while(t--)
        {
            cin>>a>>b>>c;
            budget+=(a*c);
        }
        cout<<budget<<endl;
    }
    return 0;
}
