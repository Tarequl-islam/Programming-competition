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
int BinarySearch(int ar[], int n, int itm){
    int beg=0;
    int endd=n-1;
    int mid=(int(beg+endd)/2);
    while (beg<=endd){
        if(itm==ar[mid]){
            return mid;
        }
        else if(itm<ar[mid]) endd=mid-1;
        else if(itm>ar[mid]) beg=mid+1;
        mid=(int(beg+endd)/2);
    }
    return -1;
}
int main(){
    int n, itm, i, j, mx;
    int ar[100005];
    cout<<"Enter number of elelment: ";
    cin>>n;
    cout<<"Enter elements of the array: "<<endl;
    for (i = 0; i < n; i++){
        cin>>ar[i];
    }
    BubbleSort(ar, n);
    cout<<"Sorted elements of the array: ";
    for (i = 0; i < n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\nEnter a number to search: ";
    cin>>itm;
    int res = BinarySearch(ar, n, itm);
    if(res!=-1) cout<<"\nItem found in the array index: "<<res+1<<endl;
    else cout<<"\nItem not found in the array"<<endl;
    return 0;
}
