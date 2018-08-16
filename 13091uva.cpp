#include<iostream>
using namespace std;
int main()
{
    char a[5][5];
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int v;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='|')
                {
                    v=j;
                }

            }
        }
        int result=0;
         for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(a[i][j]=='>')
                {
                        if(v>j)
                        result =1;
                }
                else if(a[i][j]=='<')
                {
                    if(v<j)
                        result =1;
                }

            }
        }
        if(result==0)
        cout<<"Case "<<k<<": No Ball"<<endl;
        else
            cout<<"Case "<<k<<": Thik Ball"<<endl;


    }
    return 0;
}
