#include<iostream>
using namespace std;
void display(int *start, int *end)
{
    int *p;
    for(p=start;p!=end;p++)
    {
        cout<<*p<<endl;
        *p=1;
    }
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,22,13,14,15,16,17,18,155,20};
    display(array,array+20);
    for(int i=0;i<20;i++)
    cout<<array[i]<<endl;
    return 0;

}
