#include<stdio.h>
main()
{
int a, b, temp, gcd;
printf("Enter the first number:");
scanf(" %d" ,&a);
printf("Enter the second number:");
scanf(" %d" ,&b);

while (b!=0)
{
    temp = a % b;
    a = b;
    b = temp;
}
gcd = a;
printf("GCD is = %d",gcd);

return 0;
}
