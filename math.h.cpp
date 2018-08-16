#include<iostream>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main ()
{
    int a;
    double  n;

    while(n)
    {

        cin>>n;
        cout<<"Sin   : "<<sin(n*pi/180)<<endl;
        cout<<"Cos   : "<<cos(n*pi/180)<<endl;
        cout<<"Tan   : "<<tan(n*pi/180)<<endl;
        cout<<"Cot   : "<<1/(tan(n*pi/180))<<endl;
        cout<<"Sec   : "<<1/(cos(n*pi/180))<<endl;
        cout<<"Cosec : "<<1/(sin(n*pi/180))<<endl;

    }

}
