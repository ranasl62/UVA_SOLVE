#include<iostream>
using namespace std;
bool Check(string str)
{
    long long sum = 0;
    int a =1;
    for(int i=0;i<str.length();i++)
    {
        sum+=(48-str[i])*a;
        a=-a;
    }
    if(sum%11==0)return true;
    return false;
}
int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="0")break;
        bool a = Check(str);
        if(a)
            cout<<str<<" is a multiple of 11."<<endl;
        else
            cout<<str<<" is not a multiple of 11."<<endl;
    }
    return 0;
}

