#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int a,b,n,d;
    cin>>n;
    while(n--)
    {
        int i=0;
        cin>>a>>b;
        if(a>=b){
        d=a-b;
            while(b)
            {
                b/=10;
                i++;
            }
        a=pow(10.0,i);
        a=d%a;
        if(!a)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
        }
        else
            cout<<"nao encaixa"<<endl;
    }

    return 0;
}
