#include <bits/stdc++.h>
using namespace std;

int arr[300];

int main()
{
    for(int i=0;i<=200;i++) arr[i]=-1;

    string X,Y;
    cin>>X>>Y;

    vector < pair<char,char> > ans ;

    int len = X.size();

    for(int i=0;i<len;i++)
    {
        int t1 = X[i] , t2 = Y[i] ;
        if(arr[t1]==-1&&arr[t2]==-1)
        {
            arr[t1] = t2 ;
            arr[t2] = t1 ;
            if(t1!=t2)ans.push_back(make_pair(t1,t2));
        }
        else if(arr[t1]!=t2||arr[t2]!=t1)
        {
            puts("-1");
            return 0 ;
        }
    }
    cout << ans.size() << endl ;
    for(int i=0;i<ans.size();i++)
        cout << ans[i].first << ' ' << ans[i].second<< endl;
    return 0 ;
}
