// Heap Sort
// Best Case O(NlogN)
// Worst Case O(NlogN)
// Average Case O(NlogN)
// Memory O(1)
// Stable : NO
// N -> Number of elements
#include <iostream>
#include <cstdio>
using namespace std;
#define mx 100000
int heap_size;
int parent(int i)
{
    return i/2 ;
}
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i+1;
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Max_Heapify(int arr[],int i)
{
    int l = left(i);
    int r = right(i);
    int largest ;
    if(l<=heap_size&&arr[l]>arr[i]) largest = l;
    else largest = i ;
    if(r<=heap_size&&arr[r]>arr[largest]) largest = r;
    if(largest!=i)
    {
        swap(&arr[i],&arr[largest]);
        Max_Heapify(arr,largest);
    }
}
void Build_Max_Heap(int arr[],int N)
{
    heap_size = N ;
    for(int i=N/2; i>=1; i--) Max_Heapify(arr,i);
}
void Heap_Sort(int arr[],int N)
{
    Build_Max_Heap(arr,N);
    for(int i=N; i>1; i--)
    {
        swap(&arr[1],&arr[i]);
        heap_size = heap_size - 1;
        Max_Heapify(arr,1);
    }
}
int main()
{
    int N,arr[mx+10]; // N is the number of elements
    scanf("%d",&N);
    for(int i=1; i<=N; i++) scanf("%d",&arr[i]);
    Heap_Sort(arr,N);
    for(int i=1; i<=N; i++) printf("%d ",arr[i]);
    return 0;
}

