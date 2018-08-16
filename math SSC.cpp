#include<iostream>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double x,h;
    x=(1000/(tan(60.0*pi/180)/tan(30.0*pi/180)+1));
    h=tan(30.0*pi/180)*(1000-x);
    cout<<"X = "<<x<<endl<<"h = "<<h<<endl;
    return 0;
}
