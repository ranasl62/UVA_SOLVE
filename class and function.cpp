#include<iostream>
using namespace std;
class rectangle
{
    public :
    int height;
    int weight;
    int area();
};
int rectangle :: area()
{
    return height * weight;
}
int main()
{
    rectangle object ;
    object.height=5;
    object.weight=6;
    cout<<"Area = "<<object.area()<<endl;
    return 0 ;
}
