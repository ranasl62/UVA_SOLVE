#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int k=1;
    while(1)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
            k++;
        if(k==11)
        {
            cout<<"The 1500'th ugly number is "<<i<<endl;
            return 0;
        }
        }
            i++;
    }
    return 0;
}
