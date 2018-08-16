#include<iostream>
using namespace std;
int main()
{
    int i;
    int *ptr;
    ptr=new int (5);
    cout<<*ptr<<endl;
    delete (ptr);
   ptr = new int [5];
   for(i=0;i<5;i++)
   cin>>ptr[i];
for(int i=0;i<5;i++)
    cout<<ptr[i]<<" ";
   cout<<endl;
   delete [] ptr;
    return 0;
}
