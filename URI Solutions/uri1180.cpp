#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n], smallest=0, position=0;
    for(int i=0; i<n; i++){
        cin>>x[i];
        if(x[i]<smallest){
            smallest=x[i];
            position=i;
        }
    }
    cout<<"Menor valor: "<<smallest<<endl;
    cout<<"Posicao: "<<position<<endl;
    return 0;
}
