#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,t;
    cin>>a>>b;
        cout<<fixed<<setprecision(2)<<((b-a)*100)/a<<"%"<<endl;
    return 0;
}
