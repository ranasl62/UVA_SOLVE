#include<stdio.h>
#define SIZE 256
static char stack[SIZE];
int top = -1;
void push(char c)
{
    stack[++top] = c;
}
void pop()
{
    stack[top--] = '\0';
}
int main()
{
    int n, i;
    char c;
    scanf("%d", &n);
    while (n--)
    {
        stack[SIZE] = {'\0'};
        top = -1;
        unsigned error = 0;
        char *par = new char[SIZE + 1];
        gets(par);

        for (i = 0; par[i]; ++i)
        {
            if(par[i] == ' ')
                continue;
            if(par[i] == '[' || par[i] == '(')
                push(par[i]);
            else if(par[i] == ']' && stack[top] == '[')
                pop();
            else if(par[i] == ')' && stack[top] == '(')
                pop();

            else
            {
                error = 1;
                break;
            }
        }
        if(error || top > -1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
