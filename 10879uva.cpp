#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //cout<<sqrt(21);
    int t;
    cin>>t;
    vector <int> value;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        int flag=0;
        int n=sqrt(a);
        for(int i=2;i<=n;i++)
        {
            if(a%i==0)
            {
                value.push_back(i);
                value.push_back(a/i);
                flag =1;
            }
        }
        int len = value.size();
        if(len>=4 && flag==1)
        cout<<"Case #"<<i+1<<": "<<a<<" = "<<value[0]<<" * "<<value[1]<<" = "<<value[2]<<" * "<<value[3]<<endl;
        else if(flag==1)
            cout<<"Case #"<<i+1<<": "<<a<<" = "<<value[0]<<" * "<<value[1]<<" = "<<value[1]<<" * "<<value[0]<<endl;
        else
        {
            cout<<"Case #"<<i+1<<": "<<a<<" = "<<a<<" * "<<1<<" = "<<313354<<" * "<<0<<endl;
        }
            value.clear();
    }
    return 0;
}
