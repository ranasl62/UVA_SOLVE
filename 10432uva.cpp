#include"iostream"
#include"math.h"
#include"iomanip"
#define pi 2*acos(0)
using namespace std;
int main()
{
    double n,r;
    while(cin>>r>>n){
            cout<<fixed;
        cout<<setprecision(3)<<(0.5 *n*r*r*sin(2*pi/n))<<endl;
    }
    return 0;
}
