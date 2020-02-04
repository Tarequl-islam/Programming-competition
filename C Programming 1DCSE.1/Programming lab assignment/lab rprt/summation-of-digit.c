#include<stdio.h>

main()
{
    int a, b, c, d, e, f, g, sum;
    printf("Enter a four digit integer value: \n");
    scanf("%d", &a);

    b = a/1000;
    c = a%1000;
    d = c/100;
    e = c%100;
    f = e/10;
    g = e%10;

    sum = b+d+f+g;

    printf("summation of number : %d \n", sum);

    return 0;
}

