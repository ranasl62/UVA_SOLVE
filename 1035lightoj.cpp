#include<bits/stdc++.h>
using namespace std;
int arr2[105];
int arr[105];;
void reset()
{
    for(int i=0; i<=105; i++)
    {
        arr2[i]=0;
        arr[i]=i;
    }
}
int main()
{
//    freopen("text.txt","w",stdout);
//    freopen("textin.txt","r",stdin);

    int prime[]= {0, 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int testCase;
    cin>>testCase;
    for(int t=1; t<=testCase; t++)
    {
        reset();
        int a;
        cin>>a;
        for(int i=2; i<27; i++)
        {
            for(int j=2; j<=a; j++)
            {
                if(arr[j]%prime[i]==0)
                {
                    while(arr[j]%prime[i]==0)
                    {
                        arr2[prime[i]]++;
                        arr[j]=arr[j]/prime[i];
                        //cout<<"Y"<<endl;
                    }
                }
                //cout<<"Y"<<endl;
            }
            if(prime[i]>a)break;
        }
        int K=1;
        cout<<"Case "<<t<<": "<<a<<" = ";
        for(int i=2; i<=a; i++)
        {
            if(arr2[i]&& K)
            {
                cout<<i<<" ("<<arr2[i]<<")";
                K=0;
            }
            else if(arr2[i])
            {
                cout<<" * "<<i<<" ("<<arr2[i]<<")";
            }
        }
        cout<<endl;
    }
    return 0;
}
