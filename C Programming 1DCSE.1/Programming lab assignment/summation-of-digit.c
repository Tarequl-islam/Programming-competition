#include<stdio.h>

main()
{
    int a, b, c, d, e, f, g, h, i, sum;
    printf("Enter the value of a: \n");
    scanf("%d", &a);

    b = a/10000;
    c = a%10000;
    d = c/1000;
    e = c%1000;
    f = e/100;
    g = e%100;
    h = g/10;
    i = g%10;

    sum = b+d+f+h+i;

    printf("summation of number : %d \n", sum);

    return 0;
}

