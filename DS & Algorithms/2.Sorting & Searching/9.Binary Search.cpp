#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *ar, int x, int l, int r){
    if(l>r) return -1;
    int mid = (l+r)/2;
    if(ar[mid]==x) return mid;
    if(ar[mid]>x) BinarySearch(ar, x, l, mid-1);
    else BinarySearch(ar, x, mid+1, r);
}
int main(){
    int ar[]={3, 7, 1, 8, 4, 2, 6, 5};
    int n =8;
    sort(ar, ar+n);
    for(int i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl<<BinarySearch(ar, 9, 0, n-1)<<endl;
    return 0;
}