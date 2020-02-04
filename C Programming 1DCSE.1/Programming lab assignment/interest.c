#include<stdio.h>

main()
{
    float money, interest;
    printf("Enter the amount that you deposit: \n");
    scanf("%f", &money);

    interest = money/10;

    printf("You'll get : %.2f taka interest per month from bank\n", interest);

    return 0;
}

