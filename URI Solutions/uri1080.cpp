#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, x[1000], highest=0, position=0;
    cin>>n;
    for(int i=0;i<n; i++){
        cin>>x[i];
        if(x[i]<highest){
            highest=x[i];
            position=i;
        }
    }
    cout<<"Menor valor: "<<highest<<endl;
    cout<<"Posicao: "<<position<<endl;
    return 0;
}
