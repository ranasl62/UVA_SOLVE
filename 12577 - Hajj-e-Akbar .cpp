#include<iostream>
using namespace std;
int main()
{
    int i=0;
    string a;
    while(a!="*")
    {
        i++;
        cin>>a;
        if(a=="Hajj")
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        if(a=="Umrah")
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
    }
    return 0;
}
