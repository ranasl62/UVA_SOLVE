#include<iostream>
using namespace std;
int main ()
{
    long long n,m,cnt=0;
    int k=0;
    bool arr[60][60];
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j])k++;

        }
    }
    for(int i=0; i<n; i++)
    {
        int o=0,z=0;
        for(int j=0; j<m; j++)
            if(arr[i][j])o++;
            else z++;
        cnt+=2<<o-1;
        cnt+=2<<z-1;
    }
    for(int i=0; i<m; i++)
    {
        int o=0,z=0;
        for(int j=0; j<n; j++)
            if(arr[j][i])o++;
            else z++;
        cnt+=2<<o-1;
        cnt+=2<<z-1;
    }
    cout<<cnt-m*n<<endl;
    return 0;
}
