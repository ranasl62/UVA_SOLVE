#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> r[2];
    for(int i=1;i<=35;i++)
        r[i%2].push_back(i);

        cout<<endl;
    cout<<r[0].size()<< "   "<<r[1].size()<<endl;


    for(;!r[0].empty();){
        cout<<r[0].back()<<" ";
        r[0].pop_back();
    }
    cout<<endl;
     for(;!r[1].empty();){
        cout<<r[1].back()<<" ";
        r[1].pop_back();
    }
    cout<<endl;
    cout<<r[0].size()<< "   "<<r[1].size()<<endl;
    return 0;
}
