#include <cstdio>
using namespace std;
#define mx 100000
void Merge(int arr[],int low,int mid,int high)
{
    int temp [high-low+1];
    int i = low , j = mid + 1 , k = 1;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while(i<=mid) temp[k++] = arr[i++];
    while(j<=high) temp[k++] = arr[j++];
    for(i=1; i<k; i++) arr[low++] = temp[i];
}
void Merge_Sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid = low + (high-low) / 2 ; // Same as (low+high)/2 , but avoid overflow for large low .
        Merge_Sort(arr,low,mid);
        Merge_Sort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}
int main()
{
    int N,arr[mx+10]; // N is the number of elements
    scanf("%d",&N);
    for(int i=1; i<=N; i++) scanf("%d",&arr[i]);
    Merge_Sort(arr,1,N);
    for(int i=1; i<=N; i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
