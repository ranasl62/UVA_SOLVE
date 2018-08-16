#include<bits/stdc++.h>
using namespace std;
vector<int>humble;
void make_humble()
{
    humble.push_back(1);
    int i=3;
   while(1)
    {
        if(i%2==0 || i%3==0 || i%5==0 || i%7==0){
            humble.push_back(i);
        }
            humble.push_back(i-1);
            i+=2;
            if(humble.size()>=5842)break;

    }
}
int main()
{
    make_humble();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(!n)break;
        if(n%3==1)
            printf("The %dst humble number is %d.\n",n,humble[n]);
        else if(n%3==2)
            printf("The %dnd humble number is %d.\n",n,humble[n]);
        else if(n%3==0)
            printf("The %drd humble number is %d.\n",n,humble[n]);
        else
            printf("The %dth humble number is %d.\n",n,humble[n]);
    }

    return 0;
}
