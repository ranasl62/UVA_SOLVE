#include<iostream>
using namespace std;
int main()
{
    int n;
    long long a;
    cin>>n;
    int i=1;
    while(n--)
    {
        int b[10]={0,0,0,0,0,0,0,0,0,0};
        cin>>a;
        if(a==0)
            cout<<"Case #"<<i++<<": INSOMNIA"<<endl;
        else
        {

             long long  n=a;
             int j=1;
            while(1)
            {

                b[a%10]=true;
                a/=10;
                if(b[0]&&b[1]&&b[2]&&b[3]&&b[4]&&b[5]&&b[6]&&b[7]&&b[8]&&b[9])
                {

                    cout<<"Case #"<<i++<<": "<<n*j<<endl;

                    break;
                }
                if(a==0)
                {
                    j++;
                    a=n*j;
                }

            }
        }
    }
    return 0;
}
