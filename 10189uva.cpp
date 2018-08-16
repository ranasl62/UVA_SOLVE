#include<iostream>
#include<cstdio>
using namespace std;
char arr[110][110];

int main()
{
   // freopen("uva10189.txt","w",stdout);
    int n,m,p=0;
    while(cin>>n>>m && n!=0 || m!=0)
    {
        p++;
        if(p!=1)
            cout<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>arr[i][j];
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]!='*')
                {

                    int a=0;
                    if(arr[i-1][j-1]=='*')a++;
                    if(arr[i-1][j]=='*') a++;
                    if(arr[i-1][j+1]=='*')a++;
                    if(arr[i][j-1]=='*') a++;
                    if(arr[i][j]=='*') a++;
                    if(arr[i][j+1]=='*') a++;
                    if(arr[i+1][j-1]=='*') a++;
                    if(arr[i+1][j]=='*') a++;
                    if(arr[i+1][j+1]=='*') a++;
                    arr[i][j]=char(48+a);
                }
            }
        }
        cout<<"Field #"<<p<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cout<<arr[i][j];
            cout<<endl;
        }
        for(int i=0; i<110; i++)
        {
            for(int j=0; j<110; j++)
                arr[i][j]='\0';
        }
    }
    return 0;
}
