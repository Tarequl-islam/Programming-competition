#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n, swap=0,cmp=0, tmp=0;
    int ar[10000];
    cout<<"Enter number of elelment: "<<endl;
    cin>>n;
    cout<<"Enter elelments of the array: "<<endl;
    for(int i=1; i<n; i++){
        cin>>ar[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n-i; j++){
            cmp++;
            if(ar[j-1]>ar[j]){
                swap++;
                tmp=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=tmp;
            }
        }
    }
    cout<<"Array elements after sorting: "<<endl;
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\nNumber of comparision: "<<cmp<<endl;
    cout<<"Number of swap: "<<swap<<endl;
    return 0;
}
