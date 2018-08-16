#include<iostream>
#include"math.h"
#include"stdio.h"
using namespace std;
int main(){
    string str;
    int t;
    cin>>t;
    getchar();
    while(t--){
            string strout="";
            getline(cin,str);
            int len = str.length();
        double a = sqrt(double(len));
        if(!(a==floor(a))) cout<<"INVALID"<<endl;
        for(int i=0;i<a;i++){
            for(int j=i;j<len;j+=a)
            if(j<=len)strout+=str[j];
        }
    cout<<strout<<endl;
    }
return 0;
}
