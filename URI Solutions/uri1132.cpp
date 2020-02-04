#include<iostream>
using namespace std;
int main(){
        int a, b, c=0;
        cin>>a>>b;
        if(a>b){
            for(int i=b; i<=a; i++){
                if(i%13!=0){
                    c+=i;
                }
            }
            cout<<c<<endl;
        }
        else{
            for(int k=a; k<=b; k++){
                if(k%13!=0){
                    c+=k;
                }
            }
            cout<<c<<endl;
        }
    return 0;
}
