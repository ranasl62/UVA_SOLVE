#include<iostream>
using namespace std;
unsigned long long arr[82];
unsigned long long ancestors()
{
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<82; i++)
        arr[i]=arr[i-1]+arr[i-2];
}
int main()
{
    unsigned long long a;
    ancestors();
    while(cin>>a && a!=0)
        cout<<arr[1+a]<<endl;
}

