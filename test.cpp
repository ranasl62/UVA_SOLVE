#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
string b="";
int fib( int n  )
{
    if(n==0) return   0;
    if(n==1) return 1;
    cout<<n <<" ";
    return  fib(n-1) + fib(n-2) + fib(n-1);

}
int count_a(int n)
{

if(n==0) return 0;
return 1 + count_a(n/2);
b = (n%2? "1":"0")+b;

}
void recursive (int n)
{
    if(n==0)return;
    cout<<n<<" ";
    recursive(n-1);
    cout <<n<<" ";
}
void xyz(int *p)
{
    for(int i=0;i<10;i++)
        cin>>*(p+i);
    for(int i=0;i<10;i++)
        cout<<*(p+i)<<" ";
    cout<<endl;
}
int main()
{
    //freopen("test.txt","w",stdout);......................................................................................................................................................................................................................................................................
    //cout<<fib(6);
   // int n=16;
    //cout<<count_a(n)<<endl;
    //cout<<b<<endl;
    //recursive(5);
    //int **p ;
    //xyz(*p);


    //stack <int> s;
    //s.push(5);
   // s.push(10);
   //cout<<s.top()<<" ";
   // s.push(15);
   //cout<<s.top()<<" ";
   // s.pop();
   // cout<<s.top()<<" ";
   string s ="Rana";
   string r = "Lipi";
   //cout<<s.compare(r)<<endl;

    //out<<(1529%9)<<endl;
    map<int,int>mymap;
int input[]={-102,1,134565589,134565589,-102,66666668,134565589,66666668,-102,1,-2};
int assign=0,compressed[100],c=0,n=sizeof(input)/sizeof(int); //array size;
for(int i=0;i<n;i++){
int x=input[i];
if(mymap.find(x)==mymap.end()){//x not yet compressed
mymap[x]=assign;
printf("Mapping %d with %d\n",x,assign);
assign++;
}
x=mymap[x];
compressed[ c++ ]=x;
}
printf("Compressed array: ");
for(int i=0;i<n;i++) printf("%d ",compressed[i]);puts("");




}
