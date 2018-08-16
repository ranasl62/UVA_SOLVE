#include<iostream>
using namespace std;
int main()
{
    int n,c,a,p=1;
    while(1)
    {
        cin>>n;
        c=0;
        if(n==0)break;
        while(n--){
            cin>>a;
            if(a!=0)
                c++;
            else
                c--;
        }
        cout<<"Case "<<p++<<": "<<c<<endl;
    }
    return 0;
}
