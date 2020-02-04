#include<stdio.h>

main()
{
    int i, a;

    for(i=0; i<=5; i++)
    {
        printf("\nEnter the value of a: ");
        scanf("%d", &a);
        if (a%2==0)
            printf("The Number is Even \n");
        else
            printf("The Number is Odd \n");
    }



    return 0;
}


