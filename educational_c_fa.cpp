#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,t=0,f;
    cin>>x;
    int j,w;
    if(x==1)j=2,w=1,f=3;
    if(x==2)j=1,w=2,f=3;
    if(x==3)t=1;
    for(int i=1; i<n; i++)
    {
        cin>>x;
        if(x==j)t=1;
        else if(x==w)swap(j,f);
        else if(x==f)
        {
            int temp = w;
            w=f;
            f=j;
            j=temp;
        }
    }
    if(t==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
