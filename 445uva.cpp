#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    char str[200];
    while(gets(str)){
        int number=0;
        for(int i=0;str[i];i++)
        {
            switch(str[i])
            {
                case '0'...'9':number+=str[i]-'0';break;
                case 'b':
                    for(int j=0;j<number;j++)putchar(' ');
                    number=0;
                    break;
                case '!':puts("");
                default:
                    for(int j=0;j<number;j++)
                        putchar(str[i]);
                    number=0;
            }
        }
        puts("");
    }

    return 0;
}
