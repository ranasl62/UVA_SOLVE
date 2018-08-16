#include<iostream>
using namespace std;
int main()
{
    int n,t,a=0,i=0,h_jump,l_jump,stay_poll;
    cin>>t;
    while(t--)
    {
        h_jump=0;
        l_jump=0;
        cin>>n;
        cin>>a;
        stay_poll=a;
        i++;
        while(--n)
        {
            cin>>a;
            if(a>stay_poll)
            {
                stay_poll=a;
                h_jump++;
            }
            else if (stay_poll>a)
            {
                stay_poll=a;
                l_jump++;
            }

        }
        cout<<"Case "<<i<<": "<<h_jump<<" "<<l_jump<<endl;
    }
    return 0;
}
