#include<iostream>
using namespace std;
int main()
{
    int h,u,d,f,i,t,p;
    while(1)
    {
        i=0;
        cin>>h>>u>>d>>f;
        if(h==0)
            break;
                p=u;
            while(1)
            {
                u-=d;
                i++;
                p=p*f/100;
                u+=u+p;
                if(u>h||u<0)
                    break;
            }
            if(u>0)
                cout<<"success on day "<<i<<endl;
            else
            cout<<"failure on day "<<i<<endl;

    }
    return 0;
}
