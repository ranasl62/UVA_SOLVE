#include<iostream>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int len = str.size();
        int p=0;
        for(int i=0;i<len;i++){
           if(isalpha(str[i]) && (!isalpha(str[i+1])))
        p++;
        }
           cout<<p<<endl;

    }

    return 0;
}
