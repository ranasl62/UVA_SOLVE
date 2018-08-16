#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char test[6];
    cin>>n;
    while(n--)
    {
        cin>>test;
        if(strlen(test)==5)
            cout<<3<<endl;
        else if((test[0]=='t'&&test[1]=='w')||(test[0]=='t'&&test[2]=='o')||((test[1]=='w'&&test[2]=='o')))
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
