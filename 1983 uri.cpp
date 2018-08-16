#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int a[n];
    double b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
        for(int j=0;j<n;j++)
        {
            for(int i=0+j;i<n;i++)
                if(b[i]>b[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
            if(b[0]<8.0)
                cout<<"Minimum note not reached"<<endl;
            else
            cout<<a[0]<<endl;

    return 0;
}
