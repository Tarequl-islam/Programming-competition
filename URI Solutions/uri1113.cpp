#include<iostream>
using namespace std;
int main(){
    for(int j=1; j<=1000; j++){
        int a, b;
        cin>>a>>b;
        if(a==0 || b==0){
            break;
        }
        else if(a>0 && b>0){
            cout<<"primeiro"<<endl;
        }
        else if(a>0 && b<0){
            cout<<"quarto"<<endl;
        }
        else if(a<0 && b<0){
            cout<<"terceiro"<<endl;
        }
        else{
            cout<<"Crescente"<<endl;
        }
    }
    return 0;
}
