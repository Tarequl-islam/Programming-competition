#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int ar[], int n){
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 1; j < n-i; j++){
            if(ar[j-1]>ar[j]){
                swap(ar[j-1], ar[j]);
                swapped = true;
            }
        }
        if(swapped==false) break;
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
    bubbleSort(ar, n);
    printArray(ar, n);
    return 0;
}
