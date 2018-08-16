#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , arr[100] , mx = 0 ;

    cin >> n ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    sort(arr,arr+n); // You can use any sorting algorithm here

    for(int i=0;i<n;i++) mx = max(mx,count(arr,arr+n,arr[i]));

    cout << "Maximum = " << arr[n-1] << '\n';
    cout << "Minimum = " << arr[0] << '\n';
    cout << "median = " << arr[n/2] << '\n';
    cout << "Mode = " ;

    for(int i=0;i<n;i++)
    {
        if(i!=0&&arr[i]==arr[i-1]) continue ;
        if(count(arr,arr+n,arr[i])==mx) cout << arr[i] << ' ';
    }
    return 0 ;
}

