#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str == "DONE")
            break;

        string strOut = "", temp;
        int len =str.size();
        for(int i=0; i<len; i++)
            if(isalpha(str[i]))
                strOut += tolower(str[i]);

        temp = strOut;
        reverse(strOut.begin(), strOut.end());
        if(strOut == temp)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }
    return 0;
}
