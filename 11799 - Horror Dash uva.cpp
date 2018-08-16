#include<iostream>
using namespace std;
int main()
{
    int n,t,a,max,i=0;;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        max=a;
        i++;
        while(--n)
        {
            cin>>a;
            if(a/max)
                max=a;
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    return 0;
}
