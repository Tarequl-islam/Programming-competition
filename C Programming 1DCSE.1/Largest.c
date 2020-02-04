#include<stdio.h>

main()
{

int a, b, c;
printf("Enter three numbers:");
scanf(" %d %d %d" ,&a,&b,&c);
if(a>b&&a>c)
    printf("Largest numbers is: %d",a);
else if(b>a&&b>c)
    printf("Largest numbers is: %d",b);
else printf("Largest numbers is: %d",c);

return 0;
}

