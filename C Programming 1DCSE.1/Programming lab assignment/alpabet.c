#include<stdio.h>

main()
{

    char ch;
    printf("Enter a input \n");
    scanf("%c", &ch);


    if((ch>='A'&& ch<='Z')|| (ch>='a'&& ch<='z'))
        printf("The input is Alphabet \n");

    else

        printf("The input is digit \n");

    return 0;
}



