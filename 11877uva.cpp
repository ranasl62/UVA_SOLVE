#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,f,k;
    while(cin>>e && e)
    {

        f=0;
        k=0;
        while(e>=3)
        {
            k+=e/3;
            f=e%3;
            e=e/3+f;
            if(e==2)k++;
        }
        cout<<k<<endl;
    }
    return 0;
}

