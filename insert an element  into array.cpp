/*  Inserting an element into a position of an array.
    The element and the insertion  point are inputs from the user. */

#include <bits/stdc++.h>
using namespace std;

int arr[]={10,15,25,-11,-25,30};

int main()
{
    int index,value ;

    cin >> value >> index ;

    arr[index-1] = value ;
    for(int i=0;i<sizeof(arr)/4;i++) cout << arr[i] << ' ' ;

    return 0 ;
}
