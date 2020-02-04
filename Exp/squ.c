#include<stdio.h>
#define PI 3.14
int cube(int i)
int main()
{
    int cube_r, redius, volume;
    printf("Enter redius of the circle (in CM):");
    scanf("%d", &redius);
    cube_r=cube(redius);
    volume=(4*PI*cube_r)/3;
    printf("\n Volume of the circle is :%d", volume);
}
{
    int cube(int i)
    return(i*i*i);
}
