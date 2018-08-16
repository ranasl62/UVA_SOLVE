#include<iostream>
using namespace std;
int  display(int a)
{
    if(a==1)
        return 1;
    return display(a-1)+a;
}
int main()
{
    int a ;
    cin>>a;
   cout<< display(a);
    return 0;
}
