#include<stdio.h>

int main()
{
    int a[5][5];
    int b[5][5];
    int c[5][5];
    int d[5][5];
    int k , l;
    int i,j;
    printf("Enter the rows and columns");
    scanf("%d %d", &k,&l);
    printf("enter the values of the matrix");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    printf("Addition\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    printf("Transpose\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            d[j][i] = c[i][j];
            printf("%d \t", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}