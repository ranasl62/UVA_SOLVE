#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,p,t,a,b,c=1;
    cin>>p>>n;
    cin>>b;
    while(--n)
    {
        cin>>a;
        t=abs(b-a);
        if(p<t)
        {
            cout<<"GAME OVER"<<endl;
            c=0;
            break;
        }
        else
        {
            b=a;
        }
    }
    if(c)
        cout<<"YOU WIN"<<endl;

    return 0;
}
