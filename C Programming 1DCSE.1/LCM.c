#include<stdio.h>
main()
{
int n1, n2, a, b, temp, gcd, lcm;
printf("Enter the first number:");
scanf(" %d" ,&n1);
printf("Enter the second number:");
scanf(" %d" ,&n2);
a = n1;
b = n2;
while (b!=0)
{
    temp = a % b;
    a = b;
    b = temp;
}
gcd = a;
lcm = n1 * n2 / gcd;
printf("LCM is = %d\n",lcm);
printf("GCD is = %d\n",gcd);

return 0;
}
