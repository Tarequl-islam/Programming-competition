#include<iostream>
using namespace std;
int main(){
    for(int j=1; j<=1000; j++){
        int a;
        cin>>a;
        if(a==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}
