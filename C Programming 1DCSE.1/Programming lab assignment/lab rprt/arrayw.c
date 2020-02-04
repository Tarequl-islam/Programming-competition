#include<stdio.h>
int main()
{
    int a[100], n, i;
    printf("How many values:");
    scanf("%d",&n);
    for(i=0; i<n ; i++)
    {
        printf("The value of element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    return 0;
}
