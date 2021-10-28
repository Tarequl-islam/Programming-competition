#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int ar[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(ar[min]>ar[j]) 
                swap(ar[min], ar[j]);
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
    SelectionSort(ar, n);
    printArray(ar, n);
    return 0;
}



