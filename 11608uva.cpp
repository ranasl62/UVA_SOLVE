#include<iostream>
#define n 12
using namespace std;
int main()
{
    int arr[n],arr2[n];
    int a;
    int w=0;
    while(true)
    {
        cin>>a;
        if(a<0)break;
        w++;
        int sum=a;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
            cin>>arr2[i];
            cout<<"Case "<<w<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            if(sum>=arr2[i])
            {
                sum=sum-arr2[i];
                sum+=arr[i];
                cout<<"No problem! :D"<<endl;
            }
            else {
                     sum+=arr[i];
            cout<<"No problem. :("<<endl;
            }

        }
    }
    return 0;
}
