#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("488uva.txt","w",stdout);
    int n,A,F;
    cin>>n;
    while(n--)
    {
        cin>>A>>F;
        while(F--)
        {
            for(int i=0; i<A; i++)
            {
                for(int j=0; j<i+1; j++)
                {
                    cout<<i+1;
                }
                cout<<endl;
            }
            for(int i=A; i>1; i--)
            {
                for(int j=i-1; j>0; j--)
                {
                    cout<<i-1;
                }
                cout<<endl;
            }
            if(n!=0|| F!=0) cout<<endl;;
        }
    }

return 0;
}
