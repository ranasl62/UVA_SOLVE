#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    char a[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    cin>>n;
    for(int i=0; i<n; i++)
        printf("%c",a[i]);
    printf("\n");
    return 0;
}
