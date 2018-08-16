#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char str[100];
    str['=']='-';
    str['-']='0';
    str['0']='9';
    str['9']='8';
    str['8']='7';
    str['7']='6';
    str['6']='5';
    str['5']='4';
    str['4']='3';
    str['3']='2';
    str['2']='1';
    str['\\']=']';
    str[']']='[';
    str['[']='P';
    str['P']='O';
    str['O']='I';
    str['I']='U';
    str['U']='Y';
    str['Y']='T';
    str['T']='R';
    str['R']='E';
    str['E']='W';
    str['W']='Q';
    str['\'']=';';
    str[';']='L';
    str['L']='K';
    str['K']='J';
    str['J']='H';
    str['H']='G';
    str['G']='F';
    str['F']='D';
    str['D']='S';
    str['S']='A';
    str['/']='.';
    str['.']=',';
    str[',']='M';
    str['M']='N';
    str['N']='B';
    str['B']='V';
    str['V']='C';
    str['C']='X';
    str['X']='Z';
    str[' ']=' ';
    char a;
        while(( a = (getchar()))!=EOF)
        {
            if(a =='\n')
            cout<<endl;
            else
            putchar(str[a]);
        }
    return 0;
}
