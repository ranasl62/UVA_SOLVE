#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,g,b;
    cin>>r>>g>>b;
    long long x=min(min(min(r,g),b),(long long)2);
    long long tmp = 0;
	for(int i=0;i<=x;i++){
		tmp = max(tmp, i + (r - i) / 3 + (g - i) / 3 + (b - i) / 3);
	}
    cout<<tmp<<endl;
    return 0;
}
