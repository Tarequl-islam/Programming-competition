#include<stdio.h>
int main()
{
    int m, p, c, d, e;
    printf("Enter the value of m, p and c \n");
    scanf("%d %d %d",&m, &p, &c);
    d = m+p+c;
    e = m+p;
    if(m>=65)
    {
        if(p>=55)
        {
            if(c>=50)
            {
                if(d>=180 || e>=140)
                {
                    printf("You are Eligible");
                }
            }
        }
    }
    else printf("You are not Eligible");
    return 0;
}
