#include<bits/stdc++.h>
using namespace std;
int arr[1010];
vector<int>prime;
void make_prime()
{
    for(int i=0;i<1010;i+=2)arr[i]=1;
    arr[2]=0;
    prime.push_back(1);
    prime.push_back(2);
    for(int i=3;i<1010;i+=2)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(int j=i*2;j<1010;j+=i)arr[j]=1;
        }
    }
}
int main()
{
    make_prime();
    int N,C;
     while(scanf("%d %d", &N, &C) == 2) {
        int i = upper_bound(prime.begin(), prime.end(), N) - prime.begin();
        while(i >= prime.size() || prime[i] > N) i--;

        i++; // increment index to represent size
        //cout<<i<<endl;
        int c = (i % 2)? C * 2 - 1 : C * 2; // get size of printed list
        int s = (i - c) > 0? (i - c) / 2 : 0; // calc start index
        int e = (i - c) > 0? s + c : i; // calc end index

        printf("%d %d:", N, C);
        for(int j = s; j < e; j++)
            printf(" %d", prime[j]);
        printf("\n\n");
    }
    return 0;
}
