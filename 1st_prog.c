#include<stdio.h>
void main()
{
    printf("Hello World");

    /*
    \n - next line
    \t - tab space
    */

    int a = 1;
    int b = 3;
    int c = a+b;
    printf("\n%d", c); 

    /*
    %d - int
    %f - float
    %c - char
    %p - pointer address
    */

    int d =4;
    float r = 3.14;
    // float y = d*r;
    printf("\n%f", d*r);
}
