#include<bits/stdc++.h>
using namespace std;
void Merge(int *ar, int from, int to, int mid){
    int i = from;
    int j = mid+1;
    int temp[to+1];
    for(int k=from; k<=to; k++){
        if(j>to) temp[k] = ar[i++];
        else if(i>mid) temp[k] = ar[j++];
        else if(ar[i]>ar[j]) temp[k] = ar[j++];
        else temp[k] = ar[i++];
    }
    for(i = from; i<=to; i++){
        ar[i] = temp[i];
    }
}
void MergeSort(int *ar, int from, int to){
    int mid;
    if(from<to){
        mid = (from+to)/2;
        MergeSort(ar, from, mid);
        MergeSort(ar, mid+1, to);
        Merge(ar, from, to, mid);
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
    MergeSort(ar, 0, n-1);
    printArray(ar, n);
    return 0;
}

