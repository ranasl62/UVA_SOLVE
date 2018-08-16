#include<bits/stdc++.h>
using namespace std;
vector<unsigned int>usb;
vector<unsigned int>ps2;
int main()
{
    freopen("text.txt","r",stdin);
    int a,b,c;
    cin>>a>>b>>b;
    string str;
    long long n,m,sumUsb=0,sumPs2=0;
    cin>>m;
    while(m--)
    {
        cin>>n>>str;
        if(str=="USB")
        {
            usb.push_back(n);
            sumUsb+=n;
        }
            else
            {
                ps2.push_back(n);
                sumPs2+=n;
            }
        }
        sort(usb.begin(),usb.end());
        sort(ps2.begin(),ps2.end());
        if(usb.size()<= a-c )
        {
            for(int i=c+b-1;i<=ps2.size();i++)
            {
                sumPs2-=ps2[i];
            }
        }
        cout<<a+b<<" "<<sumPs2+sumPs2<<endl;
        return 0;
    }
