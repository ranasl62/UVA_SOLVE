
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a;
	int n;
	int arr[110];
	cin>>t;
	while(t--){
	cin>>n;
	for(int i=0;i<110;i++)arr[i]=0;
	for(int i=0;i<n;i++){
	int a;
	cin>>a;
	arr[a]++;
	}
	a=0;
	for(int i=0;i<110;i++){
	if(arr[i]>1){
	a+=arr[i]-1;
	}
	}
	cout<<a<<endl;
	}
	return 0;
}
