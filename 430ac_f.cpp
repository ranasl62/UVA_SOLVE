#include<bits/stdc++.h>
using namespace std;

int main(){
    double l,r,x,y,k;
    scanf("%lf%lf%lf%lf%lf",&l,&r,&x,&y,&k);
    if((l/k>=x&&l/k<=y)||(r/k>=x&&r/k<=y))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


