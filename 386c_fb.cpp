#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string temp;
    cin>>temp;
    string s="";
    while(n--)
    {
        if(temp.length()%2!=0){
            s=s+temp[0];
            temp.erase(0,1);
        }
            else{
                s=temp[0]+s;
            temp.erase(0,1);

            }
    }
    cout<<s<<endl;
    return 0;
}
