#include<bits/stdc++.h>
using namespace std;
int main()
{
    string strn[100000];
    string str="What are you doing at the end of the world? Are you busy? Will you save us?";
    cout<<str.length()<<endl;
    string str1="What are you doing while sending "+str+" Are you busy? Will you send "+str;
    //string str2="What are you doing while sending "+str1+"? Are you busy? Will you send "+str1+"?";
    //string str3="What are you doing while sending "+str2+"? Are you busy? Will you send "+str2+"?";
    cout<<str1.length()<<endl;
    //cout<<str2.length()<<endl;
    //cout<<str3.length()<<endl;
   // cout<<str1[67]<<endl;
   for(int i=0;i<str1.length();i++)
   {
       cout<<i+1<<" "<<str1[i]<<endl;
   }
    return 0;
}



