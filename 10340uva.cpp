#include<iostream>
using namespace std;
int main()
{
    string str,subStr;
    while(cin>>subStr>>str)
    {
        int len = str.length();
        int len2=subStr.length();
        int c=0;
        int k=0;
        for(int i=0;i<len ;i++)
        {
            if(subStr[k]==str[i])
            {
                c++;
                k++;
            }
        }
        if(c==len2)cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
