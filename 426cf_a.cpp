#include<iostream>
using namespace std;
int main()
{
  string str="v<^>",temp="";
  char a,b;
  long long n;
  int p;
  cin>>a>>b>>n;
  for(int i=0;i<4;i++)
	if(a==str[i])
      p=i;
 for(int i=p;i<4;i++)
 temp+=str[i];
  for(int i=0;i<p;i++)
 temp+=str[i];
    if(b==temp[n%4]){
      cout<<"cw"<<endl;
    return 0;
}
else{

	swap(temp[0],temp[3]);	swap(temp[1],temp[2]);

	if(b==temp[n%4]){
      cout<<"ccw"<<endl;
    return 0;
	}
}

  	
cout<<"undefined"<<endl;	
 return 0;
}
