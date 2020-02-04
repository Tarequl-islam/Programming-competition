#include<iostream>
using namespace std;
int main(){
    int alcohol=0, gasolin=0, diesel=0;
    for(int j=1; j<=1000; j++){
        int a;
        cin>>a;
        if(a==1){
            alcohol+=1;
        }
        else if(a==2){
            gasolin+=1;
        }
        else if(a==3){
            diesel+=1;
        }
        else if(a==4){
            break;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcohol<<endl;
    cout<<"Gasolina: "<<gasolin<<endl;
    cout<<"Diesel: "<<diesel<<endl;
    return 0;
}
