#include<iostream>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int r[n];
        int m=0;
        int j=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]==0)
                m++;
            if(r[i]==1)
                j++;

        }
        cout<<"Mary won "<<m<<" times and John won "<<j<<" times"<<endl;
    }
    return 0;
}
