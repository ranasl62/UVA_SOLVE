#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("10324uva.txt","w",stdout);
    string abc;
    int i,j,n,Min,Max;
    int k=0;
    while(cin>>abc)

    {
        k++;
        int len = abc.length();
        if(len==0)break;
        cin>>n;
        cout<<"Case "<<k<<":"<<endl;
        while(n--)
        {
            cin>>i>>j;  //i theke j er sob value same hote hobe
            if(i<j)
                swap(i,j);
            for(Min=j;Min<i;Min++)
            if(abc[Min]!=abc[Min+1])
                {
                    cout<<"No"<<endl;
                    break;
                }
            if(Min==i)
                cout<<"Yes"<<endl;

        }
    }
    return 0;
}
