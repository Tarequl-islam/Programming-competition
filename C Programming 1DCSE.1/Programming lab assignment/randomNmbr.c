#include<stdio.h>
main ( )
{
    int i, n[100], m, s=0;
    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &n[i]);
        s += n[i];
    }
        printf("%d", s);
    return 0;
}



