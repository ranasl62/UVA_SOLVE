#include<iostream>
using namespace std;
double pow(double a, int n) {
double ret = 1;
while(n) {
if(n%2 == 1) ret *= a;
a *= a; n /= 2;
}
return ret;
}
int main()
{
    double a;
    int b;
    cin>>a>>b;
    cout<<pow(a,b)<<endl;
    return 0;
}
