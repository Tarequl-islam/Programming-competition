#include<stdio.h>
main()
{
    long i, n, sum=0, mult=1;

    printf("Enter the value of n: ");
    scanf("%ld", &n);

    i=1;
    while(i<=n)
    {
        sum=sum+i;
        mult=mult*i;
        i++;
    }
    printf("\n Summation of n: %ld \n",sum);
    printf("\n Multiplication of n: %ld \n",mult);

    return 0;
}



