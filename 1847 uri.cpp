#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(1){
    cin>>a>>b>>c;
    if(a<b&&b>=c)
        cout<<":)"<<endl;
    else if(a>b&&b<=c)
        cout<<":("<<endl;
    else if(a<b&&b<c&&(a-b)>(b-c))
        cout<<":("<<endl;
    else if(a<b&&b<c&&(a-b)<=(b-c))
        cout<<":)"<<endl;
    else if(a>b&&b>c&&(a-b)>(b-c))
        cout<<":)"<<endl;
    else if(a>b&&b>c&&(a-b)>=(b-c))
        cout<<":("<<endl;
    else if(a==b&&b<c)
        cout<<":)"<<endl;
    else
        cout<<":("<<endl;}
    return 0;
}
