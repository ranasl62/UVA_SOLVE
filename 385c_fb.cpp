#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
        }
    }
    return 0;
}
