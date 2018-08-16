#include<iostream>
using namespace std;
int main()
{
    int a[4],n=4,i,j,t;
    while(n--)
        cin>>a[n];
    for(i=0; i<4; i++)
        for(j=1+i; j<4; j++)
            if(a[i] >a[j])
                swap(a[i],a[j]);
    if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3])
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
