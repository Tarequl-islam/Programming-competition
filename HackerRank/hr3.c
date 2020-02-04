#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, sub;
    float c, d, sum1, sub1;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum = a + b;
    sub = a - b;
    sum1 = c + d;
    sub1 = c - d;

    printf("%d %d \n", sum, sub);
    printf("%.2f %.2f \n", sum1, sub1);



    return 0;
}
