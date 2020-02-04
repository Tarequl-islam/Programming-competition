#include<iostream>
using namespace std;
int main(){
    int i, j, key, A[]={2,4,6,1,8,3};
    cout<<"Before sorting...: ";
    for(i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
    for(j=0; j<6; j++){
        key=A[j];
        i=j-1;
        while(i<-1 && A[i]>key){
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }

    cout<<"After Sorting...: ";
    for(i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
