#include <stdio.h>
#include<conio.h>

void main(void)
{
    int arr[4][4],i,j;
    int (*ptr)[4]=arr;
    // declaring a 2D array of size 4 by 4...
    long sum=0; // setting the variable sum to zero...


    printf("Enter 9 elements one by one :\n");

    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",(ptr[i]+j));
	}
    }

    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    sum+=*(ptr[i]+j);
	}
	*(ptr[i]+3)=sum;
	sum=0;
    }
    sum=0;
    for(j=0;j<3;j++)
    {
	for(i=0;i<3;i++)
	{
	    sum+=*(ptr[i]+j);
	}
	*(ptr[3]+j)=sum;
	sum=0;
    }

    printf("\nOutput Matrix :\n");
    for(i=0;i<4;i++)
    {
	for(j=0;j<4;j++)
	{
	    printf("\t%d",*(ptr[i]+j));
	}
	printf("\n");
    }

	getch();


}
