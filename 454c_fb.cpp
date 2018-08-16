#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,v3,v4;
    cin>>v1>>v2>>v3>>v4;
    if(v3*2>=v4 || v3<=v4)
        cout<<v1<<endl<<v2<<endl<<v3<<endl;
    else cout<<-1<<endl;

    return 0;
}
