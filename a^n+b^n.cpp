#include<iostream>
#include<math.h>
using namespace std;
int power(int a, int n)
{
    int ter=1;
    if(n==0)
        return 1;
    if(n==1)
        return a;
    while(n)
    {
        if(n%2==1)
            ter*=a;
        a*=a;
        n/=2;
    }
    return ter;
}
int main()
{
    int a,b,c,d,n;
    cout<<"a+b = " ;
    cin>>c;
    cout<<"ab = " ;
    cin>>d;
    a=(c+sqrt(c*c-4*d))/2;
    b=(c-sqrt(c*c-4*d))/2;
    cout<<"n = " ;
    cin>>n;
    if(a+b==c)
        cout <<"Valid input"<<endl;
    else
        cout <<"Invalid input"<<endl;
    cout<<"a+b = "<<c<<endl<<"ab = "<<d<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl<<"n = "<<n<<endl<<"a^n = "<<power(a,n)<<endl<<"b^n = "<<power(b,n)<<endl<<"a^n+b^n = "<<power(a,n)+power(b,n)<<endl;
    return 0;
}
