#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,d=0,e;
    cin>>a;

    while(a!=1){
            e=a;
    b=a%3;
    if(b)
    {
        a=a/3+1;
        a=a*3;
        e=a-e;
        d+=e;
    }
        c+=a;
    a/=3;
}
    cout<<c<<endl;
    return 0;
}
