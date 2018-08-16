#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin>>n&&n!=0)
    {
        n=n%9;
        if(n==0)
        {
            n=9;
        cout<<n<<endl;
        }
        else
            cout<<n<<endl;
    }
    return 0;
}
