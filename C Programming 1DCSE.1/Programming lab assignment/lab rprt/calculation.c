#include<stdio.h>

main()
{
    float a, b, add, sub, mult, div;
    printf("Enter two number: \n");
    scanf("%f %f", &a, &b);
    add = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;

    printf(" The Addition of two number is : %f \n", add);
    printf(" The Substraction of two number is : %f \n", sub);
    printf(" The Multiplication of two number is : %f \n", mult);
    printf(" The Divition of two number is : %f \n", div);

    return 0;
}
