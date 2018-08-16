/* Deleting an element from an array. */

#include <bits/stdc++.h>
using namespace std;

int arr[]={10,15,25,-11,25,30};

int main()
{
    int value , n = sizeof(arr)/4 , index = -1 ;

    cin >> value ;

    for(int i=0;i<n;i++) if(arr[i]==value) index = i ;

    for(int i=0;i<n;i++) if(i!=index) cout << arr[i] << ' ' ;

    return 0 ;
}
