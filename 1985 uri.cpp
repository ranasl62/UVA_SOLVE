#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double b,t=0;
    string a;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        if(a=="1001")
            t+=b*1.5;
         if(a=="1002")
            t+=b*2.5;
             if(a=="1003")
            t+=b*3.5;
             if(a=="1004")
            t+=b*4.5;
             if(a=="1005")
            t+=b*5.5;
    }
    cout<<fixed<<setprecision(2)<<t<<endl;
    return 0;
}
