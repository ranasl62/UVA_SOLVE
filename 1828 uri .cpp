#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i;
    string a,b;
    cin>>n;
    cin.ignore();
    for (i=1; i<=n; i++)
    {
        cin >> a >> b;
        if(a==b) cout<<"Caso #"<<i<<": De novo!"<<endl;
        else if(a=="tesoura"&&b=="papel")  cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="papel"&&b=="pedra")    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="pedra"&&b=="lagarto")  cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="lagarto"&&b=="spock")  cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="spock"&&b=="tesoura")  cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="tesoura"&&b=="lagarto")cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="lagarto"&&b=="papel")  cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="papel"&&b=="spock")    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="spock"&&b=="pedra")    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else if(a=="pedra"&&b=="tesoura")  cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        else                               cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;

    }
    return 0;
}
