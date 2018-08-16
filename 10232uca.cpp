#include<iostream>
using namespace std;
long long factorial(long long n)
{
    if(n==0)return 1;
    return n*factorial(n-1);
}
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n<8)
            cout<<"Underflow!"<<endl;
        else if (n>13)
            cout<<"Overflow!"<<endl;
        else
            cout<<factorial(n)<<endl;
    }

    return 0;
}
