#include<bits/stdc++.h>
using namespace std;
void insertionSort(int *ar, int n){
    for(int i=1; i<n; i++){
        int j = i;
        while(j>0 && ar[j-1]>ar[j]){
            swap(ar[j-1], ar[j]);
            j--;
        }
    }
}
void printArray(int ar[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", ar[i]);
    }
}
int main(){ 
    int ar[100]={5, 2, 42, 6, 1, 3, 2};
    int n = 7;
    insertionSort(ar, n);
    printArray(ar, n);
    return 0;
}
