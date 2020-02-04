#include<iostream>
using namespace std;
int Partition(int *A, int S, int E){ //Array A, Start S, End E
    int pivot = A[E];
    int pIndex = S;  //set partition index as start initially
    for(int i = S; i<E; i++){
        if(A[i] <= pivot){
            swap(A[i], A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex], A[E]);
    return pIndex;
}
void QuickSort(int *A, int S, int E){
    if(S<E){
        int pIndex = Partition(A, S, E);
        QuickSort(A, S, pIndex-1);
        QuickSort(A, pIndex+1, E);
    }
}
int main(){
    int A[]= {7,2,1,6,8,5,3,4};
    QuickSort(A, 0, 7);
    for(int i=0; i<8; i++)cout<<A[i]<<" ";
    return 0;
}
