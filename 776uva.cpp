#include <stdio.h>
#define max(a,b)(a>b)?a:b
char map[100][1000];
int res[100][1000];
char width[1000];
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1};
void solve(char src,int fill,int i,int j,int r,int c)
{
    if(i>=0&&j>=0&&i<r&&j<c&&map[i][j]==src&&!res[i][j])
    {
        int d;
        res[i][j]=fill;
        for(d=0;d<8;d++)
            solve(src,fill,i+dx[d],j+dy[d],r,c);
    }
}
int main()
{
    int i,j,top,max,l,m;
    char buffer[1000];
    char format[] = "%nd";
    top = 0;
    char done = 0;
    while(gets(buffer)&&!done)
    {
        if(buffer[0]=='%')
        {
            sol:
            max = 1;
            for(l=0;l<top;l++)
                for(m=0;m<j;m++)
                    res[l][m]=0;
            for(l=0;l<top;l++)
                for(m=0;m<j;m++)
                    if(!res[l][m])
                        solve(map[l][m],max++,l,m,top,j);
            for(l=0;l<j;l++)
            {
                int max = 0;
                for(m=0;m<top;m++)
                    max = max(max,res[m][l]);
                int places = 1;
                while(max>=10)
                {
                    max/=10;
                    places++;
                }
                width[l]=places+'0';
            }
            for(l=0;l<top;l++,putchar('\n'))
                for(m=0;m<j;m++)
                {
                    format[1]=width[m];
                    if(m)
                        putchar(' ');
                    printf(format,res[l][m]);
                }
            top = 0;
            putchar('%');
            putchar('\n');
            if(done)goto end;
        }
        else
        {
            j = 0;
            for(i=0;buffer[i];i++)
                if(buffer[i]!=' ')
                    map[top][j++] = buffer[i];
            top++;
        }
    }
    done = 1;
    goto sol;
    end:return 0;
}
