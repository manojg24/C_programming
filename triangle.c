#include<stdio.h>

void main()
{
    int N = 0;
    int a = 0;
    int b = 0;
    printf("Enter the size of traingle\n");
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    a = 0;
    b = 0;

    for(a=N;a>=1;a--)
    {
        for(b=a;b>=1;b--)
        {
            printf("*");
        }
        printf("\n");
    }
}