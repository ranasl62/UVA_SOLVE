#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
bool square(int i){

    int number = i*i;
    int sum = 0;
    while (number)
    {
        sum+=number%10;
        number/=10;
    }
    int numberSum = sqrt(sum);
    if(numberSum*numberSum == sum )return true;
    return false;
}
int main()
{
    vector <int > number;
    int p=0;
    for(int i=16;;i++)
    {
        if(p==7 )break;
        if(square(i)){
         p++;
            number.push_back(i);
        }
        else
        {
            number.clear();
            p=0;

        }
    }
    for(int i=0;i<7;i++)
        cout<<number[i]<<" "<<number[i]*number[i]<<endl;
    return 0;
}
