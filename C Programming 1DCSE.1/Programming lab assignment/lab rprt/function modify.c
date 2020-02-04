#include <stdio.h>
void modify(int a);
main ( )
{
int a = 2;
printf("\n a = %d (from main, before calling the function)", a);
modify(a);
printf("\n a = %d (from main, after calling the function)", a );
return 0;
}
void modify (int a)
{
a *= 3;
printf("\n a = %d (from the function, after being modified)", a ) ;
return;
}
