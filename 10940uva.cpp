#include<iostream>
using namespace std;
int main()
{
    int n,s;
    while(cin>>n && n)
    {
        int i=1;
    while(i<=n) i=i*2, s=i%n;
      cout<<n-s<<endl;
    }

}
