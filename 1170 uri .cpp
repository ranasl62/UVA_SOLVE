#include<iostream>
using namespace std;
int main()
{
    int n,i;
    double a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        i=0;
        while(a>1)
        {
            i++;
            a/=2;
        }
        cout<<i<<" dias"<<endl;
    }
    return 0;
}
