#include<stdio.h>
main()
{
    long r, n, sum=0;
    printf("Enter the value of n: ");
    scanf("%ld", &n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\n Summation of each digit is: %ld \n",sum);
    return 0;
}
