#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=(((((n*567)/9)+7492)*235)/47)-498;
        n=n%100;
        n=n/10;
        if(n<0)
            n=-n;
        cout<<n<<endl;
    }
    cout<<(3.5*10+3.75*20+4*114)/144<<endl;
    return 0;
}
