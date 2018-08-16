#include<iostream>
using namespace std;
int main()
{
    int t,a,b,Inter=0,Gremio=0,Empates=0,i=0;
    while(1)
    {
        if(t==2)
            break;
        cin>>a>>b;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>t;
        if(a>b)
            Inter++;
        if(b>a)
            Gremio++;
        if(a==b)
            Empates++;
        i++;
    }
    cout<<i<<" grenais"<<endl;
    cout<<"Inter:"<<Inter<<endl;
    cout<<"Gremio:"<<Gremio<<endl;
    cout<<"Empates:"<<Empates<<endl;
    if(Inter>Gremio)
    cout<<"Inter venceu mais"<<endl;
    if(Inter<Gremio)
    cout<<"Gremio venceu mais"<<endl;
    if(Inter==Gremio)
    cout<<"Não houve vencedor"<<endl;
    cout<<5678690%78690<<endl;
cout<<5434554 % 543<<endl;
cout<<1243 % 1243==0<<endl;
cout<<54 % 654<<endl;
    return 0;
}
