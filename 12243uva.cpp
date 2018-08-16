#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string strTemp;
    while(getline(cin,strTemp))
    {
        if(strTemp=="*")break;
        int k=0,p=0;
        strTemp="*"+strTemp;
        for(int i=0; i<strTemp.length(); i++)
        {
            if((tolower(strTemp[1])==tolower(strTemp[i])) && !isalpha(strTemp[i-1]))p++;
            if(isalpha(strTemp[i]) && !isalpha(strTemp[i-1]))k++;
        }
               //cout<<k<<" "<<p<<endl;
        if(k==p)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}

