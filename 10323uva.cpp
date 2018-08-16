#include<iostream>

using namespace std;
long long factorial( long long n)
{
    if(n==0)return 1;
    return n*factorial(n-1);
}
int main()
{
    long long n;
    while(cin>>n)
    {

        if(n<0 && n%2==0)
            cout<<"Underflow!"<<endl;
        if(n<0 && n%2!=0)
           cout<<"Overflow!"<<endl;
       if (n>13)
            cout<<"Overflow!"<<endl;
        if(n<=7 && n>=0)
         cout<<"Underflow!"<<endl;
       if(n>7 && n<14) cout<<factorial(n)<<endl;
    }

    return 0;
}
