#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, j=0, k=0, l=0, m=0;
    for(int i=0; i<=4; i++){
        cin>>n;
        if(n%2==0){
            j++;
        }
        else k++;
        if(n>0){
            l++;
        }
        if(n<0){
            m++;
        }
    }
    cout<<j<<" valor(es) par(es)"<<endl;
    cout<<k<<" valor(es) impar(es)"<<endl;
    cout<<l<<" valor(es) positivo(s)"<<endl;
    cout<<m<<" valor(es) negativo(s)"<<endl;
    return 0;
}
