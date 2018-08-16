#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct student
{
    long long id;
    string name;
    double cgpa;
    student (long long id , string name , double cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }
    ~student ()
    {
        cout<<"Completed Successful"<<endl;
    }
};
int main()
{
    int *arr;
    arr = new int [100];
    for(int i=0;i<100;i++)
        arr[i]=i;
    for(int i=0;i<100;i++)
        cout<<*(arr+i)<<endl;

student rana(2015100000130,"Rana",3.96);
cout<<"Name : "<<rana.name<<endl;
cout<<"ID : "<<rana.id<<endl;
cout<<"CGPA : "<<rana.cgpa<<endl;
    return 0;

}
