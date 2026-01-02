#include<stdio.h>

void main()
{
    int N = 0;
    int a = 0;
    int b = 0;
    printf("Enter the max end of numbers\n");
    scanf("%d", &N);
    for(int i=1;i<=N;i++)
    {
        if(i%2 == 0)
            a++;
        else
            b++;
    }
    printf("Even numbers = %d\n", a);
    printf("odd numbers = %d\n", b);


    int c = 0;
    int d = 0;
    int j = 1;
    while(j <= N)
    {
        if(j%2 ==0)
            c++;
        else
            d++;
        j++;
    }
    printf("Even numbers = %d\n", c);
    printf("odd numbers = %d", d);
}