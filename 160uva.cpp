#include<iostream>
#include<cstdio>
#include<math.h>
#include<vector>
using namespace std;
int arr[100];
vector<int>prime;
void make_prime()
{
    prime.push_back(2);
    for(int i=3;i<100;i+=2)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(int j=i*2;j<100;j+=i)arr[j]=1;
        }
    }
}
int main()
{
    make_prime();
    //for(int i=0;i<prime.size();i++)cout<<prime[i]<<" ";
    int n;
    while(scanf("%d",&n)!=EOF)
    {

    }
    return 0;
}
