#include<iostream>
using namespace std;
string b="";
int fib( int n  )
{
    if(n==0) return   0;
    if(n==1) return 1;
    cout<<n <<" ";
    return  fib(n-1) + fib(n-2) + fib(n-1);

}
int count_a(int n)
{

    if(n==0) return 0;
    b = (n%2? "1":"0")+b;
    return 1 + count_a(n/2);

}
void write_base(int n, int b)
{
    if(n==0) return ;
    write_base(n/b,b);
    cout<<n%b;
}
int main()
{
    //cout<<fib(6);
   /* int n;
    cin>>n;
    cout<<count_a(n)<<endl;
    cout<<b<<endl;*/
    int n,b;
    cin>>n>>b;
    if(n==0) cout<<0<<endl;
    else write_base(n,b);
    cout<<endl;

}
