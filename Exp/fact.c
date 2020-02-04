#include<stdio.h>
int factorial (int n)
{
    int i, fact, j, sum=0;
    for(i=1; i<=n; i++)
    {
        fact=1;
        for(j=1; j<=i; j++)
        {
            fact= fact*j;
        }
        sum= sum+fact;
    }
    return sum;
}
int main()
{
    int n, sum;
    scanf("%d", &n);
    sum= factorial (n);
    printf("summation = %d", sum);
    return 0;

}
