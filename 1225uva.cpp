#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[10];
        for(int i=0;i<10;i++)arr[i]=0;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int j=i;
            while(j)
            {
                arr[j%10]++;
                j/=10;
            }
        }
        cout<<arr[0];
        for(int i=1;i<10;i++)
            cout<<" "<<arr[i];
        cout<<endl;
    }
    return 0;
}
