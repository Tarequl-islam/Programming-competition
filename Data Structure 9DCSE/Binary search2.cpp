#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int ar[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n-i; j++){
            if(ar[j-1]>ar[j]){
                int tmp=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=tmp;
            }
        }
    }
}
int BinarySearch(int ar[], int left, int right, int itm){
    int mid=(int(left+right+1)/2);
    if(ar[mid]==itm)
        return mid;
    else if(left>=right) 
        return -1;
    else if(itm<ar[mid]) 
        BinarySearch(ar, left, mid-1, itm);
    else if(itm>ar[mid]) 
        BinarySearch(ar, mid+1, right, itm);
}
int main(){
    int n, itm, i, j, mx;
    int ar[100005];
    cout<<"\nEnter number of elelment: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    for (i = 0; i < n; i++){
        cin>>ar[i];
    }
    BubbleSort(ar, n);
    cout<<"\nSorted elements of the array: ";
    for (i = 0; i < n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\nEnter a number to search: ";
    cin>>itm;
    int res = BinarySearch(ar, 0, n, itm);
    if(res!=-1) cout<<"\nItem found in the array index: "<<res+1<<endl;
    else cout<<"\nItem not found in the array"<<endl;
    return 0;
}
