#include <bits/stdc++.h>
using namespace std;
int arr[10000010];
long long merge(int left, int mid, int high)
{
    int i, j, k;
    long long counts = 0;
    int temp[high+1];
    i = left, j = mid, k = left;
    while ((i <= mid - 1) && (j <= high))
    {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            counts = counts + (mid - i);
        }
    }
    while (i <= mid - 1) temp[k++] = arr[i++];
    while (j <= high) temp[k++] = arr[j++];
    for (i=left; i <= high; i++)arr[i] = temp[i];
    return counts;
}


long long mergeSort(int left, int high)
{
    long long mid, counts = 0;
    if (high > left)
    {
        mid = (high + left)/2;

        counts = mergeSort(  left, mid);
        counts += mergeSort(  mid+1, high);
        counts += merge(left, mid+1, high);
    }
    return counts;
}

int main()
{
    // freopen("11858uva.txt","w",stdout);
    int t;
    while(cin>>t)
    {
        for(int i=1; i<=t; i++)cin>>arr[i];
        cout<<mergeSort(1,t)<<endl;
    }
    return 0;
}
