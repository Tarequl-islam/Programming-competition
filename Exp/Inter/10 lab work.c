#include<stdio.h>
#include<conio.h>
main()
{
float c, f;
printf("Enter temparature in farenheit:");
scanf(" %f" ,&f);
c=((f-32)*5)/9;
printf("The temparature in centigret is : %f", c);
return 0;
}
