/* Find k-th maximum and k-th minimum from an array. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , arr[100] , k , temp ;

    cin >> n ;
    for(int i=0;i<n;i++) cin >> arr[i] ;
    cin >> k ;

    sort(arr,arr+n); // You can use any sorting algorithm here

    temp = k ;

    for(int i=0;i<n&&temp!=0;i++)
    {
        if(i!=0&&arr[i]==arr[i-1]) continue ;
        temp--;
        if(temp==0) cout << k <<"th minimum elements = " << arr[i] << endl ;
    }

    if(temp!=0) cout << k <<"th minimum element does not exist for this array\n";

    temp = k ;

    for(int i=n-1;i>=0&&temp!=0;i--)
    {
        if(i!=n-1&&arr[i]==arr[i+1]) continue ;
        temp--;
        if(temp==0) cout << k << "th maximum elements = " << arr[i] << endl ;
    }

    if(temp!=0) cout << k << "th maximum element does not exist for this array\n";

    return 0 ;
}
