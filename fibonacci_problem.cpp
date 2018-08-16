#include<iostream>
#include<cmath>
using namespace std;
unsigned long long fib(unsigned long long n, unsigned long long p)
{
    if(n==0)return 0;
    if(n==1)return 1;
   unsigned long long first=0;
    unsigned long long second =1;
    unsigned long long result = 0;
    for(unsigned long long i=0;i<=n;i++)
    {
        result=first%p+second%p;
        first=second%p;
        second=result%p;

    }
    return result%p;
}
int main()
{
    unsigned long long n,k,p;
    cin>>n>>k>>p;
    n=fib(n,p);
    cout<<((unsigned long long)pow(k,n))%p<<endl;
    return 0;
}
