#include<stdio.h>
int main()
{
    int relation,Length ,i,j,k,x,y;

    printf("Elements in Set: ");

    scanf("%d",&Length );

    printf( "Number of Relations: ");

    scanf("%d",&relation);

    int matrix[Length ][Length ];

    for ( i = 0; i < Length ; i++)
        for (j = 0; j < Length ; j++) matrix[i][j] = 0;

    for (i = 0; i < relation; i++)
    {
        scanf("%d%d",&x,&y);
        matrix[x - 1][y - 1] = 1;
    }

    for ( i = 0; i < Length ; i++)
    {
        for (j = 0; j < Length ; j++)
        {
            printf("%d",matrix[i][j]) ;
            if (j != Length  - 1) printf(" ");
        }
        printf("\n");
    }

    int reflexive = 1;
    for ( i = 0; i < Length ; i++)
    {
        if (matrix[i][i] != 1)
        {
            reflexive = 0;
            break;
        }
    }
    reflexive ? printf("Reflexive\n"): printf("Not Reflexive\n");

    int symmetric = 1;
    for ( i = 0; i < Length  - 1; i++)
        for (j = i + 1; j < Length ; j++)
            if (matrix[i][j] == 1)
                if(matrix[j][i] != 1)
                {
                    symmetric = 0;
                    break;
                }
    symmetric ? printf("Symmetric\n"): printf("Not Symmetric\n");

    int antisymmetric = 1;
    for (i = 0; i < Length  - 1; i++)
        for ( j = i + 1; j < Length ; j++)
            if (matrix[i][j] == 1)
                if(matrix[j][i] != 0)
                {
                    antisymmetric = 0;
                    break;
                }
    antisymmetric ? printf("Anti-Symmetric\n"): printf("Not Anti-Symmetric\n");

    int transitive = 1;
    for (i = 0; i < Length ; i++)
        for ( j = 0 ; j < Length ; j++)
            if(matrix[i][j])

                for(k=0; k<Length ; k++)
                    if(matrix[j][k])
                        if(!(matrix[i][k]))
                        {
                            transitive=0;
                            break;
                        }
    transitive ? printf("Transitive\n"): printf("Not Transitive\n");
    return 0;
}
