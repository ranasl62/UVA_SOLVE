#include<iostream>
using namespace std;
int main(void)
{
    int n, count=0;
    cin>>n;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    cout<<"The number of digit is : "<<count<<endl;
    return 0;
}
