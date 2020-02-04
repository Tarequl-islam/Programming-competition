#include<stdio.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n==1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    hanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    hanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n;
    printf("enter the amount of disk");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

//search tower of hanoi in youtube
