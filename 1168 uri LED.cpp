#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    char led[101];
    cin>>n;
    while(n--)
    {
        sum=0;
        cin>>led;
        for(int i=0;led[i]!='\0';i++)
        {
        if(led[i]=='1')
        sum+=2;
        if(led[i]=='4')
        sum+=4;
        if(led[i]=='7')
        sum+=3;
        if(led[i]=='8')
        sum+=7;
        if(led[i]=='2'||led[i]=='3'||led[i]=='5')
        sum+=5;
        if(led[i]=='6'||led[i]=='9'||led[i]=='0')
        sum+=6;
        }
        cout<<sum<<" leds"<<endl;
    }
    return 0;
}
