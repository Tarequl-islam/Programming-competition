#include<stdio.h>
int main ( )
{
    char c[80];
    int i;
    for (i=0; i<80; i++)
    {
        scanf("%c", c[i]);
    }
    for(i=0; i<80; i++)
    {
        printf("%c", toupper(c[i]));
    }
    return 0;
}
