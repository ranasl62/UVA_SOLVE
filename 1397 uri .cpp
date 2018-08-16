#include<iostream>
using namespace std;
int main()
{
    int s,d,n;
    while(1)
    {
        int i=0,j=0;
        cin>>n;
        if(n==0)
            break;
        while(n--){
        cin>>s>>d;
        if(d>s)
            i++;
        if(d<s)
            j++;
        }
        cout<<j<<" "<<i<<endl;
        }

    return 0;
}


