#include<iostream>
using namespace std;
class rectangle
{
private :
    int height;
    int weight;
public :
    void set(int h, int w);
    int area();
};
void rectangle ::set(int h, int w)
{
    height=h;
    weight=w;
}
int rectangle :: area()
{
    return height * weight;
}
int main()
{
    rectangle object ;
    object.set(5,6);
    cout<<"Area = "<<object.area()<<endl;
    return 0 ;
}
