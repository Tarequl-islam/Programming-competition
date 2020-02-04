#include<iostream>
using namespace std;
int main(){
        int a, b, c=0;
        cin>>a>>b;
        if(a>b){
            for(int i=(b+1); i<a; i++){
                if(i%5==2 || i%5==3){
                    cout<<i<<endl;
                }
            }
        }
        else{
            for(int k=(a+1); k<b; k++){
                if(k%5==2 || k%5==3){
                    cout<<k<<endl;
                }
            }
        }
    return 0;
}
