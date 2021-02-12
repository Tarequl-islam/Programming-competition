#include<stdio.h>
int main(){
    int n, m, i, j, ar[100], item[100], position[100];
    printf("Enter how many element do you want to take: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for ( i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    printf("\nEnter number of items you want to insert: ");
    scanf("%d",&m);
    printf("Enter %d items and positions: ", m);
    for (i = 0; i < m; i++){
        scanf("%d %d", &item[i], &position[i]);
        position[i]--;
    }
    for (i = 0; i < m; i++){
        for (j = n+i+1; j > position[i]; j--){
            ar[j]=ar[j-1];
        }
        ar[position[i]]=item[i];
    }
    n= n+m;
    printf("Array elements after inserting elements: ");
    for ( i = 0; i < n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
