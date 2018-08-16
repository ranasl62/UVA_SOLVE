#include<iostream>
#include<vector>
#include <fstream>
using namespace std;
int main()
{
    int n,x;
    int counts=0;
    cin>>n>>x;

    for(int i=2; i<=n; i++)
    {

            if(x%i==0 )counts++;

    }
   cout<<--counts<<endl;
    return 0;
}
