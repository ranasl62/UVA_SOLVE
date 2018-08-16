#include<iostream>
#include<cstdio>
using namespace std;
long long Factorial(long long T)
{
    if(T==1)return 1;
    else return T*Factorial(T-1);
}
int main()
{
    long long A,B,MN,MX;
    cin>>A>>B;
    printf("%d\n",Factorial(min(A,B)));
    return 0;
}
