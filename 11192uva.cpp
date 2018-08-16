#include<iostream>
using namespace std;
string str;
void Reverse(int a ,int b)
{
    for(int i=a; i<b/2; i++)
    {
        swap(str[i],str[b-i-1]);
    }
}
int main()
{
    int n;
    while(cin>>n )
    {
        if(n==0)break;
        cin>>str;

        int a,b;
        int len =str.length();
        a=0;
        b=len/n;
        n=b;
        while(b<=len)
        {
            Reverse(a,a+b);
            a=b;
            b+=n;
        }
        cout<<str<<endl;
    }
}
