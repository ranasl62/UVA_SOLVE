
// Counting Sort
// Numbers must be 0 to 10000000 . Negative numbers is not approved for this sorting algorithm .
// Best Case O(N+K)
// Worst Case O(N+K)
// Average Case O(N+K)
// Memory O(N+K)
// Stable : YES
// N -> Number of elements K -> temporary array size
#include <cstdio>
#include <iostream>
using namespace std;
#define mx 1000
void counting_sort(int A[],int B[],int N,int K)
{
    int C[mx];
    for(int i=0;i<=K;i++) C[i] = 0;
    for(int i=1;i<=N;i++) C[A[i]] = 1;
    for(int i=1;i<=K;i++) C[i] = C[i]+ C[i-1];
    for(int i=N;i>0;i--)
    {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
}
int main()
{
    int N,A[mx],B[mx],K=-1; // N is the number of elements . B is the sorted array.
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
        K=max(K,A[i]);
    }
    counting_sort(A,B,N,K);
    for(int i=1;i<=N;i++) printf("%d ",B[i]);
    return 0;
}
