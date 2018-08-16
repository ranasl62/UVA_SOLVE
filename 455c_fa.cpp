#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,temp="";
    cin>>str1;
    cin>>str2;
    temp+=str1[0];
    for(int i=1;i<str1.size();i++)
    {
        if(str1[i]<str2[0])
        {
            temp+=str1[i];
        }
        else
            break;
    }
    cout<<temp<<str2[0]<<endl;
    return 0;
}
