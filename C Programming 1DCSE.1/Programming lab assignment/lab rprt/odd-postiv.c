#include<stdio.h>

main()
{
    int a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);

    if (a%2==!0 && a>=0)
        printf("The Number is Odd and Positive \n");

    else printf("The Number is not Odd and Positive \n");

    return 0;
}


