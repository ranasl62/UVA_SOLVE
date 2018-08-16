#include<iostream>
using namespace std;
int main()
{
    int n,a,i=0,max;

    while((cin>>n))
    {
        i=0;
        a=0;
        while(i!=n)
        {
            cin>>a;
            max=a;
            for(i=1; i<n; i++)
            {
                cin>>a;
                if(max<a)
                    max=a;
            }
            if(max<10)
                cout<<1<<endl;
            else if(max>=10&&max<20)
            cout<<2<<endl;
            else if(max>=20)
               cout<<3<<endl;


        }
    }
    return 0;
}
