#include<iostream>
using namespace std;
int main()
{
    long long  d;
    while(1){
    cin>>d;
    if(d%2!=0||d <= 2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }
    return 0;
}
