#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int A,B,C,D;
    float X, X1, X2;
    printf("Enter the value of A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
    D=B*B-4*A*C;
    if(D>0){
        X1=((-1)*B+sqrt(D))/2*A;
        X2=((-1)*B-sqrt(D))/2*A;
        printf("X1 = %.2f, X2 = %.2f", X1, X2);
    }
    else if(D==0){
        X=(-1)*B/2*A;
        printf("UNIQUE SOLUTION X= %.2f", X);
    }
    else
        printf("NO REAL SOLUTION");
    getch();
}
