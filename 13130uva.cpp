#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=0;
        int arr[5];
        for(int i=0;i<5;i++)
            cin>>arr[i];
        for(int i=1;i<5;i++)
        {
            if(arr[i-1]+1!=arr[i])
            {
                p=1;
                break;
            }
        }
        if(p)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}
