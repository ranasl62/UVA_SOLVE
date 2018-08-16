#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool w=true;
    int m=0;
    int x,y;
    int arr[50+5][50+5];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            arr[i][j]=a;
            if(a!=1)w=false;
            if(a>m)
            {
                m=a;
                x=i;
                y=j;
            }
        }
    }
    if(w)
    {
        cout<<"No"<<endl;
        return 0;
    }
    else
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(x==i && y==j)continue;
                if(arr[x][y]==arr[x][i]+arr[j][y])
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    cout<<"No"<<endl;

    return 0;
}
