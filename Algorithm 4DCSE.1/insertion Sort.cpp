#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i, j, k, key, A[]={5,2,4,6,1,3};
    cout<<"Before Sorting.... \n";
    for(k=0; k<6; k++){
        cout<<A[k]<<" ";
    }
    for(j=1; j<6; j++){
        key=A[j];
        i=j-1;
        while(i>-1 && A[i]>key){
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }
    cout<<"\n\nAfter Sorting....\n";
    for(k=0; k<6; k++){
        cout<<A[k]<<" ";
    }
    return 0;
}
