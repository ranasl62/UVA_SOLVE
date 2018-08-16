#include<iostream>
#include<stdio.h>

long long a1[128];
long long a2[128];
long long a3[128];
long long max1;
long long max2;
long long max3;
long long a;

using namespace std;

int main(){

    string str1,str2,str3;
    scanf("%I64d",&a);
    cin>>str1>>str2>>str3;

    for(int i=0;i<str1.size();i++){
        a1[(str1[i])]++;
        a2[(str2[i])]++;
        a3[(str3[i])]++;
    }

    for(int i=0;i<128;i++){
        max1=max(max1,a1[i]);
        max2=max(max2,a2[i]);
        max3=max(max3,a3[i]);
    }

    max1+=a;
    max2+=a;
    max3+=a;

    if(max1>str1.size())max1=str1.size()-(max1%2);
    if(max2>str1.size())max2=str1.size()-(max2%2);
    if(max3>str1.size())max3=str1.size()-(max3%2);

    if(max1> max2 && max1 > max3 ){puts("Kuro");return 0;}
    if(max2 > max1 && max2 > max3 ){puts("Shiro");return 0;}
    if(max3 > max2 && max3 > max1 ){puts("Katie");return 0;}

    puts("Draw");

    return 0;
}

