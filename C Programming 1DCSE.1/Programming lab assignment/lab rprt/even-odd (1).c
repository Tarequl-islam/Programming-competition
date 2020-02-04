#include<stdio.h>

main()
{
    int i, a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);

    for(i=0; i<=5; i++)
    {
        if (a%2==0)
            printf("The Number is Even \n");
        else
            printf("The Number is Odd \n");
    }



    return 0;
}


