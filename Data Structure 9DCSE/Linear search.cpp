#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n, m, indx=-1, nm;
    int ar[10000];
    cout<<"Enter number of elelment: "<<endl;
    cin>>n;
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<"Enter how many elements to search: ";
    cin>>m;
    for(int j=0; j<m; j++){
        indx=-1;
        cout<<"Enter a number to search: ";
        cin>>nm;
        for(int i=0; i<n; i++){
            if(ar[i]==nm){
                indx=i;
            }
        }
        if(indx!=-1)
            cout<<"\nIndex of the number is: "<<indx+1<<endl;
        else cout<<"Number not found"<<endl;
    }
    return 0;
}
