#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int t,len,sum,p;
    cin>>t;
    while(t--)
    {
        cin>>str;
        len =str.length();
        p=1;
        sum=0;
        for(int i=0; i<len; i++)
        {
            if(str[i]=='O')
                sum+=p++;
            else
                p=1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
