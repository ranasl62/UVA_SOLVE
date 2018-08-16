#include<iostream>
#include<stdio.h>
using namespace std;
int arr[11];
//unsigned int F(unsigned int a){
//    if(a==0)return 0;
//    else  if(a%10>0)return a%10;
//    else return F(a/10);
//}
//unsigned int Sum(unsigned int p, unsigned int q, unsigned int sum){
//   while(p<q+1){
//   sum+=F(p++);
//   }
//   return sum;
//}
unsigned int Sum(unsigned int a)
{
    unsigned int sum=0;
    int temp=0;
    if(a==0)return 0;
    while(a)
    {
        temp=a%10;
        if(a<10) sum+arr[a];
        else
        {
            sum = sum +45 *(a/10)+arr[temp];
            temp=0;
        }
        a/=10;
    }
    return sum;
}
int main()
{
//    //freopen("10994uva.txt","w",stdout);
//    unsigned int p,q,sum;
//    while(cin>>p>>q){
//            sum=0;
//        if(p<0&&q<0)break;
//    if(p>q)swap(p,q);
//    cout<<Sum(p,q,sum)<<endl;
//    }
    unsigned int p,q;
    arr[0]=0;
    for(int i=1; i<10; i++)
        arr[i]=i;
    arr[10]=1;
    for(int i=1; i<=10; i++)
    {
        arr[i]=arr[i-1]+arr[i];
    }
    while(cin>>p>>q)
    {

        if(p<0&&q<0)break;
        cout<<Sum(q)-Sum(p-1)<<endl;
    }
    return 0;
}
