#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m, n[10000];
    cin>>m;
    for(int i=1; i<=m; i++){
        cin>>n[i];
    }
    for(int j=1; j<=m; j++){
        if(n[j]%2==0){
            if(n[j]>0){
                cout<<"EVEN POSITIVE"<<endl;
            }
            else if(n[j]<0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else cout<<"NULL"<<endl;
        }
        else if(n[j]%2!=0){
            if(n[j]>0){
                cout<<"ODD POSITIVE"<<endl;
            }
            else if(n[j]<0){
                cout<<"ODD NEGATIVE"<<endl;
            }
            else cout<<"NULL"<<endl;
        }
    }
    return 0;
}
