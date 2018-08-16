#include<iostream>
using namespace std;
int main()
{
    int a1,a2,n;
    string aa,aaa,bb,bbb;
    cin>>n;
    while(n--)
    {
        cin>>aa>>aaa>>bb>>bbb;
        cin>>a1>>a2;
        if((a1+a2)%2==0)
        {
            if(aaa=="PAR")
                cout<<aa<<endl;
            else
                cout<<bb<<endl;
        }
        else
        {
            if(aaa=="IMPAR")
                cout<<aa<<endl;
            else
                cout<<bb<<endl;
        }
    }
    return 0;
}
