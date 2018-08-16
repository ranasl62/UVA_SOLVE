#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
    string x = a + b;
    string y = b + a;
    if ( x > y ) return true;
    return false;

}
int main()
{
   // freopen("10905uva.txt","w",stdout);
    int n;
    while(cin>>n && n)
    {
        string arr[55];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n,cmp);
        for(int i=0; i<=n; i++)
        cout<<arr[i];cout<<endl;
    }
    return 0;
}
