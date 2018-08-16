#include<bits/stdc++.h>
using namespace std;

struct List{
    int t;
    int k;
    int d;
    List (int t,int k,int d)
    {
        this->t=t;
        this->k=k;
        this->d=d;
    }

};
class compare{
   public :
        bool operator()(const List &a,const List&b)
    {
        return a.t+a.d > b.t+b.d ;
    }
};
int main()

{

    priority_queue<List,vector<List>,compare>Q;
    int n;
    int q;
    int t;
    int k;
    int d;

    cin>>n>>q;
    int s=n;
    int startT;
    int endT;
    int lastK;
    cin>>t>>k>>d;
    int p=0;
    if(k<=n)cout<<(k*(k+1))/2<<endl;
    else cout<<-1<<endl;
    q--;
    List a();
   // m.insert(make_pair <int,int>( t+d,k));
    int T=t+d;
    while(q--)
    {
       cin>>t>>k>>d;

    }

    return 0;
}
