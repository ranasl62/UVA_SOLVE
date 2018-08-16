#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int weight;
public :
    int area();
    rectangle(int h, int w);
    ~rectangle();
};
int rectangle::area()
{
    return height * weight;
}
rectangle::rectangle(int h,int w)
{
    height=h;
    weight =w;
    cout<<"Contractive "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"Distractive "<<area()<<endl;
}
int main()
{
    rectangle obj(5,6) ,obj1(2,3),obj2(2,9),obj3(5,8);
    return 0;

}
