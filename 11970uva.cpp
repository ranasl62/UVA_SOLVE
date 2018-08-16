#include"iostream"
#include"math.h"
#include"vector"
#include"algorithm"
using namespace std;
int main()
{
    long long N;
    int t;
    cin>>t;
    vector<int > arr;
    for(int i=1;i<=t;i++)
    {
        cin>>N;
        int len = sqrt(1000000000);
        for(int i=1;i<len;i++)
        {
           int x = N-(i*i);
            if(x%i==0 && x>0)
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        cout<<"Case "<<i<<":";
        len =arr.size();
        for(int i=0;i<len;i++)
            cout<<" "<<arr[i];
        cout<<endl;
        arr.clear();
    }
    return 0;
}
