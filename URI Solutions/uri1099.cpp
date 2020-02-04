#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=1; j<=n; j++){
        int a, b, c=0;
        cin>> a>>b;
        if(a>b){
            for(int i=(b+1); i<a; i++){
                if(i%2!=0){
                    c+=i;
                }
            }
            cout<<c<<endl;
        }
        else{
            for(int k=(a+1); k<b; k++){
                if(k%2!=0){
                    c+=k;
                }
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
