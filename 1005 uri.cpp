#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,av;
    cin>>a>>b;
    av=(a*3.5+b*7.5)/(3.5+7.5);
    cout<<fixed<<setprecision(2)<<"MEDIA = "<<av<<endl;
    cout<<fixed<<setprecision(3)<<"MEDIA = "<<av<<endl;
    return 0;
}
