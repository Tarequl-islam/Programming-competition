#include<stdio.h>
int main(){
    int n, m, i, j, a, ar[100];
    printf("Enter how many element do you want to take: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for ( i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    printf("\nEnter number of elements you want to delete: ");
    scanf("%d",&m);
    for(j=0; j<m; j++){
        printf("\nEnter which index you want to delete: ");
        scanf("%d",&a);
        for ( i = a-1; i < n-1; i++){
            ar[i]=ar[i+1];
        }
        n-=1;
        printf("Array elements after deleting the element: ");
        for ( i = 0; i < n; i++){
            printf("%d ",ar[i]);
        }
    }
    return 0;
}
