#include<iostream>
using namespace std;
int main(){
    for(int j=1; j<=1000; j++){
        int a, b, c=0;
        cin>>a>>b;
        if(a<=0 || b<=0){
            break;
        }
        else if(a>b){
            for(int i=b; i<=a; i++){
                cout<<i<<" ";
                c+=i;
            }
            cout<<"Sum="<<c<<endl;
        }
        else{
            for(int k=a; k<=b; k++){
                cout<<k<<" ";
                c+=k;
            }
            cout<<"Sum="<<c<<endl;
        }
    }
    return 0;
}
