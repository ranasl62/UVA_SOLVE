#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str,out;
    char n;
    while (cin >>n>>str)
    {
        if(n=='0'&&str=="0")break;
        int len = str.length();
        for(int i=0;i<len;i++)
        {
            if(n!=str[i])
                out +=str[i];

        }
        len = out.length();
        int p=1;
       for(int i=0;i<len;i++)
       {
           if(out[i]!='0')
           {
               p=0;
               break;
           }
       }

       if(out.length()==len && p)
        cout<<0<<endl;
        else
            cout<<out<<endl;
            str=out="";
    }
    return 0;
}
