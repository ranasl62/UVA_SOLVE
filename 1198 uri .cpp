#include<iostream>
using namespace std;
long long int deference(long long int a, long long int b)
{
    if(a<b)
        return deference(b,a);
    return a-b;
}
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        cout<<deference(a,b)<<endl;
    }
    return 0;
}
