#include<stdio.h>
main()
{
    long i, j, n, sum=0, mult=1;
    printf("Enter the value of n: ");
    scanf("%ld", &n);
    for(i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("\nSummation of n: %ld \n",sum);
    for(j=1; j<=n; j++)
    {
        mult=mult*j;
    }
    printf("\nMultiplication of n: %ld\n",mult);
    return 0;
}



