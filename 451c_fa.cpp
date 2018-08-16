#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    scanf("%I64d",&n);
    n=n+5;
    n-=(n%10);
    printf("%I64d\n",n);
    return 0;
}
