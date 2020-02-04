#include<stdio.h>
#include<string.h>
main ( )
{
    char one[200], two[200];
    gets(one);
    strcpy(two,one);
    strrev(two);
    if(strcmp(one, two) == 0)
        printf("\n the entered string is a palidrome \n");
    else printf("\n the entered string is not a palidrome \n");
    return 0;
}




