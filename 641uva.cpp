#include<iostream>
#include<string>
using namespace std;
int main()
{
    int k;
    string str;
    while(cin>>k &&k)
    {
        cin>>str;
        int n=str.size();
        int arr[300+5];
        for(int i=0; i<n; i++)
        {
            if(str[i]=='.')
                arr[i]=27;
            else if(str[i]=='_')
                arr[i]=0;
            else arr[i]=(int)(str[i])-96;
            //cout<<arr[i]<<" ";
        }
           // cout<<endl;
        for(int i=0; i<n; i++)
        {
            int r=(arr[(k*i)%n]-i)%28;
            if(r<0)r+=28;
            if(r==27)
                cout<<".";
            else if(r==0)
                cout<<"_";
            else
                cout<<(char)(r+96);
                //cout<<((arr[(k*i)%n]-i)%28)<<endl;
        }
        cout<<endl;

         //ciphercode[i] = (plaincode[ki mod n] − i) mod 28.
    }
    return 0;
}
