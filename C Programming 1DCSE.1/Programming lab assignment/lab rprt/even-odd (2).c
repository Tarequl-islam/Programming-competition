#include<stdio.h>
main()
{
    int a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    if (a%2==0)
        printf("The Number is Even \n");
    else
        printf("The Number is Odd \n");
    return 0;
}
