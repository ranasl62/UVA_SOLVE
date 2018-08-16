#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int p=0;
    while(cin>>n)
    {
        long long product=1;
        long long signed product2=1;;
        int a;
        p++;
        while(n--)
        {
            cin>>a;
            if(a>0)
            {
                product*=a;
            }
            else
            {
                product2=product2*a;
            }
        }
        cout<<endl;
        if(product2<0&&product==1)
            cout<<"Case #"<<p<<": The maximum product is "<<0<<endl<<endl;
        else if (product2>product)
            cout<<"Case #"<<p<<": The maximum product is "<<product2<<endl<<endl;
        else
            cout<<"Case #"<<p<<": The maximum product is "<<product<<endl<<endl;
    }
    return 0;
}
