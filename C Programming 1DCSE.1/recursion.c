#include <stdio.h>
long int factorial(int n); /* function prototype */
main ( )
{
int n;
long int factorial(int n);
/* read in the integer quantity */
printf("n = ");
scanf ("%d",&n);
/* calculate and display the factorial */
printf("n! = %ld\n", factorial(n));
}
long int factorial(int n) /* calculate the factorial */
{
if (n <= 1)
return(1);
else
return(n * factorial(n - 1));
}
