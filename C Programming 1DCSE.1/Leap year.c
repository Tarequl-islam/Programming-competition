#include<stdio.h>

main()
{

    long int year;
    printf("Enter year: \n");
    scanf(" %d", &year);
    if(year%400==0) {
        printf("This is leap year");
    }
    else if(year%4==0&&year%100!=0){
        printf("This is leap year");
    }
    else printf("This is not leap year");

    return 0;
}

