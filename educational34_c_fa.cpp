#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    while(n--){
        cin>>c;
        if(c%3==0||c%7==0)cout<<"YES"<<endl;
        else
        {
            int z=0;
            bool k=true;
            while(k)
            {
                z=z+3;
                if(z>c)break;
                int t=0;
                while(k)
                {
                    t=t+7;
                    //cout<<t<<endl;
                    if(z+t==c){cout<<"YES"<<endl;
                    k=false;
                    }
                    if(z+t>c)break;
                }
            }
            if(k)cout<<"NO"<<endl;
        }

    }
    return 0;
}
