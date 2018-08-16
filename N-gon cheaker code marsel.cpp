#include<iostream>
using namespace std;
int main()
{
    long long n,sum,t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        cin>>sum;
        n=(sum+360)/180;
        if(n<=2)
            cout<<"Case "<<i<<": Impossible"<<endl;
            else
               cout<<"Case "<<i<<": "<<n<<" "<<sum/n<<endl;
    }
    return 0;
}
