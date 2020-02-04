#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int a, b=0;
        cin>>a;
        for(int j=1; j<a; j++){
            if(a%j==0){
                b+=j;
            }
        }
        if(a==b){
            cout<<a<<" eh perfeito"<<endl;
        }
        else cout<<a<<" nao eh perfeito"<<endl;
    }
    return 0;
}
