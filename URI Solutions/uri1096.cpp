#include<iostream>
using namespace std;
int main(){

    for(float j=0; j<=2.1; j+=0.2){
        for(int i=1; i<=3; i++){
            cout<<"I="<<j<<" J="<<i+j<<endl;
        }
    }
    return 0;
}
