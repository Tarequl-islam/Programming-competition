#include<bits/stdc++.h>
using namespace std;
void CountingSort(int *ar, int mx, int n){
    int count[mx]={0};
    int output[mx];
    for(int i = 0; i<n; i++) count[ar[i]]++;
    for(int i = 1; i<=mx; i++) count[i] += count[i-1];
    for(int i = 0; i<n; i++) {
        output[count[ar[i]]-1] = count[ar[i]]; 
        count[ar[i]]--;
    }
    for(int i = 0; i<n; i++) ar[i]=output[i];
}

int main(){
    int ar[]={3, 7, 1, 8, 4, 2, 6, 5};
    int n =8;
    CountingSort(ar, 10, n);
    for(int i=0; i<n; i++)
        cout<<ar[i]<<" ";
    return 0;
}