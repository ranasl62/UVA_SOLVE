#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5,i=0;
    cin>>a;
    while(n)
    {
        cin>>b;
        if(a==b)
            i++;
        n--;
    }
    cout<<i<<endl;
    return 0;
}
