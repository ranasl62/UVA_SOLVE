#include<iostream>
#include<cstdio>

using namespace std;

long long ConverIntoBinaryFromDecimal(long long *m,long long b1)
{
    if(*m==0) return b1;

    if((*m)%2)
    {
        *m/=2;
        ConverIntoBinaryFromDecimal( &(*m),b1+1);
    }
    else
    {
        *m/=2;
        ConverIntoBinaryFromDecimal( &(*m), b1);
    };
}
long long ConvertIntoDecimalFromHexadecimal(long long *m)
{
    long long b2=0;
    int base =1;
        while(*m)
    {
        if(base==1)
        b2+=((*m)%10)*1;
        else
            b2+=((*m)%10)*base;
        base*=16;
        *m/=10;
    }
    return b2;

}
int main()
{
    freopen("10019uva.txt","w",stdout);
    long long n,m;
    cin>>n;
    while(n--)
    {
        long long b1=0,b2=0;
        cin>>m;
        long long m1=m;
        b1=ConverIntoBinaryFromDecimal(&m,0);
        b2=ConvertIntoDecimalFromHexadecimal(&m1);
        b2=ConverIntoBinaryFromDecimal(&b2,0);
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
