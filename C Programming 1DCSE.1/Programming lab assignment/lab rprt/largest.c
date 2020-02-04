#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of 3 numbers \n");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest is %d", a);
        }
    }
    else
        {
            if(b>c)
            {
                printf("The largest  is %d", b);
            }
            else printf("The largest  is %d", c);
        }
    return 0;
}
