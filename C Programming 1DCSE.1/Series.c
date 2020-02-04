#include<stdio.h>

main()
{

    int n, i, sum=0;
    printf("Enter total digit of the series: \n");
    scanf(" %d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("The Series addition is: %d", sum);

    return 0;
}
