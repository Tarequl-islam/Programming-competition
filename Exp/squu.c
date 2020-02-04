#include<stdio.h>
#define PI 3.14
int main()
{
    int redius, volume;
    printf("Enter redius of the circle (in CM):");
    scanf("%d", &redius);
    volume=(4*PI*redius)/3;
    printf("\n Volume of the circle is :%d", volume);
    return 0;
}
