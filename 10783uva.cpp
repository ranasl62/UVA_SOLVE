#include<iostream>
using namespace std;
int main()
{
    int a,b,t,sum,p=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
           sum=0;
        p++;
        if(a>b)swap(a,b);
        if(a%2==0) a++;
        if(b%2==0) b--;
        for(int i = a; i<=b; i+=2)
            sum+=i;
        cout<<"Case "<<p<<": "<<sum<<endl;
    }

    return 0;
}
